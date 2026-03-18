/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x14030F4FC
 * Callers:
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x14030E9A4 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF

  v10[1] = 8LL;
  v10[0] = 0LL;
  v11 = 393479LL;
  v12[1] = v12;
  v12[0] = v12;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v10[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v10;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8);
  return KeWaitForGate((__int64)&v11, 0x12u);
}
