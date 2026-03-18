/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0048FA8 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase2(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  __int64 CorrespondingDock; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 760), 1262699615) )
    goto LABEL_10;
  CorrespondingDock = ACPIDockFindCorrespondingDock(v1);
  if ( !CorrespondingDock || *(_DWORD *)(CorrespondingDock + 200) != 2 )
    goto LABEL_10;
  *(_DWORD *)(CorrespondingDock + 200) = 1;
  KdDisableDebugger();
  v3 = ACPIGet(v1, 1262699615, 546308096, 0LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  KdEnableDebugger();
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C006FB8B;
  v7 = (const char *)&unk_1C006FB8B;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x5Au,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
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
