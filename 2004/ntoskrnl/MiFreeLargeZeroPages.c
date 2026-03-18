/*
 * XREFs of MiFreeLargeZeroPages @ 0x1402E13CC
 * Callers:
 *     MiCleanupPageTablePages @ 0x1402E1364 (MiCleanupPageTablePages.c)
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargeZeroPages(int a1, char *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebp
  char *v6; // r14
  _QWORD **v7; // rdi
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v14 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v6 = (char *)((char *)MiLargePageSizes - a2);
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
        result = MiReleaseFreshPage(v12);
      }
      else
      {
        MiUpdateLargePageBitMap(a1, (__int64)(v12 + 0xB000000000LL) / 48, *(_QWORD **)((char *)v7 + (_QWORD)v6), 0, 1);
        v9 = MiLockPageInline(v12);
        *(_QWORD *)&v13 = (__int64)(v12 + 0xB000000000LL) / 48;
        *((_QWORD *)&v13 + 1) = a3;
        v14 = v9;
        result = MiInsertLargePageInNodeList(&v13, v10, v11);
      }
    }
    ++v4;
    ++v7;
  }
  while ( v4 < 4 );
  return result;
}
