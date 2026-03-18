/*
 * XREFs of MiFreeLargeZeroPages @ 0x14024F714
 * Callers:
 *     MiCleanupPageTablePages @ 0x14024F6AC (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403B91E8 (MiPfnRangeIsZero.c)
 *     MiCreateLargePfnList @ 0x14055C42C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  char *v6; // r14
  _QWORD **v7; // rdi
  unsigned __int8 v9; // al
  _QWORD *v10; // rsi
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v12 = 0LL;
  v4 = 0;
  v11 = 0LL;
  v6 = (char *)((char *)MiLargePageSizes - a2);
  v7 = (_QWORD **)a2;
  do
  {
    while ( 1 )
    {
      v10 = *v7;
      if ( !*v7 )
        break;
      *v7 = (_QWORD *)*v10;
      if ( v4 == 3 )
      {
        result = MiReleaseFreshPage(v10, a2);
      }
      else
      {
        MiUpdateLargePageBitMap(a1, (__int64)(v10 + 0xB000000000LL) / 48, *(_QWORD **)((char *)v7 + (_QWORD)v6), 0, 1);
        v9 = MiLockPageInline(v10);
        *(_QWORD *)&v11 = (__int64)(v10 + 0xB000000000LL) / 48;
        *((_QWORD *)&v11 + 1) = a3;
        v12 = v9;
        result = MiInsertLargePageInNodeList(&v11);
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return result;
}
