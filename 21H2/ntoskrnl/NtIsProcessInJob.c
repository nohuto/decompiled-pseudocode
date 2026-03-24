/*
 * XREFs of NtIsProcessInJob @ 0x14071D130
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     PspIsProcessInJob @ 0x14071D220 (PspIsProcessInJob.c)
 */

NTSTATUS __fastcall NtIsProcessInJob(void *a1, void *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v10; // eax
  PVOID v11; // rdx
  NTSTATUS IsProcessInJob; // esi
  struct _DMA_ADAPTER *v13; // rdx
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 == (void *)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    v14 = p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               a1,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &v14,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = v14;
  }
  if ( !a2 )
  {
    v11 = (PVOID)p_Lock[162];
    p_Lock = v14;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v11, a3, a4);
    if ( a2 )
      HalPutDmaAdapter(v13);
    goto LABEL_8;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(a2, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v11 = Object;
  IsProcessInJob = v10;
  if ( v10 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( a1 != (void *)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
