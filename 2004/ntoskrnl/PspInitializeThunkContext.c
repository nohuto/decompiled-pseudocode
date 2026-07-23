/*
 * XREFs of PspInitializeThunkContext @ 0x1406AE068
 * Callers:
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KePopulateContinuationContext @ 0x1402E3664 (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x1402E9C90 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x140602D50 (PspCallThreadNotifyRoutines.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406AD83C (RtlCopyContext.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     PspCreateUserContext @ 0x1406B1B8C (PspCreateUserContext.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG v1; // r14d
  NTSTATUS ExtendedContextLength; // ebx
  SIZE_T v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rsp
  _CONTEXT *v6; // r13
  void *InstrumentationCallback; // rdx
  __int64 v8; // rcx
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
    v3 = *(unsigned int *)&Context[4];
    v4 = *(unsigned int *)&Context[4] + 15LL;
    if ( v4 <= *(unsigned int *)&Context[4] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
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
        v6 = (_CONTEXT *)((*(_QWORD *)&Context[152] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)&Context[344] = (char *)v6 - 40;
        PspCreateUserContext(
          (unsigned int)&Context[192],
          0,
          PspLoaderInitRoutine,
          (*(_DWORD *)&Context[152] - v3) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          *(_QWORD *)&Context[392] = *(_QWORD *)&Context[440];
          *(_QWORD *)&Context[440] = InstrumentationCallback;
        }
        v8 = (__int64)v6;
        if ( v3 - 1 > 0xFFE )
        {
          ProbeForWrite(v6, v3, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v6 >= 0x7FFFFFFF0000LL )
            v8 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v8 = *(_BYTE *)v8;
          *(_BYTE *)(v8 + v3 - 1) = *(_BYTE *)(v8 + v3 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext(v6, v1, (PCONTEXT_EX *)&Context[16]);
        *(_DWORD *)Context = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v6, v1, (PCONTEXT)Context);
          *(_DWORD *)Context = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(*(__int64 *)&Context[248]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)&Context[192], 0, 1, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
