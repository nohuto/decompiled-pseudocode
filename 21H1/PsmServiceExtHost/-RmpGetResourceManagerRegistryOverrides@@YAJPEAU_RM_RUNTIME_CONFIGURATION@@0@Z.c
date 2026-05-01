/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180042364
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180041BC8 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     ?HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x18004255C (-HampSystemQueryDWordValue@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_RUNTIME_CONFIGURATION *a2)
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

  v2 = *(_OWORD *)a1;
  hKey = 0LL;
  v3 = *((_OWORD *)a1 + 1);
  phkResult = 0LL;
  v18 = v2;
  v19 = v3;
  v20 = *((_OWORD *)a1 + 2);
  v21 = *((_OWORD *)a1 + 3);
  v22 = *((_OWORD *)a1 + 4);
  v23 = *((_OWORD *)a1 + 5);
  v24 = *((_OWORD *)a1 + 6);
  v25 = *((_OWORD *)a1 + 7);
  v5 = *((_OWORD *)a1 + 9);
  v26 = *((_OWORD *)a1 + 8);
  v6 = *((_OWORD *)a1 + 10);
  v27 = v5;
  v28 = v6;
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0xC0070000;
  if ( v8 >= 0 )
  {
    if ( (int)HampSystemQueryDWordValue(hKey, L"MemoryFlags", &v29) >= 0 )
    {
      v17 = v18;
      if ( (v29 & 0xFFFFFFF0) == 0 )
        v17 = v29;
      LODWORD(v18) = v17;
    }
    v9 = DWORD1(v18);
    if ( (int)HampSystemQueryDWordValue(hKey, L"CustomizationFlags", &v29) >= 0 )
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
    if ( !v11 && (int)HampSystemQueryDWordValue(phkResult, L"SimulateCommitSavings", &v29) >= 0 && v29 <= 1 )
      DWORD1(v18) = ((unsigned __int8)v9 ^ (unsigned __int8)(2 * v29)) & 2 ^ v9;
    HampSystemQueryDWordValue(hKey, L"UserPresenceIoDeduction", (unsigned int *)&v26);
    *(_OWORD *)a2 = v18;
    *((_OWORD *)a2 + 1) = v19;
    *((_OWORD *)a2 + 2) = v20;
    *((_OWORD *)a2 + 3) = v21;
    *((_OWORD *)a2 + 4) = v22;
    *((_OWORD *)a2 + 5) = v23;
    *((_OWORD *)a2 + 6) = v24;
    v12 = (_OWORD *)((char *)a2 + 128);
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
