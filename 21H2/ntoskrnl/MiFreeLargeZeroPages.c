/*
 * XREFs of MiFreeLargeZeroPages @ 0x1402FD354
 * Callers:
 *     MiCleanupPageTablePages @ 0x1402FD2EC (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403B9BE8 (MiPfnRangeIsZero.c)
 *     MiCreateLargePfnList @ 0x14055DEFC (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiInsertLargePageInNodeList @ 0x1402FEA50 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x140300090 (MiUpdateLargePageBitMap.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  char *v6; // r14
  _QWORD **v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  _QWORD *v12; // rsi
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v14 = 0LL;
  v4 = 0;
  v5 = a3;
  v13 = 0LL;
  v6 = (char *)MiLargePageSizes - a2;
  v7 = (_QWORD **)a2;
  do
  {
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      *v7 = (_QWORD *)*v12;
      if ( v4 == 3 )
      {
        result = MiReleaseFreshPage((__int64)v12, a2, a3);
      }
      else
      {
        MiUpdateLargePageBitMap(a1, (__int64)(v12 + 0xB000000000LL) / 48, *(_QWORD **)((char *)v7 + (_QWORD)v6), 0, 1);
        v11 = MiLockPageInline(v12, v9, v10);
        *(_QWORD *)&v13 = (__int64)(v12 + 0xB000000000LL) / 48;
        *((_QWORD *)&v13 + 1) = v5;
        v14 = v11;
        result = MiInsertLargePageInNodeList(&v13);
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return result;
}
