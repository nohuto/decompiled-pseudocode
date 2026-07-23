/*
 * XREFs of NtIsProcessInJob @ 0x140675090
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PspIsProcessInJob @ 0x140675180 (PspIsProcessInJob.c)
 */

NTSTATUS __cdecl NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v8; // eax
  PVOID v9; // rdx
  NTSTATUS IsProcessInJob; // esi
  struct _DMA_ADAPTER *v11; // rdx
  PVOID v12; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    v12 = p_Lock;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x624A7350u,
               &v12,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = v12;
  }
  if ( !JobHandle )
  {
    v9 = (PVOID)p_Lock[162];
    p_Lock = v12;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v9);
    if ( JobHandle )
      HalPutDmaAdapter(v11);
    goto LABEL_8;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v9 = Object;
  IsProcessInJob = v8;
  if ( v8 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
