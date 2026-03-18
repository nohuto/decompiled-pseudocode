/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x1406952E0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x140295EF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 *     SeCreateClientSecurity @ 0x1406821A0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140682390 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationToken @ 0x1406E8D40 (PsReferenceImpersonationToken.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(__int64 a1, char a2, _BYTE *a3, bool *a4, int *a5, _BYTE *a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v12; // r13
  void *v13; // rsi
  char v14; // al

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
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v13;
}
