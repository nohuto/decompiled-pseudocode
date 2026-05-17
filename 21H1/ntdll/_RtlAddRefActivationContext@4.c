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

int __stdcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  int result; // eax
  signed __int32 v2; // esi

  if ( a1 )
  {
    result = ((unsigned int)a1 - 1) | 7;
    if ( result != -1 && *a1 != 0x7FFFFFFF )
    {
      do
      {
        v2 = *a1;
        if ( *a1 == 0x7FFFFFFF )
          break;
        result = _InterlockedCompareExchange(a1, v2 + 1, v2);
      }
      while ( result != v2 );
    }
  }
  return result;
}
