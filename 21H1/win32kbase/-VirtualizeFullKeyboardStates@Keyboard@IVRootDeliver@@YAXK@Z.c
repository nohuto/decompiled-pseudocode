/*
 * XREFs of ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01BF8B0
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x1C01B2200 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0038134 (LockProcessByClientId.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C005F498 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BDCDC (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVRootDeliver::Keyboard::VirtualizeFullKeyboardStates(IVRootDeliver::Keyboard *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  const struct CONTAINER_ID *v4; // rdx
  __int64 ProcessWin32Process; // rbx
  int v6; // eax
  int v7; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v1 = (int)this;
  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_KeyboardInputVirtualization__private_reporting,
    0x11F7129u,
    0,
    0,
    (__int64)&Feature_KeyboardInputVirtualization_logged_traits,
    1u,
    3);
  if ( isRootPartition(v3, v2) && *((_DWORD *)gpKeyboardSensor + 314) )
  {
    Object = 0LL;
    if ( (int)LockProcessByClientId(v1, &Object) >= 0
      && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
    {
      v6 = *(_DWORD *)(ProcessWin32Process + 1088);
    }
    else
    {
      v6 = 0;
    }
    v7 = v6;
    if ( v6 )
      IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates((IVRootDeliver::Keyboard::Detail *)&v7, v4);
  }
}
