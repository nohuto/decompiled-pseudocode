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
  int v1; // r14d
  int ExtendedContextLength; // ebx
  SIZE_T v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rsp
  volatile void *v6; // r13
  __int64 InstrumentationCallback; // rdx
  __int64 v8; // rcx
  int result; // eax
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  int v12; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp+10h] BYREF
  NTSTATUS v15[2]; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+60h] [rbp+30h]
  int v18; // [rsp+68h] [rbp+38h]
  _DWORD v19[31]; // [rsp+6Ch] [rbp+3Ch] BYREF
  __int64 v20[154]; // [rsp+F0h] [rbp+C0h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(Size, 0, sizeof(Size));
  v14[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14[1] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, Size);
  if ( ExtendedContextLength >= 0 )
  {
    v3 = Size[0];
    v4 = Size[0] + 15LL;
    if ( v4 <= Size[0] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(&v12, 0, Size[0]);
    ExtendedContextLength = RtlInitializeExtendedContext((__int64)&v12, v1, (__int64)&Size[1]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(v20, 0, sizeof(v20));
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      ExtendedContextLength = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&v12, 0, 1, 0);
      v12 = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v6 = (volatile void *)((*(_QWORD *)&v19[23] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        v20[19] = (__int64)v6 - 40;
        PspCreateUserContext(
          (unsigned int)v20,
          0,
          PspLoaderInitRoutine,
          (v19[23] - v3) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v20[25] = v20[31];
          v20[31] = InstrumentationCallback;
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
        ExtendedContextLength = RtlInitializeExtendedContext((__int64)v6, v1, (__int64)v14);
        v12 = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext((__int64)v6, v1, (__int64)&v12);
          v12 = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(v20[7]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, (__int64)v20, 0, 1, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ExtendedContextLength < 0 )
  {
    v15[1] = 0;
    v17 = PspLoaderInitRoutine;
    v15[0] = ExtendedContextLength;
    v18 = 0;
    v16 = 0LL;
    InitialStack = CurrentThread->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    return KiDispatchException(v15, (unsigned __int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  }
  return result;
}
