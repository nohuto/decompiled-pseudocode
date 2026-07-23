/*
 * XREFs of NtSetContextThread @ 0x14090DBC0
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x140208A40 (IoThreadToProcess.c)
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 */

NTSTATUS __cdecl NtSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  int v5; // edi
  PEPROCESS v6; // rax
  PETHREAD v7; // rbx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  PETHREAD Thread; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  Thread = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, (PVOID *)&Thread, 0LL);
  if ( v5 >= 0 )
  {
    v6 = IoThreadToProcess(CurrentThread);
    v7 = Thread;
    if ( (v6[1].DirectoryTableBase & 0x20000) != 0 && v6 == IoThreadToProcess(Thread) )
    {
      v5 = -1073740278;
    }
    else if ( (v7->MiscFlags & 0x400) != 0 || *(_QWORD *)&v7[1].WaitBlockFill11[112] )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v7, (__int64)ThreadContext, PreviousMode, PreviousMode, 1);
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v7);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v9;
  v9 = v5;
  UserData.Size = 4;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &UserData);
  return v5;
}
