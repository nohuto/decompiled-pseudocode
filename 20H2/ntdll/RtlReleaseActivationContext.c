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
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18006FDD0 (RtlpTpWorkUnposted.c)
 *     RtlFreeActivationContextStack @ 0x180070900 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180070A40 (RtlDeactivateActivationContext.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800738D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlDispatchAPC @ 0x18007F220 (RtlDispatchAPC.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800515F0 (RtlCaptureStackBackTrace.c)
 *     RtlpFreeActivationContext @ 0x180082770 (RtlpFreeActivationContext.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DFC08 (RtlpMoveActCtxToFreeList.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax
  LONG v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    RefCount = ActivationContext->RefCount;
    do
    {
      v3 = RefCount - 1;
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) )
        break;
      RefCount = ActivationContext->RefCount;
      v3 = ActivationContext->RefCount;
    }
    while ( ActivationContext->RefCount != 0x7FFFFFFF );
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext(ActivationContext);
    }
  }
}
