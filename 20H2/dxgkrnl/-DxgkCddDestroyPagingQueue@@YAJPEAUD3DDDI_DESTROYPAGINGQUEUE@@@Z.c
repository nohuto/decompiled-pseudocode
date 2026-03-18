/*
 * XREFs of ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C0168D10
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00E271C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkCddDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyPagingQueueInternal(a1, 0, a3);
}
