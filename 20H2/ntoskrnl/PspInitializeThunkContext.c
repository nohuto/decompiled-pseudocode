/*
 * XREFs of PspInitializeThunkContext @ 0x1406934F4
 * Callers:
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     KePopulateContinuationContext @ 0x1402E76EC (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 *     memset @ 0x140411300 (memset.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     PspCallThreadNotifyRoutines @ 0x1406285B0 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 *     PspCreateUserContext @ 0x140694230 (PspCreateUserContext.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v1; // r14d
  int ExtendedContextLength; // ebx
  SIZE_T v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rsp
  int v6; // r9d
  volatile void *v7; // r13
  __int64 InstrumentationCallback; // rdx
  __int64 v9; // rcx
  int result; // eax
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  int v13; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp+10h] BYREF
  NTSTATUS v16[2]; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+60h] [rbp+30h]
  int v19; // [rsp+68h] [rbp+38h]
  _DWORD v20[31]; // [rsp+6Ch] [rbp+3Ch] BYREF
  __int64 v21[154]; // [rsp+F0h] [rbp+C0h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(Size, 0, sizeof(Size));
  v15[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15[1] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, (__int64)Size);
  if ( ExtendedContextLength >= 0 )
  {
    v3 = Size[0];
    v4 = Size[0] + 15LL;
    if ( v4 <= Size[0] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(&v13, 0, Size[0]);
    ExtendedContextLength = RtlInitializeExtendedContext((__int64)&v13, v1, (__int64)&Size[1]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(v21, 0, sizeof(v21));
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      LOBYTE(v6) = 1;
      ExtendedContextLength = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)&v13, 0, v6, 0);
      v13 = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v7 = (volatile void *)((*(_QWORD *)&v20[23] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        v21[19] = (__int64)v7 - 40;
        PspCreateUserContext(
          (unsigned int)v21,
          0,
          PspLoaderInitRoutine,
          (v20[23] - v3) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = (__int64)CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v21[25] = v21[31];
          v21[31] = InstrumentationCallback;
        }
        v9 = (__int64)v7;
        if ( v3 - 1 > 0xFFE )
        {
          ProbeForWrite(v7, v3, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v7 >= 0x7FFFFFFF0000LL )
            v9 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v9 = *(_BYTE *)v9;
          *(_BYTE *)(v9 + v3 - 1) = *(_BYTE *)(v9 + v3 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext((__int64)v7, v1, (__int64)v15);
        v13 = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v7, v1, &v13);
          v13 = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(v21[7]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ExtendedContextLength < 0 )
  {
    v16[1] = 0;
    v18 = PspLoaderInitRoutine;
    v16[0] = ExtendedContextLength;
    v19 = 0;
    v17 = 0LL;
    InitialStack = CurrentThread->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    return KiDispatchException(v16, (unsigned __int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  }
  return result;
}
