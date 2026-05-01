/*
 * XREFs of ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180150EDC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800379B0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180040280 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x18004C770 (-HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x18006BB80 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 *     ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x18006C280 (-HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z.c)
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800740D0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180075000 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18014D4A4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHCoGetApartmentId(unsigned int *a1)
{
  unsigned int ApartmentType; // edi
  APTTYPE pAptType; // [rsp+30h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( (ApartmentType & 0x80000000) == 0 )
  {
    switch ( pAptType )
    {
      case APTTYPE_STA:
        goto LABEL_6;
      case APTTYPE_MTA:
        *a1 = 0;
        return ApartmentType;
      case APTTYPE_NA:
        *a1 = -1;
        return ApartmentType;
      case APTTYPE_MAINSTA:
LABEL_6:
        *a1 = GetCurrentThreadId();
        break;
    }
  }
  return ApartmentType;
}
