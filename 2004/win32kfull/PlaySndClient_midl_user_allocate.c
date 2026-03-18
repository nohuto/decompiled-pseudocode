/*
 * XREFs of PlaySndClient_midl_user_allocate @ 0x1C00FD100
 * Callers:
 *     PlaySoundPostMessage @ 0x1C037C4FC (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PlaySndClient_midl_user_allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53637052u);
}
