/*
 * XREFs of RtlReleaseActivationContext @ 0x180013570
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberDestroy @ 0x180012088 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     LdrpFindDllActivationContext @ 0x180014E80 (LdrpFindDllActivationContext.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18006FCD0 (RtlpTpWorkUnposted.c)
 *     RtlFreeActivationContextStack @ 0x180070800 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180070940 (RtlDeactivateActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800737D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x18007F120 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800515A0 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180082670 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DF868 (RtlpMoveActCtxToFreeList.c)
 */

void __fastcall RtlReleaseActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  volatile signed __int32 v3; // edi

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*a1 - 1) <= 0x7FFFFFFD )
  {
    v2 = *a1;
    do
    {
      v3 = v2 - 1;
      if ( v2 == _InterlockedCompareExchange(a1, v2 - 1, v2) )
        break;
      v2 = *a1;
      v3 = *a1;
    }
    while ( *a1 != 0x7FFFFFFF );
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&a1[8 * (((unsigned __int8)_InterlockedExchangeAdd(a1 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(a1);
      else
        RtlpFreeActivationContext(a1);
    }
  }
}
