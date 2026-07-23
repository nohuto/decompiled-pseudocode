/*
 * XREFs of MiSessionCreateInternal @ 0x140782E30
 * Callers:
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     KeQueryInterruptTimePrecise @ 0x14031D740 (KeQueryInterruptTimePrecise.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     MiMarkSessionMasterProcess @ 0x14039E21C (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  unsigned int v5; // edi
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v7; // r14
  ULONG_PTR v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ecx
  unsigned __int16 v13; // si
  LARGE_INTEGER v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  void *CurrentServerSilo; // rax
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  LARGE_INTEGER v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  ULONG v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]
  _QWORD v26[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v20 = qword_140C4DC60;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v21 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC38, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4ED90, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C4ED90->SizeOfBitMap + 128;
    if ( v5 > 0x7FFFF )
      v5 = 0x7FFFF;
    Pool = (_RTL_BITMAP *)MiAllocatePool(256, 8 * ((v5 >> 6) + ((v5 & 0x3F) != 0) + 2), 0x20206D4Du);
    v7 = Pool;
    if ( !Pool )
      goto LABEL_21;
    Pool->SizeOfBitMap = v5;
    Pool->Buffer = &Pool[1].SizeOfBitMap;
    RtlClearAllBits(Pool);
    memmove(
      v7->Buffer,
      qword_140C4ED90->Buffer,
      8 * (((unsigned __int64)qword_140C4ED90->SizeOfBitMap >> 6) + ((qword_140C4ED90->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140C4ED90, 0);
    qword_140C4ED90 = v7;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v7, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC38);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC38);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((unsigned __int64)a1, 8uLL, 0) )
  {
    v8 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
    v9 = (_QWORD *)v8;
    if ( v8 )
    {
      v10 = (__int64)(v8 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL) )
      {
        v11 = MiMapNewSession(v10, *(unsigned __int16 *)a1);
        v12 = PsDefaultSystemLocaleId;
        v13 = v11;
        *(_DWORD *)(v10 + 4) = 0;
        *(_DWORD *)(v10 + 96) = v12;
        *(_DWORD *)v10 = 1;
        *(_DWORD *)(v10 + 8) = ClearBitsAndSet;
        v14 = KeQueryInterruptTimePrecise(&v22);
        v15 = v20;
        v16 = v20;
        *(LARGE_INTEGER *)(v10 + 1056) = v14;
        v19 = MI_READ_PTE_LOCK_FREE(8 * ((v16 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v10 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v10 + 430) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v10 + 368) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_DWORD *)(v10 + 256) = v13;
        *(_QWORD *)(v10 + 40) = 8LL;
        *(_QWORD *)(v10 + 48) = 8LL;
        *(_QWORD *)(v10 + 816) = v19;
        *(_QWORD *)(v10 + 24) = v10 + 16;
        *(_QWORD *)(v10 + 16) = v10 + 16;
        *(_QWORD *)(v10 + 824) = 0LL;
        *(_QWORD *)(v10 + 88) = 0LL;
        *(_QWORD *)(v10 + 856) = 0LL;
        *(_DWORD *)(v10 + 12) = 1;
        *(_QWORD *)(v10 + 224) = _InterlockedIncrement64(&PsNextSecurityDomain);
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v10 + 1048) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v10 + 1048)) + 141),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v21, v10);
        *(_DWORD *)(v10 + 904) = 4;
        *(_QWORD *)(v10 + 896) = MiGetPteAddress(qword_140C4CC20);
        *(_QWORD *)(v10 + 912) = v15 + 220;
        *(_DWORD *)(v10 + 908) = 1;
        *(_QWORD *)(v10 + 928) = v10 + 856;
        *(_BYTE *)(v10 + 440) = *(_BYTE *)(v10 + 440) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v25 = 0;
          v26[0] = &v23;
          v24 = ClearBitsAndSet;
          v23 = v10;
          v26[1] = 12LL;
          EtwTraceKernelEvent((__int64)v26, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8LL);
    if ( v9 )
      MiReleasePtes((__int64)&qword_140C4EDC0, v9, 1u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC38, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4ED90->Buffer, ClearBitsAndSet);
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC38);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC38);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
