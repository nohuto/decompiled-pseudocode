/*
 * XREFs of CmpGetStateSepKeysRedirectionPathValue @ 0x140A62390
 * Callers:
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A62328 (CmpFindRedirectedDriverServiceStateNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407AD0F4 (CmpValueToData.c)
 *     CmpFindHiveSubKey @ 0x140A60704 (CmpFindHiveSubKey.c)
 */

char __fastcall CmpGetStateSepKeysRedirectionPathValue(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int SubKeyByName; // esi
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned int ValueByName; // esi
  ULONG_PTR v13; // rax
  __int64 v14; // r8
  unsigned __int16 v15; // dx
  unsigned __int16 i; // cx
  _DWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+30h] BYREF
  int v23; // [rsp+94h] [rbp+34h]

  v23 = HIDWORD(a3);
  v18[1] = 0;
  v19[1] = 0;
  v20[1] = 0;
  v17[1] = 0;
  v18[0] = -1;
  v19[0] = -1;
  v20[0] = -1;
  v22 = 0;
  v21 = 0LL;
  v17[0] = -1;
  if ( !CmpFindHiveSubKey(BugCheckParameter3, a2, (__int128 *)L"pr", &v21, (__int64)v17) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v21, (__int64)L"\b\n");
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v17);
  if ( SubKeyByName == -1 )
    return 0;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
         BugCheckParameter3,
         SubKeyByName,
         v18);
  if ( !v9 )
    return 0;
  v10 = CmpFindSubKeyByName(BugCheckParameter3, v9, (__int64)&CmpDriverStateSourceIdName);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v18);
  if ( v10 == -1 )
    return 0;
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v10, v19);
  if ( !v11 )
    return 0;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v11, (__int64)&CmpTargetNtPathString);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v19);
  if ( ValueByName == -1 )
    return 0;
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          ValueByName,
          v20);
  if ( !v13 )
    return 0;
  *(_QWORD *)(a4 + 8) = CmpValueToData(BugCheckParameter3, ValueByName, v13, &v22, a5);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v20);
  v14 = *(_QWORD *)(a4 + 8);
  if ( !v14 )
    return 0;
  v15 = v22;
  *(_WORD *)(a4 + 2) = v22;
  *(_WORD *)a4 = 0;
  if ( v15 )
  {
    for ( i = 0; i < v15; *(_WORD *)a4 = i )
    {
      if ( !*(_WORD *)(v14 + 2 * ((unsigned __int64)i >> 1)) )
        break;
      i += 2;
    }
  }
  return 1;
}
