/*
 * XREFs of NtAlertThread @ 0x140908020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x140357D70 (KeAlertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtAlertThread(HANDLE ThreadHandle)
{
  char PreviousMode; // bl
  NTSTATUS result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-28h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  LODWORD(Tag) = 1968403280;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             4LL,
             PsThreadType,
             PreviousMode,
             Tag,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v3) = PreviousMode;
    KeAlertThread((__int64)Object, v3, v4, v5);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0;
  }
  return result;
}
