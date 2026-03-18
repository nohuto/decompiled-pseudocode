/*
 * XREFs of MiCreateHardwareEnclave @ 0x1408D5110
 * Callers:
 *     MiCreateEnclave @ 0x1408D501C (MiCreateEnclave.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiGetVmPartition @ 0x140533C20 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x140548BD8 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x140548F28 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1405497EC (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1408BDFBC (KeCreateEnclave.c)
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
  __int64 v21; // r8
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int16 v24; // cx
  bool v25; // dl
  __int16 v26; // cx
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+84h] [rbp+Ch]
  __int64 v32; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v31 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v30 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12;
  v32 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = v9 | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].ActiveProcessorsPadding[6]);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4ED40) )
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
        if ( !HIBYTE(word_140C4DE88) )
        {
          v22 = (ValidPte & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v22 = (ValidPte & 1) == 0;
LABEL_13:
        if ( !v22 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v20 )
      MiWritePteShadow(v17, ValidPte, v21);
    v23 = Process[1].AffinityPadding[10];
    v25 = 0;
    if ( v23 )
    {
      v24 = *(_WORD *)(v23 + 8);
      if ( v24 == 332 || v24 == 452 )
        v25 = 1;
    }
    v26 = ((*(_WORD *)(a2 + 72) & 1) << 8) | 1;
    if ( v25 )
      v26 = (*(_WORD *)(a2 + 72) & 1) << 8;
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v32, v10 - v32 + 1, v33, v29, v26, &v30, a5);
    if ( v13 >= 0 )
    {
      if ( (v30 & 2) != 0 )
      {
        *(_DWORD *)(a2 + 64) |= 4u;
        _InterlockedIncrement((volatile signed __int32 *)(Process[1].ActiveProcessorsPadding[8] + 296));
      }
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4ED38, 0LL);
      v27 = (_QWORD *)qword_140C4ED30;
      v28 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C4ED30 != &qword_140C4ED28 )
        __fastfail(3u);
      *v28 = &qword_140C4ED28;
      v28[1] = v27;
      *v27 = v28;
      qword_140C4ED30 = (__int64)v28;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4ED38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4ED38);
      KeAbPostRelease((ULONG_PTR)&qword_140C4ED38);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v13 = 0;
    }
  }
LABEL_32:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C4ED40);
  return (unsigned int)v13;
}
