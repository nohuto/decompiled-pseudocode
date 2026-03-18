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
  int v1; // r14d
  __int64 v2; // rdx
  int ExtendedContextLength; // ebx
  __int64 v4; // r8
  __int64 v5; // r9
  SIZE_T v6; // rsi
  unsigned __int64 v7; // rax
  void *v8; // rsp
  volatile void *v9; // r13
  __int64 InstrumentationCallback; // rdx
  __int64 v11; // rcx
  int result; // eax
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  int v15; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp+10h] BYREF
  NTSTATUS v18[2]; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+58h] [rbp+28h]
  __int64 v20; // [rsp+60h] [rbp+30h]
  int v21; // [rsp+68h] [rbp+38h]
  _DWORD v22[31]; // [rsp+6Ch] [rbp+3Ch] BYREF
  __int64 v23[154]; // [rsp+F0h] [rbp+C0h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(Size, 0, sizeof(Size));
  v17[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17[1] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, Size);
  if ( ExtendedContextLength >= 0 )
  {
    v6 = Size[0];
    v7 = Size[0] + 15LL;
    if ( v7 <= Size[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(&v15, 0, Size[0]);
    ExtendedContextLength = RtlInitializeExtendedContext((__int64)&v15, v1, (__int64)&Size[1]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(v23, 0, sizeof(v23));
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      ExtendedContextLength = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&v15, 0, 1, 0);
      v15 = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v9 = (volatile void *)((*(_QWORD *)&v22[23] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
        v23[19] = (__int64)v9 - 40;
        PspCreateUserContext(
          (unsigned int)v23,
          0,
          PspLoaderInitRoutine,
          (v22[23] - v6) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v23[25] = v23[31];
          v23[31] = InstrumentationCallback;
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
        ExtendedContextLength = RtlInitializeExtendedContext((__int64)v9, v1, (__int64)v17);
        v15 = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext((__int64)v9, v1, (__int64)&v15);
          v15 = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(v23[7]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)v23, 0, 1, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v2, v4, v5);
  if ( ExtendedContextLength < 0 )
  {
    v18[1] = 0;
    v20 = PspLoaderInitRoutine;
    v18[0] = ExtendedContextLength;
    v21 = 0;
    v19 = 0LL;
    InitialStack = CurrentThread->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    return KiDispatchException(v18, (unsigned __int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  }
  return result;
}
