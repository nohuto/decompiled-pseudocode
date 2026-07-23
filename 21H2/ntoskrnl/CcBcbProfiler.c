/*
 * XREFs of CcBcbProfiler @ 0x1403DBB00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     CcAdjustBcbDepth @ 0x14040A470 (CcAdjustBcbDepth.c)
 *     VslVerifyPage @ 0x1404FDB20 (VslVerifyPage.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r10
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // r13
  int v9; // ebx
  unsigned __int64 v10; // r14
  _QWORD *v11; // r9
  const char *v12; // rax
  __int64 v13; // rdi
  unsigned int i; // r11d
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  unsigned __int8 *v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  int v28; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v30; // rdi
  __int64 v31; // r12
  unsigned __int64 v32; // r15
  int v33; // eax
  unsigned __int64 v34; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *DpcStack; // rbx
  _KTHREAD *CurrentThread; // rdx
  _QWORD v38[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v39; // [rsp+58h] [rbp-30h]

  KeExitRetpoline(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v4 = *(unsigned int *)(a2 + 144);
    v5 = *(_QWORD **)(a2 + 128);
    v6 = v4;
    v7 = *(_BYTE *)(a2 + 168);
    v8 = *(_QWORD *)(a2 + 160);
    LOBYTE(v9) = v7;
    v38[0] = a2;
    v10 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v5;
    v11 = (_QWORD *)v10;
    v12 = (const char *)v10;
    if ( v10 < v4 + v10 )
    {
      do
      {
        _mm_prefetch(v12, 0);
        v12 += 64;
      }
      while ( (unsigned __int64)v12 < v4 + v10 );
    }
    v13 = v8;
    for ( i = (unsigned int)v4 >> 7; i; --i )
    {
      v15 = 8LL;
      do
      {
        v16 = v11[1] ^ __ROL8__(*v11 ^ v13, v9);
        v11 += 2;
        v13 = __ROL8__(v16, v9);
        --v15;
      }
      while ( v15 );
      v17 = __ROL8__(v8 ^ ((unsigned __int64)v11 - v10), 17) ^ v8 ^ ((unsigned __int64)v11 - v10);
      v39 = (v17 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v9 = ((unsigned __int8)(v39 ^ v17) ^ (unsigned __int8)v9) & 0x3F;
      if ( !v9 )
        LOBYTE(v9) = 1;
    }
    v18 = v4 & 0x7F;
    if ( v18 >= 8 )
    {
      v19 = (unsigned __int64)v18 >> 3;
      do
      {
        v13 = __ROL8__(*v11++ ^ v13, v9);
        v18 -= 8;
        --v19;
      }
      while ( v19 );
    }
    for ( ; v18; --v18 )
    {
      v20 = *(unsigned __int8 *)v11;
      v11 = (_QWORD *)((char *)v11 + 1);
      v13 = __ROL8__(v20 ^ v13, v9);
    }
    v21 = (const char *)v5;
    if ( v5 < (_QWORD *)((char *)v5 + 12) )
    {
      do
      {
        _mm_prefetch(v21, 0);
        v21 += 64;
      }
      while ( v21 < (const char *)v5 + 12 );
    }
    v22 = __ROL8__(*v5 ^ v13, v7);
    v23 = 4;
    v24 = (unsigned __int8 *)(v5 + 1);
    do
    {
      v25 = *v24++;
      v22 = __ROL8__(v25 ^ v22, v7);
      --v23;
    }
    while ( v23 );
    v26 = -1200000000LL - (unsigned int)ExGenRandom(1) % 0x5F5E100uLL;
    v27 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v26, 0, v27 % 0x2710, (PKDPC)a2);
    if ( v22 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v28 = *(_DWORD *)(a2 + 172);
        if ( v6 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v30 = v10 & 0xFFFFFFFFFFFFF000uLL;
          v31 = (v10 + v6 - 1) | 0xFFF;
          v32 = (v10 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v33 = VslVerifyPage(v30, 0LL);
            v34 = CurrentIrql;
            while ( v33 == -1073741267 )
            {
              if ( !v28 )
                goto LABEL_33;
              if ( CurrentIrql > 1u )
                goto LABEL_31;
              v34 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v33 = VslVerifyPage(v30, 0LL);
            }
            if ( v33 < 0 )
              break;
LABEL_31:
            v30 += 4096LL;
            v32 += 4096LL;
            if ( v32 == v31 )
            {
              __writecr8(v34);
              return;
            }
          }
LABEL_33:
          __writecr8(v34);
        }
      }
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      DpcStack = CurrentPrcb->DpcStack;
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( !CurrentPrcb->DpcRoutineActive || v38 > DpcStack || v38 < DpcStack - 3072 )
        DpcStack = CurrentThread->InitialStack;
      CurrentThread[1].QuantumTarget = 0LL;
      CurrentThread[1].ApcState.ApcListHead[0].Blink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      v38[1] = 0xD147407EB1239169uLL;
      CcAdjustBcbDepth(
        __ROR4__(150994945, 216),
        __ROL8__(0xD147407EB1239169uLL, 71),
        0,
        v10,
        (unsigned int)__ROL4__(1098907648, 74),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x1403DBE7FLL);
    }
  }
}
