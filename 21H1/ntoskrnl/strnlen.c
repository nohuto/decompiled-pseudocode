/*
 * XREFs of strnlen @ 0x1403CF790
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x1405A67E4 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405F38C0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405F3B0C (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x14093B8A4 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
