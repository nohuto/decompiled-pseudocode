/*
 * XREFs of MmRegisterHotPatch @ 0x140A9332C
 * Callers:
 *     IopLoadBootHotPatches @ 0x140A74B20 (IopLoadBootHotPatches.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     VslDetermineHotPatchType @ 0x14088F738 (VslDetermineHotPatchType.c)
 *     MiAllocateHotPatchRecord @ 0x1408C8E34 (MiAllocateHotPatchRecord.c)
 *     MiApplyHotPatchToDriver @ 0x1408C9274 (MiApplyHotPatchToDriver.c)
 *     MiInsertHotPatchRecord @ 0x1408CAB00 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 */

__int64 __fastcall MmRegisterHotPatch(UNICODE_STRING *SourceString, unsigned int a2, unsigned int a3)
{
  int v3; // edi
  int v4; // esi
  int v6; // r15d
  NTSTATUS v7; // ebx
  struct _KTHREAD *Lock; // r12
  _QWORD *HotPatchRecord; // rax
  int v10; // eax
  unsigned int v12; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+50h] BYREF
  int v14; // [rsp+88h] [rbp+58h] BYREF

  v13 = a3;
  v12 = a2;
  v14 = 0;
  v3 = a3;
  v4 = a2;
  v6 = 1;
  if ( (MiFlags & 0x8000) != 0 )
  {
    v7 = VslDetermineHotPatchType(a2, a3, &v14);
    if ( v7 < 0 )
    {
LABEL_12:
      MiLogHotPatchOperationStatus(v4, v3, SourceString, v7, 1);
      return (unsigned int)v7;
    }
    if ( (v14 & 2) != 0 )
      return (unsigned int)MiLoadHotPatch((const void **)SourceString, 1, (int *)&v12, &v13);
  }
  Lock = MmAcquireLoadLock();
  HotPatchRecord = MiAllocateHotPatchRecord(v4, v3, (const void **)SourceString);
  if ( HotPatchRecord )
  {
    MiInsertHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, HotPatchRecord, 0);
    v6 = 0;
    if ( (MiFlags & 0x8000) == 0
      || (int)MiApplyHotPatchToDriver(v4, v3, (__int64)SourceString, 0LL) < 0
      || (v10 = MiLoadHotPatch((const void **)SourceString, 0, (int *)&v12, &v13), v3 = v13,
                                                                                   v7 = v10,
                                                                                   v4 = v12,
                                                                                   v10 >= 0) )
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  MmReleaseLoadLock((__int64)Lock);
  if ( v6 )
    goto LABEL_12;
  return (unsigned int)v7;
}
