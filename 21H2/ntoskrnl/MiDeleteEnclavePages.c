/*
 * XREFs of MiDeleteEnclavePages @ 0x140A6A73C
 * Callers:
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeRemoveEnclavePage @ 0x14056D650 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1405A931C (MiDeleteEnclavePage.c)
 *     PsDeleteVsmEnclave @ 0x1409B41CC (PsDeleteVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140A6A948 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140A6A9A0 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v12; // rdx

  v2 = *(_DWORD *)(a2 + 64);
  if ( (v2 & 1) != 0 )
  {
    v4 = (_QWORD *)(a2 + 120);
    if ( *(_QWORD *)(a2 + 120) )
    {
      if ( (v2 & 8) == 0 )
        MiTerminateHardwareEnclave(a1, a2);
      v5 = *(_QWORD **)(a2 + 80);
      if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v5) & 1) != 0 )
      {
        v6 = KeRemoveEnclavePage();
        if ( v6 < 0 )
          KeBugCheckEx(0x1Au, 0x18011544uLL, *(_QWORD *)(a2 + 80), v6, 0LL);
        MiDeleteEnclavePage(*(_QWORD *)(a2 + 80), 0);
        v5 = *(_QWORD **)(a2 + 80);
      }
      MiReleasePtes((__int64)&qword_140C534C0, v5, 1u);
      v7 = *(void **)(a2 + 88);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
      v9 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v4 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53420);
      KeAbPostRelease((ULONG_PTR)&qword_140C53420);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    v12 = *(_QWORD **)(a2 + 72);
    if ( v12 )
      PsDeleteVsmEnclave(a1, v12);
  }
}
