/*
 * XREFs of NtAlertThread @ 0x140908020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x140357D70 (KeAlertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtAlertThread(ULONG_PTR a1)
{
  char PreviousMode; // bl
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-28h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  LODWORD(Tag) = 1968403280;
  result = ObpReferenceObjectByHandleWithTag(a1, 4LL, PsThreadType, PreviousMode, Tag, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = PreviousMode;
    KeAlertThread((__int64)Object, v3, v4, v5);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0LL;
  }
  return result;
}
