/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140281620
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x140584258 (MiCheckLockUnlockByVa.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1407FABA0 (MmStoreAllocateVirtualMemory.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14096D7DC (MmAdjustSecuredVirtualMemorySize.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, int *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  ULONG_PTR v6; // rsi
  __int64 Address; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  bool v10; // zf
  int v12; // eax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.StaticBitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    *a2 = -1073741558;
    return 0LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  Address = MiLocateAddress(v6);
  v8 = Address;
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
  if ( !_InterlockedIncrement((volatile signed __int32 *)(Address + 36)) )
    __fastfail(0xEu);
  --CurrentThread->SpecialApcDisable;
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v9 = v6 >> 12;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v8 + 48) & 4) != 0 )
  {
    MiWaitForVadDeletion(v8);
    MiUnlockAndDereferenceVad((PVOID)v8);
    v12 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v12 = -1073741664;
    *a2 = v12;
    return 0LL;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((PVOID)v8);
    *a2 = -1073741664;
    return 0LL;
  }
  return v8;
}
