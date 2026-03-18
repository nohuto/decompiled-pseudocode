/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051CC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E180 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FC80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D014 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  char *CorrespondingDock; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 720), 1262699615) )
    goto LABEL_10;
  CorrespondingDock = ACPIDockFindCorrespondingDock(v1);
  if ( !CorrespondingDock || *((_DWORD *)CorrespondingDock + 50) != 2 )
    goto LABEL_10;
  *((_DWORD *)CorrespondingDock + 50) = 1;
  KdDisableDebugger();
  v3 = ACPIGet((__int64 *)v1, 1262699615, 546308096, 0LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  KdEnableDebugger();
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C00701BA;
  v7 = (const char *)&unk_1C00701BA;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 568);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x58u,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a1,
      v3,
      v1,
      v6,
      v7);
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_10:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
