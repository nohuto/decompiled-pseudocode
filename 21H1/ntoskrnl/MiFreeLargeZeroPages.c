/*
 * XREFs of MiFreeLargeZeroPages @ 0x1403264CC
 * Callers:
 *     MiCleanupPageTablePages @ 0x140326464 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 *     MiCreateLargePfnList @ 0x14055840C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  char *v6; // r14
  _QWORD **v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rsi
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v16 = 0LL;
  v4 = 0;
  v15 = 0LL;
  v6 = (char *)((char *)MiLargePageSizes - a2);
  v7 = (_QWORD **)a2;
  do
  {
    while ( 1 )
    {
      v14 = *v7;
      if ( !*v7 )
        break;
      *v7 = (_QWORD *)*v14;
      if ( v4 == 3 )
      {
        result = MiReleaseFreshPage(v14);
      }
      else
      {
        MiUpdateLargePageBitMap(a1, (__int64)(v14 + 0xB000000000LL) / 48, *(_QWORD **)((char *)v7 + (_QWORD)v6), 0, 1);
        v11 = MiLockPageInline(v14, v9, v10);
        *(_QWORD *)&v15 = (__int64)(v14 + 0xB000000000LL) / 48;
        *((_QWORD *)&v15 + 1) = a3;
        v16 = v11;
        result = MiInsertLargePageInNodeList(&v15, v12, v13);
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return result;
}
