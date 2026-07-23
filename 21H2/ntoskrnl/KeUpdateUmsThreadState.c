/*
 * XREFs of KeUpdateUmsThreadState @ 0x1408BD8BC
 * Callers:
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 *     KiResumeUmsThread @ 0x1408BD9D0 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x1408BDA28 (KiSuspendUmsThread.c)
 *     PspUmsInitThread @ 0x14090A8AC (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x14090A9FC (PspUmsUnInitThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1408BD71C (KeRemoveUmsThreadCidOwnership.c)
 *     KiUmsExceptionFilter @ 0x1408BDEC4 (KiUmsExceptionFilter.c)
 */

__int64 __fastcall KeUpdateUmsThreadState(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // edx
  int v6; // edx
  _QWORD *Object; // rcx
  signed __int64 *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  struct _KEVENT *Event; // [rsp+28h] [rbp-10h]
  _QWORD *v13; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Event = 0LL;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 1u);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 3u);
    }
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 1u);
  }
  if ( a3 )
  {
    KeRemoveUmsThreadCidOwnership(a1, 0);
    Object = CurrentThread->WaitBlock[3].Object;
    v13 = Object;
    v8 = (signed __int64 *)Object[1];
    if ( ((unsigned __int8)v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFF0000LL || v8 + 1 < v8 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v8 = (signed __int64 *)Object[1];
    }
    _m_prefetchw(v8);
    v9 = *v8;
    do
    {
      *(_QWORD *)a1 = v9;
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v8, a1, v9);
    }
    while ( v9 != v10 );
    if ( !v9 )
      Event = (struct _KEVENT *)v13[2];
  }
  if ( Event )
    KeSetEvent(Event, 0, 0);
  return 0LL;
}
