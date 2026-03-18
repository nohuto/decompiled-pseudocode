/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01B77E0
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x1C01AA120 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0007134 (LockProcessByClientId.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01B5C0C (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this)
{
  __int64 v1; // rbx
  const struct CONTAINER_ID *v2; // rdx
  __int64 ProcessWin32Process; // rbx
  int v4; // eax
  int v5; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = (int)this;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_KeyboardInputVirtualization__private_reporting,
    0x11F7129u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( isRootPartition() && *((_DWORD *)gpKeyboardSensor + 314) )
  {
    Object = 0LL;
    if ( (int)LockProcessByClientId(v1, &Object) >= 0
      && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
    {
      v4 = *(_DWORD *)(ProcessWin32Process + 1088);
    }
    else
    {
      v4 = 0;
    }
    v5 = v4;
    if ( v4 )
      IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v5, v2);
  }
}
