/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x1402CDB2C
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF

  v12[1] = 8LL;
  v12[0] = 0LL;
  v13 = 393479LL;
  v14[1] = v14;
  v14[0] = v14;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v12[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v12;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8, v9, v10);
  return KeWaitForGate((__int64)&v13, 18);
}
