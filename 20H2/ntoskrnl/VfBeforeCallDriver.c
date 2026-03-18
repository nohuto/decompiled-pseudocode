/*
 * XREFs of VfBeforeCallDriver @ 0x1409D4088
 * Callers:
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C8494 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C8504 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     VfBugCheckNoStackUsage @ 0x14059FF78 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver1 @ 0x1409D2C5C (IovpCallDriver1.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D3CDC (VfGetPristineDispatchRoutine.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D4898 (ViIrpCheckKernelAddressForIrp.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409E0D34 (VfDeadlockBeforeCallDriver.c)
 */

__int64 __fastcall VfBeforeCallDriver(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 CurrentIrql; // al
  __int64 v10; // rax

  if ( *(_BYTE *)(a2 + 64) != 1 && (MmVerifierData & 0x100) != 0 && !*(_QWORD *)(a2 + 8) )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0x10) != 0 )
      v7 = *(_QWORD *)(a2 + 24);
    else
      v7 = *(_QWORD *)(a2 + 112);
    ViIrpCheckKernelAddressForIrp(a2, v7);
  }
  if ( a3 )
  {
    if ( !KeAreInterruptsEnabled() && (MmVerifierData & 0x400000) == 0 )
    {
      *(_BYTE *)(a3 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      *(_OWORD *)&xmmword_140D4A040 = 0LL;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      BugCheckParameter1 = 192LL;
      qword_140D4A038 = a2;
      VfBugCheckNoStackUsage();
    }
    *(_QWORD *)(a3 + 48) = VfGetPristineDispatchRoutine(
                             *(struct _DRIVER_OBJECT **)(a1 + 8),
                             *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL));
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)(a3 + 156) = CurrentIrql;
    *(_DWORD *)(a3 + 188) = KeGetCurrentThread()->WaitBlock[3].SpareLong;
    if ( *(char *)(a2 + 67) == *(char *)(a2 + 66) + 1 )
    {
      v10 = *(_QWORD *)(a2 + 80);
      if ( v10 )
      {
        if ( !*(_BYTE *)(a2 + 64) && *(_DWORD *)(v10 + 4) )
          *(_DWORD *)(a3 + 152) |= 2u;
      }
    }
    v8 = VfDeadlockBeforeCallDriver(a2);
    if ( !VfIoDisabled )
    {
      *(_DWORD *)(a3 + 152) |= 1u;
      IovpCallDriver1(a3);
    }
  }
  else
  {
    return (unsigned int)VfDeadlockBeforeCallDriver(a2);
  }
  return v8;
}
