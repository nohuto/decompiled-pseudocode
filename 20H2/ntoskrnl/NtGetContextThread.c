/*
 * XREFs of NtGetContextThread @ 0x1406DDE70
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall NtGetContextThread(void *a1, __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  struct _DMA_ADAPTER *v5; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(
                            a1,
                            8u,
                            (POBJECT_TYPE)PsThreadType,
                            PreviousMode,
                            (PVOID *)&DmaAdapter,
                            0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v5 = DmaAdapter;
    if ( (*(_DWORD *)(&DmaAdapter[7].Size + 1) & 0x400) != 0 )
      ContextThreadInternal = -1073741816;
    else
      ContextThreadInternal = PspGetContextThreadInternal((__int64)DmaAdapter, a2, PreviousMode, PreviousMode, 1);
    HalPutDmaAdapter(v5);
  }
  return (unsigned int)ContextThreadInternal;
}
