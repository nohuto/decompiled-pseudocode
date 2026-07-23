/*
 * XREFs of MiPerformImageHotPatch @ 0x1408CF704
 * Callers:
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiBeginHoldingDirtyFaults @ 0x14053C730 (MiBeginHoldingDirtyFaults.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1406EFB88 (MiMapViewOfSectionExCommon.c)
 *     MiUnmapImageInSystemSpace @ 0x14070D7F4 (MiUnmapImageInSystemSpace.c)
 *     MiApplyImageHotPatch @ 0x1408CBD9C (MiApplyImageHotPatch.c)
 *     MiInitializeImageHotPatchContext @ 0x1408CD124 (MiInitializeImageHotPatchContext.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x1408CFE78 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x1408D0C8C (MiReleaseHotPatchResources.c)
 *     MiSetProcessPebHotPatchState @ 0x1408D0EA4 (MiSetProcessPebHotPatchState.c)
 *     RtlFindHotPatchBase @ 0x14091D740 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14091D770 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x14091DA04 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409B5844 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 MiPerformImageHotPatch(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rsi
  void *v3; // r14
  _QWORD *v4; // r15
  unsigned int *v5; // rcx
  __int64 Process; // r12
  int v7; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 HotPatchInformation; // rax
  const void *v11; // rbx
  SIZE_T v12; // rax
  size_t v13; // r13
  PVOID Pool; // rax
  _DWORD *HotPatchBase; // rbx
  int v16; // ecx
  void *v17; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v19; // rbx
  volatile signed __int64 *v20; // rsi
  int v22; // [rsp+20h] [rbp-298h]
  char v23; // [rsp+28h] [rbp-290h]
  int v24; // [rsp+30h] [rbp-288h]
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-270h]
  int v26; // [rsp+90h] [rbp-228h]
  int v27; // [rsp+98h] [rbp-220h]
  __int64 v28; // [rsp+A0h] [rbp-218h]
  __int64 v29; // [rsp+B0h] [rbp-208h]
  HANDLE SecureHandle; // [rsp+B8h] [rbp-200h] BYREF
  int v31[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  int v32; // [rsp+C8h] [rbp-1F0h]
  _DWORD v33[3]; // [rsp+CCh] [rbp-1ECh] BYREF
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+D8h] [rbp-1E0h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-1C0h]
  char v37[8]; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v38[18]; // [rsp+110h] [rbp-1A8h] BYREF
  _QWORD v39[18]; // [rsp+1A0h] [rbp-118h] BYREF
  PVOID BaseOfImage[17]; // [rsp+230h] [rbp-88h] BYREF
  __int64 v43; // [rsp+2D0h] [rbp+18h] BYREF
  va_list va; // [rsp+2D0h] [rbp+18h]
  __int64 v45; // [rsp+2D8h] [rbp+20h]
  __int64 v46; // [rsp+2E0h] [rbp+28h]
  UNICODE_STRING *v47; // [rsp+2E8h] [rbp+30h]
  __int64 v48; // [rsp+2F0h] [rbp+38h]
  __int64 v49; // [rsp+2F8h] [rbp+40h]
  __int64 v50; // [rsp+300h] [rbp+48h]
  unsigned int *v51; // [rsp+308h] [rbp+50h]
  va_list va1; // [rsp+310h] [rbp+58h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v43 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, UNICODE_STRING *);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, unsigned int *);
  v2 = a2;
  memset(BaseOfImage, 0, 0x50uLL);
  v36 = 0LL;
  v32 = 0;
  memset(v39, 0, sizeof(v39));
  memset(v38, 0, sizeof(v38));
  Handle = 0LL;
  DmaAdapter[0] = 0LL;
  *(_QWORD *)v31 = 0LL;
  SecureHandle = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  MiInitializeImageHotPatchContext(v39, 0LL);
  MiInitializeImageHotPatchContext(v38, 0LL);
  v5 = v51;
  *(_QWORD *)v51 = 0LL;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v29 = Process;
  DmaAdapter[1] = (PADAPTER_OBJECT)Process;
  if ( !*(_QWORD *)(Process + 1360) && (*(_DWORD *)(Process + 1124) & 0x4000000) != 0 )
  {
    v7 = -1073741637;
    goto LABEL_36;
  }
  if ( !v47->Length )
  {
    v8 = 0LL;
LABEL_23:
    CurrentThread = KeGetCurrentThread();
    v19 = v46;
    MiLockVad((__int64)CurrentThread, v46);
    if ( (unsigned int)MiVadDeleted(v19) )
    {
      MiUnlockVad((__int64)CurrentThread, v19);
      v7 = -1073741800;
    }
    else
    {
      MiInitializeImageHotPatchContext(v39, v19);
      MiBeginHoldingDirtyFaults(a1, &v39[11]);
      LODWORD(v39[17]) |= 2u;
      v7 = MiPrepareToHotPatchImage(v39, v3, v2);
      MiUnlockVad((__int64)CurrentThread, v19);
      if ( v7 >= 0 )
      {
        MiSetProcessPebHotPatchState(v29);
        if ( !v47->Length
          || (v33[0] = 0,
              v7 = RtlApplyHotPatch(
                     v39[9],
                     v39[1],
                     0,
                     0,
                     0LL,
                     v23,
                     v24,
                     v38[9],
                     v38[1],
                     v38[10],
                     SHIDWORD(v38[4]),
                     (__int64)v33,
                     (__int64)v3,
                     v8,
                     2,
                     0LL,
                     0LL,
                     0LL,
                     v26,
                     v27,
                     v28),
              v7 >= 0) )
        {
          v7 = MiApplyImageHotPatch((__int64)v39, (__int64)v38, a2, (__int64)v3, v8);
          LODWORD(v43) = v7;
          if ( v7 >= 0 )
          {
            if ( v4 )
            {
              v4[1] = *(_QWORD *)v31;
              *(_QWORD *)v31 = 0LL;
              v4[2] = SecureHandle;
              SecureHandle = 0LL;
              --CurrentThread->SpecialApcDisable;
              v20 = (volatile signed __int64 *)(a1 + 16);
              ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
              *v4 = *(_QWORD *)(a2 + 56);
              *(_QWORD *)(a2 + 56) = v4;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v20);
              KeAbPostRelease((ULONG_PTR)v20);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              v4 = 0LL;
            }
            v7 = 0;
          }
        }
      }
    }
    Process = v29;
    goto LABEL_36;
  }
  v7 = MiOpenHotPatchFile(v47, 0, v50, &Handle, DmaAdapter, BaseOfImage, 0LL, v5);
  if ( v7 < 0 )
    goto LABEL_36;
  v9 = (unsigned __int64)LODWORD(BaseOfImage[2]) << 12;
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_8:
    v7 = -1073741701;
    goto LABEL_36;
  }
  HotPatchInformation = RtlFindHotPatchInformation(BaseOfImage[0]);
  v11 = (const void *)HotPatchInformation;
  v36 = HotPatchInformation;
  if ( !HotPatchInformation )
  {
    v7 = -1073741701;
    LODWORD(v43) = -1073741701;
    goto LABEL_36;
  }
  v12 = *(unsigned int *)(HotPatchInformation + 4);
  v32 = v12;
  v13 = v12;
  Pool = MiAllocatePool(64, v12, 0x4E495048u);
  v3 = Pool;
  *(_QWORD *)&v33[1] = Pool;
  if ( !Pool )
  {
LABEL_12:
    v7 = -1073741670;
    goto LABEL_36;
  }
  memmove(Pool, v11, v13);
  HotPatchBase = (_DWORD *)RtlFindHotPatchBase(v3);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v16, (_DWORD)HotPatchBase, v45, v9, v22) )
    goto LABEL_8;
  v8 = (__int64)v3 + (unsigned int)HotPatchBase[6];
  if ( HotPatchBase[3] != (_DWORD)v48 || HotPatchBase[2] != (_DWORD)v49 )
  {
    v7 = -1073741735;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 88) && *(_QWORD *)v51 == *(_QWORD *)(a2 + 80) )
  {
    v7 = 255;
    goto LABEL_36;
  }
  *(_QWORD *)v37 = 0LL;
  LODWORD(ullMultiplicand) = 0;
  v7 = MiMapViewOfSectionExCommon(
         DmaAdapter[0],
         Process,
         1,
         (__int64 *)v31,
         0LL,
         v37,
         0,
         16,
         0LL,
         ullMultiplicand,
         1,
         (__int64)&SecureHandle,
         0,
         0x2000000);
  if ( v7 >= 0 )
  {
    v4 = MiAllocatePool(256, 0x18uLL, 0x45505048u);
    if ( v4 )
    {
      v17 = (void *)MiObtainReferencedSecureVad(Process ^ (unsigned __int64)SecureHandle ^ qword_140C4DCD0, (int *)va);
      MiInitializeImageHotPatchContext(v38, (__int64)v17);
      MiBeginHoldingDirtyFaults(a1, &v38[11]);
      LODWORD(v38[17]) |= 2u;
      v7 = MiPrepareToHotPatchImage(v38, v3, 0LL);
      MiUnlockAndDereferenceVad(v17);
      if ( v7 < 0 )
        goto LABEL_36;
      v2 = a2;
      goto LABEL_23;
    }
    goto LABEL_12;
  }
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( BaseOfImage[0] )
    MiUnmapImageInSystemSpace((unsigned __int64 *)BaseOfImage);
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( *(_QWORD *)v31 )
    MiUnmapViewOfSection((_KPROCESS *)Process, *(unsigned __int64 *)v31, 0, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  MiReleaseHotPatchResources(v39);
  MiReleaseHotPatchResources(v38);
  return (unsigned int)v7;
}
