/*
 * XREFs of NtAlertThread @ 0x14090EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x1402EC8E0 (KeAlertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtAlertThread(ULONG_PTR a1)
{
  char PreviousMode; // bl
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4, (__int64)PsThreadType, PreviousMode, 0x75537350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = PreviousMode;
    KeAlertThread((__int64)Object, v3, v4, v5);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0LL;
  }
  return result;
}
