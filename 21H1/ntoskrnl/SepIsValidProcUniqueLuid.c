/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x1409200C4
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x14091F4D0 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     SepFindMatchingLuidEntry @ 0x140920028 (SepFindMatchingLuidEntry.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(struct _LIST_ENTRY **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  signed __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v3 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(SeLuidToIndexMapping, 0LL);
  SepFindMatchingLuidEntry(*(PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8), a1, &v9);
  if ( v9 )
    v3 = *(_BYTE *)(v9 + 48) != 0 ? 0xC0000225 : 0;
  v4 = (signed __int64 *)SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v3;
}
