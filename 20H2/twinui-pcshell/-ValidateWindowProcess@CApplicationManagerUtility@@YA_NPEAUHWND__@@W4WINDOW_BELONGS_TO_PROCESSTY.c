/*
 * XREFs of ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x18015B088
 * Callers:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180065A28 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180165AC0 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x180469E1C (-GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x18046B1BC (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

bool __fastcall CApplicationManagerUtility::ValidateWindowProcess(
        CallerIdentity *a1,
        int a2,
        enum PROCESS_UICONTEXT *a3)
{
  bool v3; // bl
  void **v4; // r8
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF
  HLOCAL hMem; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    hMem = 0LL;
    if ( (GetWindowThreadProcessId((HWND)a1, &dwProcessId) || ResultFromKnownLastError() >= 0)
      && (int)CallerIdentity::GetPackageSidFromProcess(dwProcessId, &hMem, v4) >= 0 )
    {
      if ( !(unsigned int)RtlGetAppContainerSidType(hMem, &dwProcessId) )
        v3 = dwProcessId == 1;
      LocalFree(hMem);
    }
  }
  else if ( (int)CallerIdentity::GetProcessTypeFromWindow(a1, (HWND)&dwProcessId, a3) >= 0 )
  {
    return dwProcessId == 2;
  }
  return v3;
}
