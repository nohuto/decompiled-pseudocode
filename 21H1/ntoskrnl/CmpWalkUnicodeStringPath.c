/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x140793AEC
 * Callers:
 *     CmpWalkPath @ 0x140793AA4 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140A59AF8 (CmpFindHiveSubKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x140793B98 (CmpGetNextName.c)
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
      CmpFindSubKeyByNameWithStatus(a1, v5, (unsigned __int16 *)&v7, &v9);
      a2 = v9;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
