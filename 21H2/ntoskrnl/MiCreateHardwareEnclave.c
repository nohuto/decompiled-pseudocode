/*
 * XREFs of MiCreateHardwareEnclave @ 0x1408D2A30
 * Callers:
 *     MiCreateEnclave @ 0x1408D293C (MiCreateEnclave.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetVmPartition @ 0x140535960 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x14054A918 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x14054AC68 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14054B52C (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1408BB5FC (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r12
  unsigned __int64 v9; // rbp
  __int64 v10; // rbp
  _QWORD *VmPartition; // rdi
  int v13; // ebx
  __int64 EnclavePage; // rax
  _DWORD *v15; // r9
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 ValidPte; // rbx
  int v19; // r15d
  bool v20; // zf
  unsigned __int64 v21; // rcx
  __int16 v22; // cx
  bool v23; // dl
  __int16 v24; // cx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  int v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+84h] [rbp+Ch]
  __int64 v30; // [rsp+88h] [rbp+10h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v29 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v28 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12;
  v30 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = v9 | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].ActiveProcessorsPadding[6]);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&stru_140C4EF00) )
    return 3221225738LL;
  if ( !a3 || (v13 = MiReserveEnclavePages(a2, VmPartition, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v13 >= 0) )
  {
    EnclavePage = MiGetEnclavePage(VmPartition, 0);
    v16 = EnclavePage;
    if ( EnclavePage == -1 )
    {
      v13 = -1073741801;
      goto LABEL_32;
    }
    v17 = *(_QWORD *)(a2 + 80);
    MiInitializeEnclavePfn(EnclavePage, v17, 4LL, v15);
    ValidPte = MiMakeValidPte(v17, v16, -1610612732);
    v19 = 0;
    if ( MiPteInShadowRange(v17) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v20 = (ValidPte & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (ValidPte & 1) == 0;
LABEL_13:
        if ( !v20 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v19 )
      MiWritePteShadow(v17, ValidPte);
    v21 = Process[1].AffinityPadding[10];
    v23 = 0;
    if ( v21 )
    {
      v22 = *(_WORD *)(v21 + 8);
      if ( v22 == 332 || v22 == 452 )
        v23 = 1;
    }
    v24 = ((*(_WORD *)(a2 + 72) & 1) << 8) | 1;
    if ( v23 )
      v24 = (*(_WORD *)(a2 + 72) & 1) << 8;
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v30, v10 - v30 + 1, v31, v27, v24, &v28, a5);
    if ( v13 >= 0 )
    {
      if ( (v28 & 2) != 0 )
      {
        *(_DWORD *)(a2 + 64) |= 4u;
        _InterlockedIncrement((volatile signed __int32 *)(Process[1].ActiveProcessorsPadding[8] + 296));
      }
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EEF8, 0LL);
      v25 = (_QWORD *)qword_140C4EEF0;
      v26 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C4EEF0 != &qword_140C4EEE8 )
        __fastfail(3u);
      *v26 = &qword_140C4EEE8;
      v26[1] = v25;
      *v25 = v26;
      qword_140C4EEF0 = (__int64)v26;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EEF8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EEF8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v13 = 0;
    }
  }
LABEL_32:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_140C4EF00);
  return (unsigned int)v13;
}
