/*
 * XREFs of NtSuspendProcess @ 0x1409B2E50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 */

__int64 __fastcall NtSuspendProcess(ULONG_PTR a1)
{
  char PreviousMode; // r9
  int v2; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v2 = ObpReferenceObjectByHandleWithTag(a1, 2048, (__int64)PsProcessType, PreviousMode, 0x75537350u, &Object, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v2 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return (unsigned int)v2;
}
