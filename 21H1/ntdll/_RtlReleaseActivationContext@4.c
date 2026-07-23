/*
 * XREFs of _RtlReleaseActivationContext@4 @ 0x4B2B2660
 * Callers:
 *     _RtlDispatchAPC@12 @ 0x4B2ABFD0 (_RtlDispatchAPC@12.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _RtlFreeActivationContextStack@4 @ 0x4B2E49C0 (_RtlFreeActivationContextStack@4.c)
 *     _RtlDeactivateActivationContext@8 @ 0x4B2E4A70 (_RtlDeactivateActivationContext@8.c)
 *     _LdrpFindDllActivationContext@4 @ 0x4B2E4C0D (_LdrpFindDllActivationContext@4.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 * Callees:
 *     _RtlpFreeActivationContext@4 @ 0x4B2A926F (_RtlpFreeActivationContext@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     @RtlpMoveActCtxToFreeList@4 @ 0x4B33D930 (@RtlpMoveActCtxToFreeList@4.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // edx
  int v2; // edi

  if ( ActivationContext
    && (((unsigned int)&ActivationContext[-1].InlineStorageMapEntries[31] + 3) | 7) != 0xFFFFFFFF
    && ActivationContext->RefCount > 0
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    while ( 1 )
    {
      RefCount = ActivationContext->RefCount;
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      v2 = RefCount - 1;
      if ( _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount - 1, RefCount) == RefCount )
        goto LABEL_8;
    }
    v2 = 0x7FFFFFFF;
LABEL_8:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&ActivationContext[1].NotificationRoutine
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].ActivationContextData,
                             1u)
        + 1) & 3),
        0);
    if ( !v2 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(ActivationContext);
      else
        RtlpFreeActivationContext((int)ActivationContext);
    }
  }
}
