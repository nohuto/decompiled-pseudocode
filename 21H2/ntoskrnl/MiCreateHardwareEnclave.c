/*
 * XREFs of MiCreateHardwareEnclave @ 0x140979A34
 * Callers:
 *     MiCreateEnclave @ 0x140979918 (MiCreateEnclave.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeGetIdealNodeNumberThread @ 0x14056D710 (KeGetIdealNodeNumberThread.c)
 *     MiGetVmPartition @ 0x14058DE04 (MiGetVmPartition.c)
 *     MiAllocateEnclavePages @ 0x1405A828C (MiAllocateEnclavePages.c)
 *     MiInitializeEnclavePfn @ 0x1405A95FC (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1405A9E34 (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1409614F8 (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 VmPartition; // rsi
  int v13; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 EnclavePages; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 ValidPte; // rbx
  int v20; // r13d
  int HasShadow; // eax
  __int64 v22; // r11
  unsigned int v23; // ecx
  __int16 v24; // ax
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  int v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+84h] [rbp+Ch]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  Process = CurrentThread->ApcState.Process;
  v9 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  VmPartition = MiGetVmPartition((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  if ( !ExAcquireRundownProtection(&stru_140C53428) )
    return 3221225738LL;
  if ( !a3 || (v13 = MiReserveEnclavePages(a2, VmPartition, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v13 >= 0) )
  {
    IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
    EnclavePages = MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL);
    v16 = EnclavePages;
    if ( !EnclavePages )
    {
      v13 = -1073741801;
      goto LABEL_32;
    }
    MiSetPfnBlink(EnclavePages, 0LL, 0);
    v17 = *(_QWORD *)(a2 + 80);
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4);
    MiInitializeEnclavePfn(v18, v17, 4);
    ValidPte = MiMakeValidPte(v17, v18, -1610612732);
    v20 = 0;
    if ( MiPteInShadowRange(v17) )
    {
      HasShadow = MiPteHasShadow();
      v22 = 1LL;
      if ( HasShadow )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C51864) )
          goto LABEL_10;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_10:
        if ( (ValidPte & 1) != 0 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    else
    {
      v22 = 1LL;
    }
    *(_QWORD *)v17 = ValidPte;
    if ( v20 )
      MiWritePteShadow(v17, ValidPte);
    v23 = ((unsigned int)v22 & *(_DWORD *)(a2 + 72)) << 8;
    if ( !Process[1].Affinity.StaticBitmap[30]
      || (v24 = WORD2(Process[2].Affinity.StaticBitmap[20]), v24 != 332) && v24 != 452 )
    {
      LOWORD(v23) = v22 | v23;
    }
    v13 = KeCreateEnclave((__int64)(v17 << 25) >> 16, v9, v22 + v10 - v9, v31, v28, v23, &v29, a5);
    if ( v13 >= 0 )
    {
      if ( (v29 & 2) != 0 )
        *(_DWORD *)(a2 + 64) |= 4u;
      *(_QWORD *)(a2 + 112) = Process;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
      v25 = (_QWORD *)qword_140C53418;
      v26 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C53418 != &qword_140C53410 )
        __fastfail(3u);
      *v26 = &qword_140C53410;
      v26[1] = v25;
      *v25 = v26;
      qword_140C53418 = (__int64)v26;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53420);
      KeAbPostRelease((ULONG_PTR)&qword_140C53420);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v13 = 0;
    }
  }
LABEL_32:
  ExReleaseRundownProtection(&stru_140C53428);
  return (unsigned int)v13;
}
