/*
 * XREFs of MiDeleteEnclavePages @ 0x1409ACE90
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeRemoveEnclavePage @ 0x14050F930 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x140544920 (MiDeleteEnclavePage.c)
 *     PsDeleteVsmEnclave @ 0x1409096B8 (PsDeleteVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1409AD090 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1409AD0F4 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rsi
  int v6; // eax
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  result = *(unsigned int *)(a2 + 64);
  if ( (result & 1) == 0 || *(_QWORD *)(a2 + 120) )
  {
    if ( (result & 4) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1680) + 296LL), 0xFFFFFFFF);
      result = *(unsigned int *)(a2 + 64);
    }
    if ( (result & 1) != 0 )
    {
      if ( (result & 8) == 0 )
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
      MiReleasePtes((__int64)&qword_140C4EE80, v5, 1u);
      v7 = *(void **)(a2 + 88);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4EDF8, 0LL);
      v9 = (_QWORD *)(a2 + 120);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v9 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4EDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4EDF8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4EDF8);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
    }
    else
    {
      v4 = *(_QWORD **)(a2 + 72);
      if ( v4 )
        return PsDeleteVsmEnclave(a1, v4);
    }
  }
  return result;
}
