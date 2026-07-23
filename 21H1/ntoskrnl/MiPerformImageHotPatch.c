/*
 * XREFs of MiPerformImageHotPatch @ 0x1408C8574
 * Callers:
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiBeginHoldingDirtyFaults @ 0x140538710 (MiBeginHoldingDirtyFaults.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x14064D220 (MiMapViewOfSectionExCommon.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MiApplyImageHotPatch @ 0x1408C4C0C (MiApplyImageHotPatch.c)
 *     MiInitializeImageHotPatchContext @ 0x1408C5F94 (MiInitializeImageHotPatchContext.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x1408C9AFC (MiReleaseHotPatchResources.c)
 *     MiSetProcessPebHotPatchState @ 0x1408C9D14 (MiSetProcessPebHotPatchState.c)
 *     RtlFindHotPatchBase @ 0x1409168A0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1409168D0 (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x140916B64 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409AEA74 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  char *v17; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v19; // rbx
  ULONG_PTR v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+20h] [rbp-298h]
  char v26; // [rsp+28h] [rbp-290h]
  int v27; // [rsp+30h] [rbp-288h]
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-270h]
  int v29; // [rsp+90h] [rbp-228h]
  int v30; // [rsp+98h] [rbp-220h]
  __int64 v31; // [rsp+A0h] [rbp-218h]
  __int64 v32; // [rsp+B0h] [rbp-208h]
  HANDLE SecureHandle; // [rsp+B8h] [rbp-200h] BYREF
  int v34[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  int v35; // [rsp+C8h] [rbp-1F0h]
  _DWORD v36[3]; // [rsp+CCh] [rbp-1ECh] BYREF
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+D8h] [rbp-1E0h] BYREF
  HANDLE Handle; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-1C0h]
  char v40[8]; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v41[18]; // [rsp+110h] [rbp-1A8h] BYREF
  _QWORD v42[18]; // [rsp+1A0h] [rbp-118h] BYREF
  PVOID BaseOfImage[17]; // [rsp+230h] [rbp-88h] BYREF
  __int64 v46; // [rsp+2D0h] [rbp+18h] BYREF
  va_list va; // [rsp+2D0h] [rbp+18h]
  __int64 v48; // [rsp+2D8h] [rbp+20h]
  __int64 v49; // [rsp+2E0h] [rbp+28h]
  UNICODE_STRING *v50; // [rsp+2E8h] [rbp+30h]
  __int64 v51; // [rsp+2F0h] [rbp+38h]
  __int64 v52; // [rsp+2F8h] [rbp+40h]
  __int64 v53; // [rsp+300h] [rbp+48h]
  unsigned int *v54; // [rsp+308h] [rbp+50h]
  va_list va1; // [rsp+310h] [rbp+58h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v46 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, UNICODE_STRING *);
  v51 = va_arg(va1, _QWORD);
  v52 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD);
  v54 = va_arg(va1, unsigned int *);
  v2 = a2;
  memset(BaseOfImage, 0, 0x50uLL);
  v39 = 0LL;
  v35 = 0;
  memset(v42, 0, sizeof(v42));
  memset(v41, 0, sizeof(v41));
  Handle = 0LL;
  DmaAdapter[0] = 0LL;
  *(_QWORD *)v34 = 0LL;
  SecureHandle = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  MiInitializeImageHotPatchContext(v42, 0LL);
  MiInitializeImageHotPatchContext(v41, 0LL);
  v5 = v54;
  *(_QWORD *)v54 = 0LL;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v32 = Process;
  DmaAdapter[1] = (PADAPTER_OBJECT)Process;
  if ( !*(_QWORD *)(Process + 1360) && (*(_DWORD *)(Process + 1124) & 0x4000000) != 0 )
  {
    v7 = -1073741637;
    goto LABEL_36;
  }
  if ( !v50->Length )
  {
    v8 = 0LL;
LABEL_23:
    CurrentThread = KeGetCurrentThread();
    v19 = v49;
    MiLockVad((__int64)CurrentThread, v49);
    if ( (unsigned int)MiVadDeleted(v19) )
    {
      MiUnlockVad((__int64)CurrentThread, v19);
      v7 = -1073741800;
    }
    else
    {
      MiInitializeImageHotPatchContext(v42, v19);
      MiBeginHoldingDirtyFaults(a1, &v42[11]);
      LODWORD(v42[17]) |= 2u;
      v7 = MiPrepareToHotPatchImage(v42, v3, v2);
      MiUnlockVad((__int64)CurrentThread, v19);
      if ( v7 >= 0 )
      {
        MiSetProcessPebHotPatchState(v32);
        if ( !v50->Length
          || (v36[0] = 0,
              v7 = RtlApplyHotPatch(
                     v42[9],
                     v42[1],
                     0,
                     0,
                     0LL,
                     v26,
                     v27,
                     v41[9],
                     v41[1],
                     v41[10],
                     SHIDWORD(v41[4]),
                     (__int64)v36,
                     (__int64)v3,
                     v8,
                     2,
                     0LL,
                     0LL,
                     0LL,
                     v29,
                     v30,
                     v31),
              v7 >= 0) )
        {
          v7 = MiApplyImageHotPatch((__int64)v42, (__int64)v41, a2, (__int64)v3, v8);
          LODWORD(v46) = v7;
          if ( v7 >= 0 )
          {
            if ( v4 )
            {
              v4[1] = *(_QWORD *)v34;
              *(_QWORD *)v34 = 0LL;
              v4[2] = SecureHandle;
              SecureHandle = 0LL;
              --CurrentThread->SpecialApcDisable;
              v20 = a1 + 16;
              ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
              *v4 = *(_QWORD *)(a2 + 56);
              *(_QWORD *)(a2 + 56) = v4;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v20);
              KeAbPostRelease(v20);
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v21, v22, v23);
              v4 = 0LL;
            }
            v7 = 0;
          }
        }
      }
    }
    Process = v32;
    goto LABEL_36;
  }
  v7 = MiOpenHotPatchFile(v50, 0, v53, &Handle, DmaAdapter, BaseOfImage, 0LL, v5);
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
  v39 = HotPatchInformation;
  if ( !HotPatchInformation )
  {
    v7 = -1073741701;
    LODWORD(v46) = -1073741701;
    goto LABEL_36;
  }
  v12 = *(unsigned int *)(HotPatchInformation + 4);
  v35 = v12;
  v13 = v12;
  Pool = MiAllocatePool(64, v12, 0x4E495048u);
  v3 = Pool;
  *(_QWORD *)&v36[1] = Pool;
  if ( !Pool )
  {
LABEL_12:
    v7 = -1073741670;
    goto LABEL_36;
  }
  memmove(Pool, v11, v13);
  HotPatchBase = (_DWORD *)RtlFindHotPatchBase(v3);
  if ( !(unsigned __int8)RtlValidateHotPatchBase(v16, (_DWORD)HotPatchBase, v48, v9, v25) )
    goto LABEL_8;
  v8 = (__int64)v3 + (unsigned int)HotPatchBase[6];
  if ( HotPatchBase[3] != (_DWORD)v51 || HotPatchBase[2] != (_DWORD)v52 )
  {
    v7 = -1073741735;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 88) && *(_QWORD *)v54 == *(_QWORD *)(a2 + 80) )
  {
    v7 = 255;
    goto LABEL_36;
  }
  *(_QWORD *)v40 = 0LL;
  LODWORD(ullMultiplicand) = 0;
  v7 = MiMapViewOfSectionExCommon(
         DmaAdapter[0],
         Process,
         1,
         (__int64 *)v34,
         0LL,
         v40,
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
      v17 = (char *)MiObtainReferencedSecureVad(Process ^ (unsigned __int64)SecureHandle ^ qword_140C4DD90, (int *)va);
      MiInitializeImageHotPatchContext(v41, (__int64)v17);
      MiBeginHoldingDirtyFaults(a1, &v41[11]);
      LODWORD(v41[17]) |= 2u;
      v7 = MiPrepareToHotPatchImage(v41, v3, 0LL);
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
  if ( *(_QWORD *)v34 )
    MiUnmapViewOfSection((_KPROCESS *)Process, *(unsigned __int64 *)v34, 0, 0LL);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  MiReleaseHotPatchResources(v42);
  MiReleaseHotPatchResources(v41);
  return (unsigned int)v7;
}
