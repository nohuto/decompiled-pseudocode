/*
 * XREFs of MiCreateHardwareEnclave @ 0x1408D28D0
 * Callers:
 *     MiCreateEnclave @ 0x1408D27DC (MiCreateEnclave.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetVmPartition @ 0x140535720 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x14054A6D8 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x14054AA28 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14054B2EC (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1408BB49C (KeCreateEnclave.c)
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
  __int64 v20; // r8
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int16 v23; // cx
  bool v24; // dl
  __int16 v25; // cx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  int v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+84h] [rbp+Ch]
  __int64 v31; // [rsp+88h] [rbp+10h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v30 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12;
  v31 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = v9 | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].ActiveProcessorsPadding[6]);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4EEC0) )
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
        if ( !HIBYTE(word_140C4E008) )
        {
          v21 = (ValidPte & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v21 = (ValidPte & 1) == 0;
LABEL_13:
        if ( !v21 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v19 )
      MiWritePteShadow(v17, ValidPte, v20);
    v22 = Process[1].AffinityPadding[10];
    v24 = 0;
    if ( v22 )
    {
      v23 = *(_WORD *)(v22 + 8);
      if ( v23 == 332 || v23 == 452 )
        v24 = 1;
    }
    v25 = ((*(_WORD *)(a2 + 72) & 1) << 8) | 1;
    if ( v24 )
      v25 = (*(_WORD *)(a2 + 72) & 1) << 8;
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v31, v10 - v31 + 1, v32, v28, v25, &v29, a5);
    if ( v13 >= 0 )
    {
      if ( (v29 & 2) != 0 )
      {
        *(_DWORD *)(a2 + 64) |= 4u;
        _InterlockedIncrement((volatile signed __int32 *)(Process[1].ActiveProcessorsPadding[8] + 296));
      }
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EEB8, 0LL);
      v26 = (_QWORD *)qword_140C4EEB0;
      v27 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C4EEB0 != &qword_140C4EEA8 )
        __fastfail(3u);
      *v27 = &qword_140C4EEA8;
      v27[1] = v26;
      *v26 = v27;
      qword_140C4EEB0 = (__int64)v27;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EEB8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EEB8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v13 = 0;
    }
  }
LABEL_32:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4EEC0);
  return (unsigned int)v13;
}
