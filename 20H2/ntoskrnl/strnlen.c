/*
 * XREFs of strnlen @ 0x1403D3260
 * Callers:
 *     EtwpGetEventNameFromEventMetadata @ 0x1405AAA38 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406697B8 (EtwpSetProviderTraitsCommon.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140669A04 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAllocateEventNameFilter @ 0x1409428E8 (EtwpAllocateEventNameFilter.c)
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
