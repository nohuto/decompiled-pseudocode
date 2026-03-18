/*
 * XREFs of NtSuspendThread @ 0x1406DC060
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1406DC130 (PsSuspendThread.c)
 */

NTSTATUS __fastcall NtSuspendThread(HANDLE Handle, _DWORD *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  int v7; // edi
  int v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a2 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObReferenceObjectByHandleWithTag(
             Handle,
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
    if ( a2 )
      *a2 = v8;
    return v7;
  }
  return result;
}
