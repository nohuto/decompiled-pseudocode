/*
 * XREFs of NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C00AD1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005EEC8 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C00AEF88 (-AnimationScenarioUnreference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryAnimationScenarioUnreference(
        unsigned int a1,
        struct _GUID *a2,
        unsigned __int64 *a3)
{
  int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // rdi
  struct _GUID v6; // [rsp+20h] [rbp-18h] BYREF
  struct DirectComposition::CApplicationChannel *v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !a3 || !a2 )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v8 = *a3;
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v6 = *a2;
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    v4 = v7;
    if ( v3 >= 0 )
    {
      v3 = DirectComposition::CTelemetryInfo::AnimationScenarioUnreference(
             (struct DirectComposition::CApplicationChannel *)((char *)v7 + 528),
             &v6,
             &v8);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
