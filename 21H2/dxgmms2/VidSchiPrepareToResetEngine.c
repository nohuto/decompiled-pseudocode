/*
 * XREFs of VidSchiPrepareToResetEngine @ 0x1C00F34CC
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0003AE0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C002CAD8 (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C003A594 (VidSchiSchedulerNodeToDriverNode.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00F3380 (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiPrepareToResetEngine(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rcx
  ULONGLONG DependentNodeOrdinalMask; // r8
  char NodeOrdinal; // cl
  __int64 v10; // rcx
  char result; // al
  _DXGKARG_QUERYDEPENDENTENGINEGROUP v12; // [rsp+30h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v3 + 44) )
    return 0;
  if ( !TdrIsEnabled() )
    return 0;
  if ( (*(_DWORD *)(v3 + 36) & 7) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  HIDWORD(v12.DependentNodeOrdinalMask) = 0;
  *(_QWORD *)&v12.EngineOrdinal = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, v5);
  v12.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v7, v6);
  if ( (unsigned int)ADAPTER_RENDER::DdiQueryDependentEngineGroup(*(ADAPTER_RENDER **)(v3 + 8), &v12) )
    return 0;
  DependentNodeOrdinalMask = v12.DependentNodeOrdinalMask;
  NodeOrdinal = v12.NodeOrdinal;
  if ( !(v12.DependentNodeOrdinalMask | (1LL << SLOBYTE(v12.NodeOrdinal))) )
  {
    WdLogSingleEntry5(0LL, 281LL, 8LL, v12.DependentNodeOrdinalMask, 1LL << SLOBYTE(v12.NodeOrdinal), v12.NodeOrdinal);
    __debugbreak();
  }
  VidSchiPreemptEngineNodes(v3, v12.EngineOrdinal, DependentNodeOrdinalMask & ~(1LL << NodeOrdinal), a2);
  if ( VidSchIsTDRPending(v3) )
    return 0;
  v10 = *a2;
  _bittestandset64(&v10, v12.NodeOrdinal);
  result = 1;
  *a2 = v10;
  return result;
}
