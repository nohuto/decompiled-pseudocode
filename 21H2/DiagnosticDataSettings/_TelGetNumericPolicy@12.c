/*
 * XREFs of _TelGetNumericPolicy@12 @ 0x10002610
 * Callers:
 *     _TelIsRestrictivePolicySet@4 @ 0x10002850 (_TelIsRestrictivePolicySet@4.c)
 *     _TelpReadMdmSetting@8 @ 0x10002A92 (_TelpReadMdmSetting@8.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003377 (-_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

int __stdcall TelGetNumericPolicy(int a1, _DWORD *a2, _DWORD *pvData)
{
  FARPROC PolicyManager_GetPolicy; // edi
  HMODULE Library; // eax
  HMODULE v5; // esi
  FARPROC PolicyManager_FreeGetPolicyData; // eax
  signed int v7; // esi
  wil::details::in1diag3 *v8; // ecx
  const WCHAR *v9; // esi
  LSTATUS ValueW; // eax
  bool v11; // sf
  void *v12; // eax
  unsigned int v14; // [esp+0h] [ebp-24h]
  const char *v15; // [esp+4h] [ebp-20h]
  int v16; // [esp+8h] [ebp-1Ch]
  int v17; // [esp+Ch] [ebp-18h] BYREF
  int v18; // [esp+10h] [ebp-14h]
  HMODULE hLibModule; // [esp+14h] [ebp-10h]
  DWORD pcbData; // [esp+18h] [ebp-Ch] BYREF
  int (__thiscall *v21)(_DWORD, _DWORD); // [esp+1Ch] [ebp-8h]
  wil::details::in1diag3 *v22; // [esp+20h] [ebp-4h] BYREF

  *pvData = 0;
  PolicyManager_GetPolicy = 0;
  *a2 = 0;
  v21 = 0;
  Library = LoadLibraryExW(L"policymanager.dll", 0, 0x800u);
  v5 = Library;
  hLibModule = Library;
  if ( Library )
  {
    PolicyManager_GetPolicy = GetProcAddress(Library, "PolicyManager_GetPolicy");
    PolicyManager_FreeGetPolicyData = GetProcAddress(v5, "PolicyManager_FreeGetPolicyData");
    v21 = (int (__thiscall *)(_DWORD, _DWORD))PolicyManager_FreeGetPolicyData;
  }
  else
  {
    PolicyManager_FreeGetPolicyData = 0;
  }
  v22 = 0;
  v17 = 0;
  v18 = 0;
  if ( PolicyManager_GetPolicy && PolicyManager_FreeGetPolicyData )
  {
    v17 = 1;
    v18 = 2;
    v7 = ((int (__thiscall *)(FARPROC, const wchar_t *, int, int *, wil::details::in1diag3 **))PolicyManager_GetPolicy)(
           PolicyManager_GetPolicy,
           L"System",
           a1,
           &v17,
           &v22);
    if ( v7 >= 0 )
    {
      v8 = v22;
      if ( v22 )
      {
        if ( !*((_DWORD *)v22 + 1) )
        {
          *a2 = 0;
          goto LABEL_31;
        }
        if ( *((_DWORD *)v22 + 2) == 1 )
        {
          *pvData = *((_DWORD *)v22 + 3);
          *a2 = 1;
          goto LABEL_31;
        }
      }
      v7 = -2147024883;
      goto LABEL_31;
    }
  }
  else
  {
    v9 = L"LimitEnhancedDiagnosticDataWindowsAnalytics";
    if ( __o__wcsicmp(a1, L"LimitEnhancedDiagnosticDataWindowsAnalytics") )
    {
      if ( __o__wcsicmp(a1, L"ConfigureTelemetryOptInChangeNotification") )
      {
        if ( __o__wcsicmp(a1, L"ConfigureTelemetryOptInSettingsUx") )
        {
          v9 = L"DisableDeviceDelete";
          if ( __o__wcsicmp(a1, L"DisableDeviceDelete") )
          {
            v9 = L"DisableDiagnosticDataViewer";
            if ( __o__wcsicmp(a1, L"DisableDiagnosticDataViewer") )
            {
              v9 = L"AllowCommercialDataPipeline";
              if ( __o__wcsicmp(a1, L"AllowCommercialDataPipeline") )
              {
                v9 = L"AllowTelemetry";
                if ( __o__wcsicmp(a1, L"AllowTelemetry") )
                {
                  v9 = L"DisableOneSettingsDownloads";
                  if ( __o__wcsicmp(a1, L"DisableOneSettingsDownloads") )
                  {
                    v9 = L"EnableOneSettingsAuditing";
                    if ( __o__wcsicmp(a1, L"EnableOneSettingsAuditing") )
                    {
                      v8 = v22;
                      v7 = -2147024809;
                      goto LABEL_31;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v9 = L"DisableTelemetryOptInSettingsUx";
        }
      }
      else
      {
        v9 = L"DisableTelemetryOptInChangeNotification";
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
               v9,
               0x18u,
               0,
               pvData,
               &pcbData);
    v7 = ValueW;
    v11 = ValueW < 0;
    if ( ValueW > 0 )
    {
      v7 = (unsigned __int16)ValueW | 0x80070000;
      v11 = 1;
    }
    if ( !v11 )
      *a2 = 1;
  }
  v8 = v22;
  if ( v7 == -2147024894 )
  {
    v7 = 0;
    *a2 = 0;
  }
LABEL_31:
  if ( v8 )
  {
    v12 = (void *)v21(v21, v8);
    if ( (int)v12 < 0 )
      wil::details::in1diag3::_Log_Hr(v8, v12, v14, v15, v16);
  }
  if ( hLibModule )
    FreeLibrary(hLibModule);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(v8, (void *)v7, v14, v15, v16);
  return v7;
}
