/*
 * XREFs of sub_180042074 @ 0x180042074
 * Callers:
 *     sub_180041BF8 @ 0x180041BF8 (sub_180041BF8.c)
 * Callees:
 *     sub_18004226C @ 0x18004226C (sub_18004226C.c)
 */

__int64 __fastcall sub_180042074(__int128 *a1, _OWORD *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  LSTATUS v7; // eax
  signed int v8; // ebx
  unsigned int v9; // ebx
  LSTATUS v10; // eax
  bool v11; // sf
  _OWORD *v12; // rdi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-69h]
  __int128 v19; // [rsp+40h] [rbp-59h]
  __int128 v20; // [rsp+50h] [rbp-49h]
  __int128 v21; // [rsp+60h] [rbp-39h]
  __int128 v22; // [rsp+70h] [rbp-29h]
  __int128 v23; // [rsp+80h] [rbp-19h]
  __int128 v24; // [rsp+90h] [rbp-9h]
  __int128 v25; // [rsp+A0h] [rbp+7h]
  __int128 v26; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v27; // [rsp+C0h] [rbp+27h]
  __int128 v28; // [rsp+D0h] [rbp+37h]
  unsigned int v29; // [rsp+100h] [rbp+67h] BYREF
  HKEY hKey; // [rsp+110h] [rbp+77h] BYREF
  HKEY phkResult; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *a1;
  hKey = 0LL;
  v3 = a1[1];
  phkResult = 0LL;
  v18 = v2;
  v19 = v3;
  v20 = a1[2];
  v21 = a1[3];
  v22 = a1[4];
  v23 = a1[5];
  v24 = a1[6];
  v25 = a1[7];
  v5 = a1[9];
  v26 = a1[8];
  v6 = a1[10];
  v27 = v5;
  v28 = v6;
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0xC0070000;
  if ( v8 >= 0 )
  {
    if ( (int)sub_18004226C(hKey, L"MemoryFlags", &v29) >= 0 )
    {
      v17 = v18;
      if ( (v29 & 0xFFFFFFF0) == 0 )
        v17 = v29;
      LODWORD(v18) = v17;
    }
    v9 = DWORD1(v18);
    if ( (int)sub_18004226C(hKey, L"CustomizationFlags", &v29) >= 0 )
    {
      if ( (v29 & 0xFFFFFFC0) == 0 )
        v9 = v29;
      DWORD1(v18) = v9;
    }
    v10 = RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows NT\\ResourceManager",
            0,
            0x20019u,
            &phkResult);
    v11 = v10 < 0;
    if ( v10 > 0 )
      v11 = 1;
    if ( !v11 && (int)sub_18004226C(phkResult, L"SimulateCommitSavings", &v29) >= 0 && v29 <= 1 )
      DWORD1(v18) = ((unsigned __int8)v9 ^ (unsigned __int8)(2 * v29)) & 2 ^ v9;
    sub_18004226C(hKey, L"UserPresenceIoDeduction", &v26);
    *a2 = v18;
    a2[1] = v19;
    a2[2] = v20;
    a2[3] = v21;
    a2[4] = v22;
    a2[5] = v23;
    a2[6] = v24;
    v12 = a2 + 8;
    v13 = v26;
    v8 = 0;
    *(v12 - 1) = v25;
    v14 = v27;
    *v12 = v13;
    v15 = v28;
    v12[1] = v14;
    v12[2] = v15;
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return (unsigned int)v8;
}
