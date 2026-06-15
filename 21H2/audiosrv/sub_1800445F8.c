/*
 * XREFs of sub_1800445F8 @ 0x1800445F8
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1800445F8(__int16 *a1)
{
  unsigned int v1; // edx
  BOOL v2; // edi
  DWORD v4; // ebx
  HRESULT v5; // eax
  unsigned int v6; // r9d
  __int16 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rax
  DWORD cchName; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  v1 = dword_18019E43C;
  v2 = 0;
  hKey = 0LL;
  if ( !dword_18019E43C )
  {
    if ( RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\SPDIF_Formats",
           0,
           8u,
           &hKey) )
    {
      goto LABEL_22;
    }
    v4 = 0;
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v4, sz, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      v5 = CLSIDFromString(sz, (LPCLSID)&unk_18019E860 + v4);
      v1 = dword_18019E43C;
      if ( v5 >= 0 )
        v1 = ++dword_18019E43C;
      if ( ++v4 >= 0x20 )
        goto LABEL_10;
    }
    v1 = dword_18019E43C;
  }
LABEL_10:
  if ( a1 )
  {
    v6 = 0;
    if ( v1 )
    {
      v7 = *a1;
      while ( 1 )
      {
        v8 = 16LL * v6;
        if ( v7 == -2 )
          break;
        v9 = 0x80001000000000LL - *(_QWORD *)((char *)&unk_18019E860 + v8 + 2);
        if ( *(_QWORD *)((char *)&unk_18019E860 + v8 + 2) == 0x80001000000000LL )
        {
          v10 = *(unsigned int *)((char *)&unk_18019E860 + v8 + 10);
          v9 = 939567616 - v10;
          if ( v10 == 939567616 )
            v9 = 29083LL - *(unsigned __int16 *)((char *)&unk_18019E860 + v8 + 14);
        }
        if ( !v9 )
        {
          if ( *(_WORD *)((char *)&unk_18019E860 + v8) == v7 )
          {
            v2 = 1;
            goto LABEL_22;
          }
          v2 = 0;
          goto LABEL_20;
        }
LABEL_21:
        if ( ++v6 >= v1 )
          goto LABEL_22;
      }
      v12 = *((_QWORD *)a1 + 3) - *(_QWORD *)((char *)&unk_18019E860 + v8);
      if ( !v12 )
        v12 = *((_QWORD *)a1 + 4) - *(_QWORD *)((char *)&unk_18019E860 + v8 + 8);
      v2 = v12 == 0;
LABEL_20:
      if ( v2 )
        goto LABEL_22;
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
