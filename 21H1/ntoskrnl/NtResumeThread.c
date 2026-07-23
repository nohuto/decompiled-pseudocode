/*
 * XREFs of NtResumeThread @ 0x140708EF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsResumeThread @ 0x140708FB0 (PsResumeThread.c)
 */

NTSTATUS __cdecl NtResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousSuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)PreviousSuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1000u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    PsResumeThread(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = v7;
    return 0;
  }
  return result;
}
