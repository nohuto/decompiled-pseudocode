/*
 * XREFs of _TelpReadUsersPolicySetting@12 @ 0x10002C36
 * Callers:
 *     _TelpReadGroupPolicySetting@8 @ 0x10002A07 (_TelpReadGroupPolicySetting@8.c)
 *     _TelpReadMdmSetting@8 @ 0x10002A92 (_TelpReadMdmSetting@8.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x10002211 (TelpReadRegistryDword.c)
 *     _TelGetLocalAllowTelemetryRegPath@0 @ 0x100023B0 (_TelGetLocalAllowTelemetryRegPath@0.c)
 *     ?StringCchCatW@@YGJPAGIPBG@Z @ 0x10003317 (-StringCchCatW@@YGJPAGIPBG@Z.c)
 *     ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9 (-StringCchCopyW@@YGJPAGIPBG@Z.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 *     _memset @ 0x10004BC6 (_memset.c)
 */

signed int __fastcall TelpReadUsersPolicySetting(_BYTE *a1, int *a2, const WCHAR *a3)
{
  _BYTE *v3; // ebx
  WCHAR *v4; // edi
  const wchar_t *LocalAllowTelemetryRegPath; // eax
  signed int v6; // esi
  LSTATUS v7; // eax
  bool v8; // sf
  LSTATUS v9; // eax
  bool v10; // sf
  HANDLE ProcessHeap; // eax
  DWORD v12; // ebx
  LSTATUS v13; // eax
  LSTATUS v14; // eax
  int v15; // eax
  char v16; // cl
  HANDLE v17; // eax
  SIZE_T v19; // [esp-4h] [ebp-244h]
  unsigned int v20; // [esp+0h] [ebp-240h]
  unsigned int v21; // [esp+0h] [ebp-240h]
  const unsigned __int16 *v22; // [esp+4h] [ebp-23Ch]
  const unsigned __int16 *v23; // [esp+4h] [ebp-23Ch]
  DWORD cchName; // [esp+14h] [ebp-22Ch] BYREF
  int pvData; // [esp+18h] [ebp-228h] BYREF
  DWORD cSubKeys; // [esp+1Ch] [ebp-224h] BYREF
  DWORD cbMaxSubKeyLen; // [esp+20h] [ebp-220h] BYREF
  _BYTE *v29; // [esp+24h] [ebp-21Ch]
  int v30; // [esp+28h] [ebp-218h]
  HKEY phkResult; // [esp+2Ch] [ebp-214h] BYREF
  char v32; // [esp+33h] [ebp-20Dh]
  WCHAR SubKey[260]; // [esp+34h] [ebp-20Ch] BYREF

  v3 = a1;
  phkResult = 0;
  v4 = 0;
  v32 = 0;
  v29 = a1;
  v30 = 3;
  *a1 = 1;
  memset(SubKey, 0, sizeof(SubKey));
  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  v6 = StringCchCopyW((size_t)LocalAllowTelemetryRegPath, v20, v22);
  if ( v6 >= 0 )
  {
    v6 = StringCchCatW(L"\\Users", v21, v23);
    if ( v6 >= 0 )
    {
      v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult);
      v6 = v7;
      v8 = v7 < 0;
      if ( v7 > 0 )
      {
        v6 = (unsigned __int16)v7 | 0x80070000;
        v8 = 1;
      }
      if ( !v8 )
      {
        cSubKeys = 0;
        cbMaxSubKeyLen = 0;
        v9 = RegQueryInfoKeyW(phkResult, 0, 0, 0, &cSubKeys, &cbMaxSubKeyLen, 0, 0, 0, 0, 0, 0);
        v6 = v9;
        v10 = v9 < 0;
        if ( v9 > 0 )
        {
          v6 = (unsigned __int16)v9 | 0x80070000;
          v10 = 1;
        }
        if ( !v10 )
        {
          v19 = 2 * cbMaxSubKeyLen + 2;
          ProcessHeap = GetProcessHeap();
          v4 = (WCHAR *)HeapAlloc(ProcessHeap, 0, v19);
          if ( !v4 )
          {
            v6 = -2147024882;
            goto LABEL_31;
          }
          v12 = 0;
          if ( cSubKeys )
          {
            do
            {
              cchName = cbMaxSubKeyLen + 1;
              v13 = RegEnumKeyExW(phkResult, v12, v4, &cchName, 0, 0, 0, 0);
              v6 = v13;
              if ( v13 > 0 )
                v6 = (unsigned __int16)v13 | 0x80070000;
              if ( v6 == -2147024894 )
                goto LABEL_20;
              if ( v6 < 0 )
                goto LABEL_26;
              v14 = TelpReadRegistryDword(&pvData, phkResult, v4, a3);
              v6 = v14;
              if ( v14 == -2147024894 )
              {
LABEL_20:
                v16 = v32;
                v15 = v30;
              }
              else
              {
                if ( v14 < 0 )
                {
LABEL_26:
                  v3 = v29;
                  goto LABEL_27;
                }
                v15 = v30;
                v16 = 1;
                v32 = 1;
                if ( pvData < v30 )
                {
                  v15 = pvData;
                  v30 = pvData;
                }
              }
              ++v12;
            }
            while ( v12 < cSubKeys );
            if ( !v16 )
              goto LABEL_24;
            v3 = v29;
            *a2 = v15;
          }
          else
          {
LABEL_24:
            v3 = v29;
            *v29 = 0;
          }
          v6 = 0;
        }
      }
    }
  }
LABEL_27:
  if ( v6 == -2147024894 )
  {
    v6 = 0;
    *v3 = 0;
  }
  if ( v4 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v4);
  }
LABEL_31:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v6;
}
