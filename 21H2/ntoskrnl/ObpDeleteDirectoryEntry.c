/*
 * XREFs of ObpDeleteDirectoryEntry @ 0x1405FB640
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14070CA40 (ObCloseHandleTableEntry.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall ObpDeleteDirectoryEntry(__int64 a1)
{
  _QWORD **v1; // rdx
  struct _DMA_ADAPTER *v2; // rdi
  _QWORD *v3; // rbx

  v1 = *(_QWORD ***)(a1 + 16);
  v2 = *(struct _DMA_ADAPTER **)a1;
  v3 = *v1;
  *v1 = (_QWORD *)**v1;
  *v3 = 0LL;
  *(_QWORD *)(v3[1] - 48LL - ObpInfoMaskToOffset[*(_BYTE *)(v3[1] - 48LL + 26) & 3]) = 0LL;
  HalPutDmaAdapter((PADAPTER_OBJECT)v3[1]);
  ExFreePoolWithTag(v3, 0);
  HalPutDmaAdapter(v2);
  return 1;
}
