/*
 * XREFs of NtSetIoCompletion @ 0x1407D5700
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtSetIoCompletion(void *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  NTSTATUS result; // eax
  int v9; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v9 = IoSetIoCompletionEx2((__int64)Object, a2, a3, (_DWORD *)a4, a5, 1u, 0LL, 0);
    ObfDereferenceObject(Object);
    return v9;
  }
  return result;
}
