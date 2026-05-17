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

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    v1 = *a1;
    do
    {
      if ( v1 == _InterlockedCompareExchange(a1, v1 + 1, v1) )
        break;
      v1 = *a1;
    }
    while ( *a1 != 0x7FFFFFFF );
  }
}
