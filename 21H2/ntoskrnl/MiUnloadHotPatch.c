/*
 * XREFs of MiUnloadHotPatch @ 0x140977B70
 * Callers:
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslRevertHotPatch @ 0x14054F4CC (VslRevertHotPatch.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x140971650 (MiApplyHotPatchToDriver.c)
 *     MiCompareHotPatchNodes @ 0x140972C58 (MiCompareHotPatchNodes.c)
 *     MiDeleteHotPatchRecord @ 0x140972E78 (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchOperationStatus @ 0x140974FBC (MiLogHotPatchOperationStatus.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatch(unsigned int a1, unsigned int a2)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *Lock; // r12
  int v6; // edi
  unsigned __int64 *v7; // rbx
  int v8; // eax
  signed int v9; // r15d
  int v10; // eax
  _DWORD v12[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = 0;
  MiDeleteHotPatchRecord((unsigned __int64 *)&qword_140C533B0, 0LL, a1, a2);
  if ( (MiFlags & 0x4000) != 0 )
  {
    v7 = (unsigned __int64 *)qword_140C533B8;
    v12[6] = a1;
    v12[7] = a2;
    if ( qword_140C533B8 )
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
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140C533B8, v7);
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
