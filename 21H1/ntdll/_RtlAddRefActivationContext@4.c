/*
 * XREFs of _RtlAddRefActivationContext@4 @ 0x4B2B5090
 * Callers:
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlpQueryInformationActivationContextBasicInformation@28 @ 0x4B2B5020 (_RtlpQueryInformationActivationContextBasicInformation@28.c)
 *     _LdrpAllocateModuleEntry@4 @ 0x4B2D0962 (_LdrpAllocateModuleEntry@4.c)
 *     _RtlActivateActivationContextEx@16 @ 0x4B2E3500 (_RtlActivateActivationContextEx@16.c)
 *     _RtlGetActiveActivationContext@4 @ 0x4B2E6750 (_RtlGetActiveActivationContext@4.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // esi

  if ( ActivationContext
    && (((unsigned int)&ActivationContext[-1].InlineStorageMapEntries[31] + 3) | 7) != 0xFFFFFFFF
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    do
    {
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      RefCount = ActivationContext->RefCount;
    }
    while ( _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount + 1, RefCount) != RefCount );
  }
}
