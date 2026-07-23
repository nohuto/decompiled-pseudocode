/*
 * XREFs of MiSessionCreateInternal @ 0x140772420
 * Callers:
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 *     KeQueryInterruptTimePrecise @ 0x14030F310 (KeQueryInterruptTimePrecise.c)
 *     RtlFindClearBitsAndSet @ 0x140338F70 (RtlFindClearBitsAndSet.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiMarkSessionMasterProcess @ 0x14039A93C (MiMarkSessionMasterProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionCreateInternal(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rax
  ULONG ClearBitsAndSet; // r14d
  unsigned int v5; // edi
  _RTL_BITMAP *Pool; // rax
  _RTL_BITMAP *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdi
  unsigned __int16 v14; // ax
  int v15; // ecx
  unsigned __int16 v16; // si
  LARGE_INTEGER v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  struct _LIST_ENTRY *CurrentServerSilo; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h]
  LARGE_INTEGER v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h] BYREF
  ULONG v30; // [rsp+58h] [rbp-28h]
  int v31; // [rsp+5Ch] [rbp-24h]
  _QWORD v32[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v26 = qword_140C4DD20;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v27 = Process;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DCF8, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C4EE50, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v5 = qword_140C4EE50->SizeOfBitMap + 128;
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
      qword_140C4EE50->Buffer,
      8 * (((unsigned __int64)qword_140C4EE50->SizeOfBitMap >> 6) + ((qword_140C4EE50->SizeOfBitMap & 0x3F) != 0)));
    ExFreePoolWithTag(qword_140C4EE50, 0);
    qword_140C4EE50 = v7;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v7, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DCF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DCF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DCF8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v8, v9, v10);
  if ( (unsigned int)MiChargeCommit((__int64)a1, 8uLL, 0) )
  {
    v11 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    v12 = (_QWORD *)v11;
    if ( v11 )
    {
      v13 = (__int64)(v11 << 25) >> 16;
      if ( (unsigned int)MiChargeResident(a1, ClearBitsAndSet != 0 ? 1032LL : 28LL, 0LL) )
      {
        v14 = MiMapNewSession(v13, *(unsigned __int16 *)a1);
        v15 = PsDefaultSystemLocaleId;
        v16 = v14;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 96) = v15;
        *(_DWORD *)v13 = 1;
        *(_DWORD *)(v13 + 8) = ClearBitsAndSet;
        v17 = KeQueryInterruptTimePrecise(&v28);
        v18 = v26;
        v19 = v26;
        *(LARGE_INTEGER *)(v13 + 1056) = v17;
        v25 = MI_READ_PTE_LOCK_FREE(8 * ((v19 >> 39) & 0x1FF) - 0x90482413000LL);
        *(_QWORD *)(v13 + 32) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL;
        *(_WORD *)(v13 + 430) = *(_WORD *)a1;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(a1[22] + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v13 + 368) = ClearBitsAndSet != 0 ? 1024LL : 20LL;
        *(_DWORD *)(v13 + 256) = v16;
        *(_QWORD *)(v13 + 40) = 8LL;
        *(_QWORD *)(v13 + 48) = 8LL;
        *(_QWORD *)(v13 + 816) = v25;
        *(_QWORD *)(v13 + 24) = v13 + 16;
        *(_QWORD *)(v13 + 16) = v13 + 16;
        *(_QWORD *)(v13 + 824) = 0LL;
        *(_QWORD *)(v13 + 88) = 0LL;
        *(_QWORD *)(v13 + 856) = 0LL;
        *(_DWORD *)(v13 + 12) = 1;
        *(_QWORD *)(v13 + 224) = _InterlockedIncrement64(&PsNextSecurityDomain);
        CurrentServerSilo = PsGetCurrentServerSilo();
        *(_QWORD *)(v13 + 1048) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            *((volatile signed __int32 **)PsGetServerSiloGlobals(*(_QWORD *)(v13 + 1048)) + 139),
            ClearBitsAndSet,
            -1);
        }
        MiMarkSessionMasterProcess(v27, v13);
        *(_DWORD *)(v13 + 904) = 4;
        *(_QWORD *)(v13 + 896) = MiGetPteAddress(qword_140C4CCE0);
        *(_QWORD *)(v13 + 912) = v18 + 220;
        *(_DWORD *)(v13 + 908) = 1;
        *(_QWORD *)(v13 + 928) = v13 + 856;
        *(_BYTE *)(v13 + 440) = *(_BYTE *)(v13 + 440) & 0xF8 | 1;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          v31 = 0;
          v32[0] = &v29;
          v30 = ClearBitsAndSet;
          v29 = v13;
          v32[1] = 12LL;
          EtwTraceKernelEvent((__int64)v32, 1u, 0x20400000u, 0x24Bu, 0x401803u);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)a1, 8LL);
    if ( v12 )
      MiReleasePtes((__int64)&qword_140C4EE80, v12, 1u);
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DCF8, 0LL);
  _bittestandreset((signed __int32 *)qword_140C4EE50->Buffer, ClearBitsAndSet);
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DCF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DCF8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DCF8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v22, v23, v24);
  return 3221225495LL;
}
