/*
 * XREFs of MiUnloadHotPatch @ 0x1408CE928
 * Callers:
 *     NtManageHotPatch @ 0x1408CEEA0 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     memset @ 0x140414300 (memset.c)
 *     VslRevertHotPatch @ 0x1404FD6AC (VslRevertHotPatch.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x1408C9274 (MiApplyHotPatchToDriver.c)
 *     MiCompareHotPatchNodes @ 0x1408C9990 (MiCompareHotPatchNodes.c)
 *     MiDeleteHotPatchRecord @ 0x1408C9B5C (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x1408CA3D8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatch(unsigned int a1, unsigned int a2)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *Lock; // r12
  int v6; // edi
  unsigned __int64 *v7; // rbx
  int v8; // eax
  NTSTATUS v9; // r15d
  int v10; // eax
  _DWORD v12[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = 0;
  MiDeleteHotPatchRecord((unsigned __int64 *)&MiGlobalHotPatchList, 0LL, a1, a2);
  if ( (MiFlags & 0x8000) != 0 )
  {
    v7 = (unsigned __int64 *)MiSecureImageActivePatches;
    v12[6] = a1;
    v12[7] = a2;
    if ( MiSecureImageActivePatches )
    {
      do
      {
        v8 = MiCompareHotPatchNodes((__int64)v12, (__int64)v7);
        if ( v8 >= 0 )
        {
          if ( v8 <= 0 )
            break;
          v7 = (unsigned __int64 *)v7[1];
        }
        else
        {
          v7 = (unsigned __int64 *)*v7;
        }
      }
      while ( v7 );
      if ( v7 )
      {
        v9 = VslRevertHotPatch(0LL, a1, a2);
        MiLogHotPatchOperationStatus(a1, a2, 0LL, v9, 2);
        if ( v9 < 0 )
        {
          v6 = v9;
        }
        else
        {
          RtlAvlRemoveNode((unsigned __int64 *)&MiSecureImageActivePatches, v7);
          v4 = v7;
        }
      }
    }
    v10 = MiApplyHotPatchToDriver(a1, a2, 0LL, 0LL);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741515 && v6 >= 0 )
      v6 = v10;
  }
  MmReleaseLoadLock((__int64)Lock);
  MiHotPatchAllProcesses(a1, a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
