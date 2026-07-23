/*
 * XREFs of NtCreateIoCompletion @ 0x1406F0D20
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140328320 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS Object; // ecx
  ULONG v10; // edx
  PRKQUEUE v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue[4]; // [rsp+60h] [rbp-28h] BYREF

  v14 = 0LL;
  Queue[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)IoCompletionHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  Object = ObCreateObjectEx(
             PreviousMode,
             IoCompletionObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v13,
             80,
             0,
             0,
             Queue,
             0LL);
  if ( Object >= 0 )
  {
    v10 = Count;
    v11 = Queue[0];
    KeInitializeQueue(Queue[0], v10);
    *(_QWORD *)&v11[1].Header.Lock = 0LL;
    LOBYTE(v11[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx((PADAPTER_OBJECT)v11, 0LL, DesiredAccess, 0, 0, 0LL, &v14);
    if ( Object >= 0 )
      *IoCompletionHandle = (HANDLE)v14;
  }
  return Object;
}
