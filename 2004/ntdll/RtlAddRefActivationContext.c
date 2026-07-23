/*
 * XREFs of RtlAddRefActivationContext @ 0x1800134C0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18001241C (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18001342C (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x18006B340 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x18006B4C0 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x1800722B0 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800808DC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    RefCount = ActivationContext->RefCount;
    do
    {
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount + 1, RefCount) )
        break;
      RefCount = ActivationContext->RefCount;
    }
    while ( ActivationContext->RefCount != 0x7FFFFFFF );
  }
}
