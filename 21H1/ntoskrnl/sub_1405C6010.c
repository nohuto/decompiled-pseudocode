/*
 * XREFs of sub_1405C6010 @ 0x1405C6010
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     CcAdjustBcbDepth @ 0x140400560 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1404F8120 (VslVerifyPage.c)
 */

BOOLEAN __fastcall sub_1405C6010(PKDPC Dpc)
{
  __int64 ProcessorHistory_low; // r9
  _QWORD *v3; // r11
  __int64 v4; // r15
  char SystemArgument1; // r14
  unsigned __int64 DeferredContext; // r12
  int v7; // edi
  __int64 v8; // rbp
  _QWORD *v9; // r10
  const char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned int i; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  const char *v20; // rax
  int v21; // edx
  PKDEFERRED_ROUTINE v22; // rdi
  unsigned __int8 *v23; // r11
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v30; // rdi
  __int64 v31; // r15
  unsigned __int64 v32; // r14
  NTSTATUS v33; // eax
  unsigned __int64 v34; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  PKDPC *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  PKDPC v38; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp+20h]

  KeExitRetpoline();
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v3 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v4 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v7) = SystemArgument1;
  v38 = Dpc;
  v8 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v3;
  v9 = (_QWORD *)v8;
  v10 = (const char *)v8;
  if ( v8 < (unsigned __int64)(ProcessorHistory_low + v8) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < ProcessorHistory_low + v8 );
  }
  v11 = DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v13 = 8LL;
    do
    {
      v14 = v11 ^ *v9;
      v15 = v9[1];
      v9 += 2;
      v11 = __ROL8__(__ROL8__(v14, v7) ^ v15, v7);
      --v13;
    }
    while ( v13 );
    v16 = __ROL8__(DeferredContext ^ ((unsigned __int64)v9 - v8), 17);
    v7 = ((unsigned __int8)((((v16 ^ DeferredContext ^ ((unsigned __int64)v9 - v8))
                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16 ^ DeferredContext ^ ((_BYTE)v9 - v8)) ^ (unsigned __int8)v7) & 0x3F;
    if ( !v7 )
      LOBYTE(v7) = 1;
  }
  v17 = ProcessorHistory_low & 0x7F;
  if ( v17 >= 8 )
  {
    v18 = (unsigned __int64)v17 >> 3;
    do
    {
      v11 = __ROL8__(*v9++ ^ v11, v7);
      v17 -= 8;
      --v18;
    }
    while ( v18 );
  }
  for ( ; v17; --v17 )
  {
    v19 = *(unsigned __int8 *)v9;
    v9 = (_QWORD *)((char *)v9 + 1);
    v11 = __ROL8__(v19 ^ v11, v7);
  }
  v20 = (const char *)v3;
  if ( v3 < (_QWORD *)((char *)v3 + 12) )
  {
    do
    {
      _mm_prefetch(v20, 0);
      v20 += 64;
    }
    while ( v20 < (const char *)v3 + 12 );
  }
  v21 = 4;
  v22 = (PKDEFERRED_ROUTINE)__ROL8__(v11 ^ *v3, SystemArgument1);
  v23 = (unsigned __int8 *)(v3 + 1);
  do
  {
    v24 = *v23++;
    v22 = (PKDEFERRED_ROUTINE)__ROL8__(v24 ^ (unsigned __int64)v22, SystemArgument1);
    --v21;
  }
  while ( v21 );
  v25 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
  v26 = ExGenRandom(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v25, 0, v26 % 0x2710, Dpc);
  if ( v22 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v4 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v30 = v8 & 0xFFFFFFFFFFFFF000uLL;
        v31 = (v8 + v4 - 1) | 0xFFF;
        v32 = (v8 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v33 = VslVerifyPage(v30, 0);
          v34 = CurrentIrql;
          while ( v33 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v34 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v33 = VslVerifyPage(v30, 0);
          }
          if ( v33 < 0 )
            break;
LABEL_28:
          result = 0;
          v30 += 4096LL;
          v32 += 4096LL;
          if ( v32 == v31 )
          {
            __writecr8(v34);
            return result;
          }
        }
LABEL_31:
        __writecr8(v34);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    DpcStack = (PKDPC *)CurrentPrcb->DpcStack;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( !CurrentPrcb->DpcRoutineActive || &v38 > DpcStack || &v38 < DpcStack - 3072 )
      DpcStack = (PKDPC *)CurrentThread->InitialStack;
    CurrentThread[1].QuantumTarget = 0LL;
    CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
    v39 = 0xD147407EB1239169uLL;
    CcAdjustBcbDepth(
      (unsigned int)__ROR4__(150994945, 216),
      __ROL8__(0xD147407EB1239169uLL, 71),
      0LL,
      v8,
      (unsigned int)__ROL4__(1098907648, 74),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      DpcStack);
    JUMPOUT(0x1405C637DLL);
  }
  return result;
}
