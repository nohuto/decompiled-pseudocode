/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x14060D780
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14022A460 (SepReferenceTokenUsingPseudoHandle.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     SeCreateClientSecurity @ 0x140620190 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 *     CmpCmdHiveOpen @ 0x140631E44 (CmpCmdHiveOpen.c)
 *     ObpReferenceDeviceMap @ 0x14063AFA0 (ObpReferenceDeviceMap.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     PsReferenceImpersonationToken @ 0x1406BD8E0 (PsReferenceImpersonationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
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
