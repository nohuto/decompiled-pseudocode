/*
 * XREFs of _PlaySndClient_midl_user_allocate@4 @ 0xA1C38
 * Callers:
 *     _PlaySoundPostMessage@12 @ 0x27A3F0 (_PlaySoundPostMessage@12.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall PlaySndClient_midl_user_allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53637052u);
}
