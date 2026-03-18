/*
 * XREFs of MiCreateHardwareEnclave @ 0x1408CDF80
 * Callers:
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiGetVmPartition @ 0x14052FC00 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x140544BB8 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140544F08 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1405457CC (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1408B707C (KeCreateEnclave.c)
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
  __int64 v18; // r9
  unsigned __int64 ValidPte; // rbx
  int v20; // r15d
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int16 v23; // cx
  bool v24; // dl
  __int16 v25; // cx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+80h] [rbp+8h] BYREF
  int v33; // [rsp+84h] [rbp+Ch]
  __int64 v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v33 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12;
  v34 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = v9 | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].ActiveProcessorsPadding[6]);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4EE00) )
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
    ValidPte = MiMakeValidPte(v17, v16, 2684354564LL, v18);
    v20 = 0;
    if ( MiPteInShadowRange(v17) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C4DF48) )
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
    if ( v20 )
      MiWritePteShadow(v17, ValidPte);
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
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v34, v10 - v34 + 1, v35, v31, v25, &v32, a5);
    if ( v13 >= 0 )
    {
      if ( (v32 & 2) != 0 )
      {
        *(_DWORD *)(a2 + 64) |= 4u;
        _InterlockedIncrement((volatile signed __int32 *)(Process[1].ActiveProcessorsPadding[8] + 296));
      }
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EDF8, 0LL);
      v26 = (_QWORD *)qword_140C4EDF0;
      v27 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C4EDF0 != &qword_140C4EDE8 )
        __fastfail(3u);
      *v27 = &qword_140C4EDE8;
      v27[1] = v26;
      *v26 = v27;
      qword_140C4EDF0 = (__int64)v27;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EDF8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EDF8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v28, v29, v30);
      v13 = 0;
    }
  }
LABEL_32:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4EE00);
  return (unsigned int)v13;
}
