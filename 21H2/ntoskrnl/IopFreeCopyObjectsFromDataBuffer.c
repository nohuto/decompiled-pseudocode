/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x1403F19D0
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x1403F1A64 (IopFreeCopyObjectsFromIrp.c)
 *     NtCopyFileChunk @ 0x1405CDD80 (NtCopyFileChunk.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct _DMA_ADAPTER *v4; // rdi
  void *v5; // rcx

  v2 = a1 - 72;
  if ( a2 )
  {
    v3 = *(_QWORD *)(v2 + 32);
    v4 = *(struct _DMA_ADAPTER **)(v2 + 48);
    if ( v3 )
    {
      IopFreeIrpExtension(*(_QWORD *)(v2 + 32), 9, 1);
      IopExceptionCleanupEx(v4, (PIRP)v3, *(PADAPTER_OBJECT *)(v3 + 80), 0LL, 0);
      return;
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v2 + 48), 0x746C6644u);
  }
  v5 = *(void **)(v2 + 56);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag((PVOID)v2, 0);
}
