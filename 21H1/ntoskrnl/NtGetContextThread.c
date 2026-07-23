/*
 * XREFs of NtGetContextThread @ 0x1406E7F30
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 */

NTSTATUS __cdecl NtGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  int v2; // ebp
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  int v5; // r8d
  int v6; // r9d
  struct _DMA_ADAPTER *v7; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp+18h] BYREF

  v2 = (int)ThreadContext;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(
                            ThreadHandle,
                            8u,
                            (POBJECT_TYPE)PsThreadType,
                            PreviousMode,
                            (PVOID *)&DmaAdapter,
                            0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v7 = DmaAdapter;
    if ( (*(_DWORD *)(&DmaAdapter[7].Size + 1) & 0x400) != 0 )
    {
      ContextThreadInternal = -1073741816;
    }
    else
    {
      LOBYTE(v6) = PreviousMode;
      LOBYTE(v5) = PreviousMode;
      ContextThreadInternal = PspGetContextThreadInternal((_DWORD)DmaAdapter, v2, v5, v6, 1);
    }
    HalPutDmaAdapter(v7);
  }
  return ContextThreadInternal;
}
