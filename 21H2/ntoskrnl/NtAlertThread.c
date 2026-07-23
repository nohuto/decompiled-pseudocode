/*
 * XREFs of NtAlertThread @ 0x14090C800
 * Callers:
 *     <none>
 * Callees:
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtAlertThread(HANDLE ThreadHandle)
{
  char PreviousMode; // bl
  NTSTATUS result; // eax
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
    KeAlertThread((__int64)Object, PreviousMode);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0;
  }
  return result;
}
