/*
 * XREFs of MiSessionCreateInternal @ 0x140786DD0
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14023D5A0 (KeQueryInterruptTimePrecise.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     RtlFindClearBitsAndSet @ 0x1402F5970 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiMarkSessionMasterProcess @ 0x14039DFAC (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  unsigned int v5; // edi
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v7; // r14
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  ULONG_PTR v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rdi
  unsigned __int16 v13; // ax
  int v14; // ecx
  unsigned __int16 v15; // si
  LARGE_INTEGER v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  void *CurrentServerSilo; // rax
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  LARGE_INTEGER v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  ULONG v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  _QWORD v28[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v22 = qword_140C4DE20;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v23 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDF8, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4EF50, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C4EF50->SizeOfBitMap + 128;
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
      qword_140C4EF50->Buffer,
      8 * (((unsigned __int64)qword_140C4EF50->SizeOfBitMap >> 6) + ((qword_140C4EF50->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140C4EF50, 0);
    qword_140C4EF50 = v7;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v7, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DDF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDF8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v10 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v8, v9);
    v11 = (_QWORD *)v10;
    if ( v10 )
    {
      v12 = (__int64)(v10 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL) )
      {
        v13 = MiMapNewSession(v12, *(unsigned __int16 *)a1);
        v14 = PsDefaultSystemLocaleId;
        v15 = v13;
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(v12 + 96) = v14;
        *(_DWORD *)v12 = 1;
        *(_DWORD *)(v12 + 8) = ClearBitsAndSet;
        v16 = KeQueryInterruptTimePrecise(&v24);
        v17 = v22;
        v18 = v22;
        *(LARGE_INTEGER *)(v12 + 1056) = v16;
        v21 = MI_READ_PTE_LOCK_FREE(8 * ((v18 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v12 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v12 + 430) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v12 + 368) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_DWORD *)(v12 + 256) = v15;
        *(_QWORD *)(v12 + 40) = 8LL;
        *(_QWORD *)(v12 + 48) = 8LL;
        *(_QWORD *)(v12 + 816) = v21;
        *(_QWORD *)(v12 + 24) = v12 + 16;
        *(_QWORD *)(v12 + 16) = v12 + 16;
        *(_QWORD *)(v12 + 824) = 0LL;
        *(_QWORD *)(v12 + 88) = 0LL;
        *(_QWORD *)(v12 + 856) = 0LL;
        *(_DWORD *)(v12 + 12) = 1;
        *(_QWORD *)(v12 + 224) = _InterlockedIncrement64(&PsNextSecurityDomain);
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v12 + 1048) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v12 + 1048)) + 141),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v23, v12);
        *(_DWORD *)(v12 + 904) = 4;
        *(_QWORD *)(v12 + 896) = MiGetPteAddress(qword_140C4CDE0);
        *(_QWORD *)(v12 + 912) = v17 + 220;
        *(_DWORD *)(v12 + 908) = 1;
        *(_QWORD *)(v12 + 928) = v12 + 856;
        *(_BYTE *)(v12 + 440) = *(_BYTE *)(v12 + 440) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v27 = 0;
          v28[0] = &v25;
          v26 = ClearBitsAndSet;
          v25 = v12;
          v28[1] = 12LL;
          EtwTraceKernelEvent((int)v28, 1, 0x20400000u, 587, 4200451);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8LL);
    if ( v11 )
      MiReleasePtes((__int64)&qword_140C4EF80, v11, 1u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDF8, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4EF50->Buffer, ClearBitsAndSet);
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DDF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDF8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
