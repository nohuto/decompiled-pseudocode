/*
 * XREFs of NtCancelIoFileEx @ 0x1406CF5D0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopCancelIoFile @ 0x1406CF67C (IopCancelIoFile.c)
 */

NTSTATUS __fastcall NtCancelIoFileEx(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v6; // rdx
  NTSTATUS result; // eax
  PVOID v8; // rdi
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp+20h]

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v10 = IopCancelIoFile(Object, a2);
    *(_DWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v8);
    return v10;
  }
  return result;
}
