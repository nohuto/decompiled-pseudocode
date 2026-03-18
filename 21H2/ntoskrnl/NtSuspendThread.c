/*
 * XREFs of NtSuspendThread @ 0x1406E2120
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsSuspendThread @ 0x1406E21F0 (PsSuspendThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtSuspendThread(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && a2 )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = PsSuspendThread(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v7;
    return v6;
  }
  return result;
}
