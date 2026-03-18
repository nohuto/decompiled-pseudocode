/*
 * XREFs of DxgkSubmitCommandToHwQueue @ 0x1C0270870
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0270888 (DxgkSubmitCommandToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueue(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1)
{
  return DxgkSubmitCommandToHwQueueInternal(a1);
}
