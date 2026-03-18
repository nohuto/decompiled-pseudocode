/*
 * XREFs of NtCreateDebugObject @ 0x140881770
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateDebugObject(__int64 *a1, ACCESS_MASK a2, __int64 a3, int a4)
{
  char v4; // si
  char PreviousMode; // r10
  __int64 v8; // rcx
  __int64 result; // rax
  PRKEVENT v10; // rbx
  unsigned __int64 v11; // rax
  __int16 v12; // ax
  __int64 v13; // [rsp+20h] [rbp-68h]
  PRKEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15[4]; // [rsp+60h] [rbp-28h] BYREF

  v4 = a4;
  v15[0] = 0LL;
  Event = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  *a1 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = ObCreateObjectEx(PreviousMode, DbgkDebugObjectType, a3, PreviousMode, v13, 104, 0, 0, &Event, 0LL);
  if ( (int)result >= 0 )
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
    result = ObInsertObjectEx((PADAPTER_OBJECT)Event, 0LL, a2, 0, 0, 0LL, v15);
    if ( (int)result >= 0 )
    {
      *a1 = v15[0];
      return (unsigned int)result;
    }
  }
  return result;
}
