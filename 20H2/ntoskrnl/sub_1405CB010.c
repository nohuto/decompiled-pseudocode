/*
 * XREFs of sub_1405CB010 @ 0x1405CB010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x140407BF0 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1404FC000 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_1405CB010(PKDPC Dpc, __int64 a2)
{
  __int64 ProcessorHistory_low; // r9
  _QWORD *v4; // r11
  __int64 v5; // r15
  char SystemArgument1; // r14
  unsigned __int64 DeferredContext; // r12
  int v8; // edi
  __int64 v9; // rbp
  _QWORD *v10; // r10
  const char *v11; // rax
  unsigned __int64 v12; // r8
  unsigned int i; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  const char *v21; // rax
  int v22; // edx
  PKDEFERRED_ROUTINE v23; // rdi
  unsigned __int8 *v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v31; // rdi
  __int64 v32; // r15
  unsigned __int64 v33; // r14
  NTSTATUS v34; // eax
  unsigned __int64 v35; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  PKDPC *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  PKDPC v39; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+20h]

  KeExitRetpoline(Dpc, a2);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v4 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v5 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v8) = SystemArgument1;
  v39 = Dpc;
  v9 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v4;
  v10 = (_QWORD *)v9;
  v11 = (const char *)v9;
  if ( v9 < (unsigned __int64)(ProcessorHistory_low + v9) )
  {
    do
    {
      _mm_prefetch(v11, 0);
      v11 += 64;
    }
    while ( (unsigned __int64)v11 < ProcessorHistory_low + v9 );
  }
  v12 = DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v14 = 8LL;
    do
    {
      v15 = v12 ^ *v10;
      v16 = v10[1];
      v10 += 2;
      v12 = __ROL8__(__ROL8__(v15, v8) ^ v16, v8);
      --v14;
    }
    while ( v14 );
    v17 = __ROL8__(DeferredContext ^ ((unsigned __int64)v10 - v9), 17);
    v8 = ((unsigned __int8)((((v17 ^ DeferredContext ^ ((unsigned __int64)v10 - v9))
                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v17 ^ DeferredContext ^ ((_BYTE)v10 - v9)) ^ (unsigned __int8)v8) & 0x3F;
    if ( !v8 )
      LOBYTE(v8) = 1;
  }
  v18 = ProcessorHistory_low & 0x7F;
  if ( v18 >= 8 )
  {
    v19 = (unsigned __int64)v18 >> 3;
    do
    {
      v12 = __ROL8__(*v10++ ^ v12, v8);
      v18 -= 8;
      --v19;
    }
    while ( v19 );
  }
  for ( ; v18; --v18 )
  {
    v20 = *(unsigned __int8 *)v10;
    v10 = (_QWORD *)((char *)v10 + 1);
    v12 = __ROL8__(v20 ^ v12, v8);
  }
  v21 = (const char *)v4;
  if ( v4 < (_QWORD *)((char *)v4 + 12) )
  {
    do
    {
      _mm_prefetch(v21, 0);
      v21 += 64;
    }
    while ( v21 < (const char *)v4 + 12 );
  }
  v22 = 4;
  v23 = (PKDEFERRED_ROUTINE)__ROL8__(v12 ^ *v4, SystemArgument1);
  v24 = (unsigned __int8 *)(v4 + 1);
  do
  {
    v25 = *v24++;
    v23 = (PKDEFERRED_ROUTINE)__ROL8__(v25 ^ (unsigned __int64)v23, SystemArgument1);
    --v22;
  }
  while ( v22 );
  v26 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v27 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v26, 0, v27 % 0x2710, Dpc);
  if ( v23 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v5 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v31 = v9 & 0xFFFFFFFFFFFFF000uLL;
        v32 = (v9 + v5 - 1) | 0xFFF;
        v33 = (v9 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v34 = VslVerifyPage(v31, 0);
          v35 = CurrentIrql;
          while ( v34 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v35 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v34 = VslVerifyPage(v31, 0);
          }
          if ( v34 < 0 )
            break;
LABEL_28:
          result = 0;
          v31 += 4096LL;
          v33 += 4096LL;
          if ( v33 == v32 )
          {
            __writecr8(v35);
            return result;
          }
        }
LABEL_31:
        __writecr8(v35);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v39 > DpcStack || &v39 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v40 = 0xD147407EB1239169uLL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(150994945, 216),
      __ROL8__(0xD147407EB1239169uLL, 71),
      0LL,
      v9,
      (unsigned int)__ROL4__(1098907648, 74),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x1405CB37DLL);
  }
  return result;
}
