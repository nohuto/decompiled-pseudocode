/*
 * XREFs of VidSchiPrepareToResetEngine @ 0x1C00D019C
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0080BC0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0082620 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0001898 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z @ 0x1C00225C0 (-DdiQueryDependentEngineGroup@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDEPENDENTENGINEGROUP@@@Z.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C0031824 (VidSchiSchedulerNodeToDriverNode.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D004C (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiPrepareToResetEngine(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  ULONGLONG DependentNodeOrdinalMask; // r8
  char NodeOrdinal; // cl
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char result; // al
  _DXGKARG_QUERYDEPENDENTENGINEGROUP v14; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v3 + 44) )
    return 0;
  if ( !TdrIsEnabled() )
    return 0;
  if ( (*(_DWORD *)(v3 + 36) & 7) == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  HIDWORD(v14.DependentNodeOrdinalMask) = 0;
  *(_QWORD *)&v14.EngineOrdinal = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v3, v5);
  v14.NodeOrdinal = VidSchiSchedulerNodeToDriverNode(v7, v6);
  if ( (unsigned int)ADAPTER_RENDER::DdiQueryDependentEngineGroup(*(ADAPTER_RENDER **)(v3 + 8), &v14) )
    return 0;
  DependentNodeOrdinalMask = v14.DependentNodeOrdinalMask;
  NodeOrdinal = v14.NodeOrdinal;
  if ( !(v14.DependentNodeOrdinalMask | (1LL << SLOBYTE(v14.NodeOrdinal))) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14.NodeOrdinal, v8);
    v11[3] = 281LL;
    v11[4] = 8LL;
    v11[5] = v14.DependentNodeOrdinalMask;
    v11[6] = 1LL << SLOBYTE(v14.NodeOrdinal);
    v11[7] = v14.NodeOrdinal;
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
  }
  VidSchiPreemptEngineNodes(v3, v14.EngineOrdinal, DependentNodeOrdinalMask & ~(1LL << NodeOrdinal), a2);
  if ( VidSchIsTDRPending(v3) )
    return 0;
  v12 = *a2;
  _bittestandset64(&v12, v14.NodeOrdinal);
  result = 1;
  *a2 = v12;
  return result;
}
