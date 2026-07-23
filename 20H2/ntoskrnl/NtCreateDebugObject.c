/*
 * XREFs of NtCreateDebugObject @ 0x1408885E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char v4; // si
  char PreviousMode; // r10
  __int64 v8; // rcx
  NTSTATUS result; // eax
  PRKEVENT v10; // rbx
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  __int64 v13; // [rsp+20h] [rbp-68h]
  PRKEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15[4]; // [rsp+60h] [rbp-28h] BYREF

  v4 = Flags;
  v15[0] = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DebugObjectHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)DebugObjectHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *DebugObjectHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             DbgkDebugObjectType,
             (int)ObjectAttributes,
             PreviousMode,
             v13,
             104,
             0,
             0,
             &Event,
             0LL);
  if ( result >= 0 )
  {
    v10 = Event;
    Event[1].Header.LockNV = 1;
    v10[1].Header.WaitListHead.Flink = 0LL;
    LODWORD(v10[1].Header.WaitListHead.Blink) = 0;
    KeInitializeEvent(v10 + 2, SynchronizationEvent, 0);
    v10[3].Header.WaitListHead.Blink = &v10[3].Header.WaitListHead;
    v10[3].Header.WaitListHead.Flink = &v10[3].Header.WaitListHead;
    KeInitializeEvent(v10, NotificationEvent, 0);
    if ( (v4 & 1) != 0 )
      v10[4].Header.LockNV = 2;
    else
      v10[4].Header.LockNV = 0;
    v11 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
    if ( v11 )
    {
      v12 = *(_WORD *)(v11 + 8);
      if ( v12 == 332 || v12 == 452 )
        v10[4].Header.LockNV |= 4u;
    }
    result = ObInsertObjectEx((PADAPTER_OBJECT)Event, 0LL, DesiredAccess, 0, 0, 0LL, v15);
    if ( result >= 0 )
      *DebugObjectHandle = (HANDLE)v15[0];
  }
  return result;
}
