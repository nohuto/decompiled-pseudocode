/*
 * XREFs of MiLoadHotPatch @ 0x1408CAD30
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x14075CA08 (MiApplyRequiredDriverHotPatches.c)
 *     NtManageHotPatch @ 0x1408CEEA0 (NtManageHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A9332C (MmRegisterHotPatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     VslApplyHotPatch @ 0x1404FBF40 (VslApplyHotPatch.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     VslDetermineHotPatchType @ 0x14088F738 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x1408C8E34 (MiAllocateHotPatchRecord.c)
 *     MiAllocateSecureImageActivePatch @ 0x1408C8EB8 (MiAllocateSecureImageActivePatch.c)
 *     MiApplyHotPatchToDriver @ 0x1408C9274 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchAllProcesses @ 0x1408CA3D8 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1408CAB00 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CAC54 (MiInsertSecureImageActivePatch.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408CDD50 (MiPromoteControlAreaToStrongCode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatch(const void **SourceString, int a2, int *a3, unsigned int *a4)
{
  int *v5; // r15
  __int64 v7; // r13
  _QWORD *HotPatchRecord; // r14
  int v10; // eax
  int v11; // ebx
  NTSTATUS v12; // edi
  unsigned int *v13; // rdi
  int v14; // eax
  int v15; // r13d
  int v16; // esi
  char v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r10
  UNICODE_STRING *SecureImageActivePatch; // rsi
  NTSTATUS v22; // eax
  int v23; // r15d
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // [rsp+48h] [rbp-39h] BYREF
  int v28; // [rsp+50h] [rbp-31h] BYREF
  PVOID Object; // [rsp+58h] [rbp-29h] BYREF
  struct _KTHREAD *Lock; // [rsp+60h] [rbp-21h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int128 v33; // [rsp+78h] [rbp-9h] BYREF
  int v34; // [rsp+88h] [rbp+7h]
  __int64 v35; // [rsp+90h] [rbp+Fh] BYREF
  PADAPTER_OBJECT v36; // [rsp+98h] [rbp+17h]
  __int64 v37; // [rsp+A0h] [rbp+1Fh]

  v37 = 0LL;
  v5 = a3;
  v28 = 0;
  v35 = 0LL;
  v7 = 0LL;
  v34 = 0;
  v33 = 0LL;
  if ( !dword_140C4CCF0 )
    return 3221225485LL;
  Lock = 0LL;
  HotPatchRecord = 0LL;
  DmaAdapter = 0LL;
  v36 = 0LL;
  Handle = 0LL;
  v27 = 0LL;
  LODWORD(Object) = 1;
  v10 = MiOpenHotPatchFile(
          (_DWORD)SourceString,
          1,
          0,
          (unsigned int)&Handle,
          (__int64)&DmaAdapter,
          0LL,
          (__int64)&v27,
          0LL);
  v11 = v27;
  v12 = v10;
  if ( v10 < 0 )
    goto LABEL_32;
  v13 = a4;
  v14 = HIDWORD(v27);
  *v5 = v27;
  *a4 = v14;
  if ( a2 )
  {
    HotPatchRecord = MiAllocateHotPatchRecord(*v5, v14, SourceString);
    if ( !HotPatchRecord )
    {
      v15 = HIDWORD(v27);
      v12 = -1073741670;
LABEL_34:
      MiLogHotPatchOperationStatus(v11, v15, (_DWORD)SourceString, v12, 1);
      SecureImageActivePatch = 0LL;
      goto LABEL_35;
    }
  }
  Lock = MmAcquireLoadLock();
  if ( HotPatchRecord )
    MiInsertHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, HotPatchRecord, 0);
  v16 = 1073741879;
  if ( (MiFlags & 0x8000) == 0 )
  {
    v15 = HIDWORD(v27);
    goto LABEL_30;
  }
  v12 = VslDetermineHotPatchType(*v5, *a4, &v28);
  if ( v12 < 0 )
    goto LABEL_32;
  v17 = v28;
  if ( (v28 & 1) != 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v36 = (PADAPTER_OBJECT)Object;
    if ( v12 >= 0 )
    {
      v18 = MiSectionControlArea((__int64)DmaAdapter);
      v12 = MiPromoteControlAreaToStrongCode(v18, v20, v19, &v35);
      if ( v12 >= 0 )
      {
        v7 = v35;
        goto LABEL_15;
      }
    }
LABEL_32:
    v15 = HIDWORD(v27);
    goto LABEL_33;
  }
LABEL_15:
  LODWORD(Object) = 0;
  if ( (v17 & 2) != 0 )
  {
    SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)SourceString);
    if ( SecureImageActivePatch )
    {
      v22 = VslApplyHotPatch(v7, (__int64)DmaAdapter, 0LL, 0LL, 0LL, 0LL, (__int64)&v33);
      v23 = v34;
      v12 = v22;
    }
    else
    {
      v23 = v37;
      v12 = -1073741670;
    }
    v15 = HIDWORD(v27);
    MiLogHotPatchOperationStatus(v11, HIDWORD(v27), (_DWORD)SourceString, v12, 2);
    if ( v12 < 0 )
    {
LABEL_35:
      if ( Lock )
        MmReleaseLoadLock((__int64)Lock);
      goto LABEL_37;
    }
    *(_OWORD *)&SecureImageActivePatch[1].Buffer = v33;
    LODWORD(SecureImageActivePatch[2].Buffer) = v23;
    MiInsertSecureImageActivePatch(SecureImageActivePatch);
    v16 = v12;
  }
  else
  {
    v15 = HIDWORD(v27);
  }
  v13 = a4;
  v5 = a3;
  v24 = MiApplyHotPatchToDriver(*a3, *a4, (__int64)SourceString, (__int64)Handle);
  if ( v24 == -1073741515 )
  {
    v24 = 1073741879;
  }
  else if ( v24 < 0 )
  {
    v16 = v24;
  }
  if ( v16 == 1073741879 )
    v16 = v24;
LABEL_30:
  MmReleaseLoadLock((__int64)Lock);
  v25 = *v13;
  v26 = *v5;
  Lock = 0LL;
  MiHotPatchAllProcesses(v26, v25);
  v12 = v16;
  SecureImageActivePatch = 0LL;
  if ( (_DWORD)Object )
  {
LABEL_33:
    SecureImageActivePatch = 0LL;
    if ( v12 == 1073741879 )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_37:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v36 )
    HalPutDmaAdapter(v36);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)v12;
}
