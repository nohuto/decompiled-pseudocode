/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x1407AC938
 * Callers:
 *     CmpWalkPath @ 0x1407AC8F0 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140A60704 (CmpFindHiveSubKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpGetNextName @ 0x1407AC9E4 (CmpGetNextName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407ACAF8 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+74h] [rbp+34h]

  v10 = -1;
  v7 = 0LL;
  v11 = 0;
  v8 = *a3;
  while ( 1 )
  {
    CmpGetNextName(&v8, &v7, &v9);
    if ( !(_WORD)v7 )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v10);
    if ( v5 )
    {
      v9 = 0;
      CmpFindSubKeyByNameWithStatus(a1, v5, &v7, &v9);
      a2 = v9;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
