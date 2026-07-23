/*
 * XREFs of PspInitializeThunkContext @ 0x1406F2F08
 * Callers:
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KePopulateContinuationContext @ 0x140329904 (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x14032EDD0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14032FAF0 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PspCallThreadNotifyRoutines @ 0x140637D90 (PspCallThreadNotifyRoutines.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406F26DC (RtlCopyContext.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x140707A4C (PspCreateUserContext.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG v1; // r14d
  __int64 v2; // rdx
  NTSTATUS ExtendedContextLength; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  SIZE_T v6; // rsi
  unsigned __int64 v7; // rax
  void *v8; // rsp
  _CONTEXT *v9; // r13
  void *InstrumentationCallback; // rdx
  __int64 v11; // rcx
  int result; // eax
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  _BYTE Context[1424]; // [rsp+30h] [rbp+0h] BYREF

  memset(&Context[60], 0, 0x7CuLL);
  memset(&Context[4], 0, 20);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&Context[24] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, (PULONG)&Context[4]);
  if ( ExtendedContextLength >= 0 )
  {
    v6 = *(unsigned int *)&Context[4];
    v7 = *(unsigned int *)&Context[4] + 15LL;
    if ( v7 <= *(unsigned int *)&Context[4] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(Context, 0, *(unsigned int *)&Context[4]);
    ExtendedContextLength = RtlInitializeExtendedContext((PCONTEXT)Context, v1, (PCONTEXT_EX *)&Context[8]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(&Context[192], 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      ExtendedContextLength = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)Context, 0, 1, 0);
      *(_DWORD *)Context = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v9 = (_CONTEXT *)((*(_QWORD *)&Context[152] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)&Context[344] = (char *)v9 - 40;
        PspCreateUserContext(
          (unsigned int)&Context[192],
          0,
          PspLoaderInitRoutine,
          (*(_DWORD *)&Context[152] - v6) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          *(_QWORD *)&Context[392] = *(_QWORD *)&Context[440];
          *(_QWORD *)&Context[440] = InstrumentationCallback;
        }
        v11 = (__int64)v9;
        if ( v6 - 1 > 0xFFE )
        {
          ProbeForWrite(v9, v6, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
            v11 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v11 = *(_BYTE *)v11;
          *(_BYTE *)(v11 + v6 - 1) = *(_BYTE *)(v11 + v6 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext(v9, v1, (PCONTEXT_EX *)&Context[16]);
        *(_DWORD *)Context = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v9, v1, (PCONTEXT)Context);
          *(_DWORD *)Context = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(*(__int64 *)&Context[248]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)&Context[192], 0, 1, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v2, v4, v5);
  if ( ExtendedContextLength < 0 )
  {
    *(_QWORD *)&Context[48] = PspLoaderInitRoutine;
    *(_QWORD *)&Context[32] = (unsigned int)ExtendedContextLength;
    *(_DWORD *)&Context[56] = 0;
    *(_QWORD *)&Context[40] = 0LL;
    InitialStack = CurrentThread->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    return KiDispatchException(
             (PEXCEPTION_RECORD)&Context[32],
             (unsigned __int64)(InitialStack - 90),
             (__int64)(i - 50),
             1u,
             0);
  }
  return result;
}
