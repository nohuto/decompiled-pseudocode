/*
 * XREFs of _AlpcGetCompletionListLastMessageInformation@12 @ 0x4B33EAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcGetCompletionListLastMessageInformation(
        PVOID CompletionList,
        PULONG LastMessageId,
        PULONG LastCallbackId)
{
  *LastMessageId = *((_DWORD *)CompletionList + 18);
  *LastCallbackId = *((_DWORD *)CompletionList + 19);
}
