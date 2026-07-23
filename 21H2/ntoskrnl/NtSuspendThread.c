/*
 * XREFs of NtSuspendThread @ 0x14061AD40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsSuspendThread @ 0x14061AE10 (PsSuspendThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  ULONG v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
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
             2u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v7 = PsSuspendThread(Object, &v8);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = v8;
    return v7;
  }
  return result;
}
