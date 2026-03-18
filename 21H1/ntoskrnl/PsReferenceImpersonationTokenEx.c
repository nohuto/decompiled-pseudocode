/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1405EBDA0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140259670 (SepReferenceTokenUsingPseudoHandle.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14060A240 (SeCreateClientSecurityEx.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     PsReferenceImpersonationToken @ 0x1406C8680 (PsReferenceImpersonationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rsi
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  if ( (*(_DWORD *)(a1 + 1296) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1280, 0LL);
  if ( (*(_DWORD *)(a1 + 1296) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v13 = *(void **)(a1 + 1464)) != 0LL )
    {
      v14 = 0;
    }
    else
    {
      v13 = (void *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF8uLL);
      v14 = BYTE1(*(_DWORD *)(a1 + 1296)) & 1;
    }
    *a3 = v14;
    ObfReferenceObject(v13);
    *a5 = *(_DWORD *)(a1 + 1192) & 3;
    *a4 = (*(_BYTE *)(a1 + 1192) & 4) != 0;
    if ( a6 )
      *a6 = *(_BYTE *)(v12 + 2170);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1280), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1280));
  KeAbPostRelease(a1 + 1280);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v15, v16, v17);
  return v13;
}
