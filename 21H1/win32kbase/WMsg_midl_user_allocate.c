/*
 * XREFs of WMsg_midl_user_allocate @ 0x1C0053020
 * Callers:
 *     WmsgpPostMessage @ 0x1C0280C2C (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall WMsg_midl_user_allocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53637052u);
}
