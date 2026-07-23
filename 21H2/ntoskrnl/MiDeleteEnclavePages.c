/*
 * XREFs of MiDeleteEnclavePages @ 0x1409B1A90
 * Callers:
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B18F0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeRemoveEnclavePage @ 0x140515630 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x14054A680 (MiDeleteEnclavePage.c)
 *     PsDeleteVsmEnclave @ 0x14090DEB4 (PsDeleteVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1409B1C90 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409B1CF4 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // rdx
  _QWORD *v5; // rsi
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rax

  v2 = *(_DWORD *)(a2 + 64);
  if ( (v2 & 1) == 0 || *(_QWORD *)(a2 + 120) )
  {
    if ( (v2 & 4) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1680) + 296LL), 0xFFFFFFFF);
      v2 = *(_DWORD *)(a2 + 64);
    }
    if ( (v2 & 1) != 0 )
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
      MiReleasePtes((__int64)&qword_140C4EF80, v5, 1u);
      v7 = *(void **)(a2 + 88);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EEF8, 0LL);
      v9 = (_QWORD *)(a2 + 120);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EEF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EEF8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EEF8);
      LOBYTE(v2) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v4 = *(_QWORD **)(a2 + 72);
      if ( v4 )
        LOBYTE(v2) = PsDeleteVsmEnclave(a1, v4);
    }
  }
  return v2;
}
