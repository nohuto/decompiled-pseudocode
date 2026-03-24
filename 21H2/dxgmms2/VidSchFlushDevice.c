/*
 * XREFs of VidSchFlushDevice @ 0x1C0081F00
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C007E180 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007F7D0 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 *     VidSchTerminateDevice @ 0x1C0081B10 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0081EA0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0089CA8 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchSuspendAdapter @ 0x1C008B2B0 (VidSchSuspendAdapter.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00AFC2C (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011A18 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0011C5C (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C0011C98 (VidSchiClearFlipDevice.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012580 (VidSchSuspendResumeDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015CB0 (VidSchMarkDeviceAsError.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00803E0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C008207C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v7; // esi
  int v8; // r8d
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  VIDMM_DEVICE *v12; // rcx
  _DWORD *v13; // r14
  __int64 result; // rax
  __int64 v15; // rax
  union _LARGE_INTEGER v16; // [rsp+28h] [rbp-69h]
  _QWORD v17[20]; // [rsp+38h] [rbp-59h] BYREF

  v4 = 0;
  if ( a1 && a2 )
  {
    v7 = *a2;
    v8 = *a2;
    if ( *a2 == 11 )
    {
      *(_DWORD *)(a1 + 1696) = 1;
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1, 1, 0, 0);
      VidSchMarkDeviceAsError(a1);
      VidSchSuspendResumeDevice((struct _VIDSCH_DEVICE *)a1, 0, 0, 0);
      v8 = *a2;
    }
    v9 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v9, v8, a4, v16);
    if ( (v7 & 1) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        v12 = *(VIDMM_DEVICE **)(v11 + 760);
        if ( v12 )
          VIDMM_DEVICE::EnsureSchedulable(v12, 0LL, v10);
      }
      v13 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1584);
      if ( *v13 )
      {
        memset(v17, 0, sizeof(v17));
        LODWORD(v17[4]) |= 0x10u;
        LODWORD(v17[2]) = 1;
        v17[5] = v13;
        VidSchiWaitFlushCompletion(v9, v17, 24LL);
      }
      if ( *(_DWORD *)(a1 + 1572) )
      {
        memset(v17, 0, sizeof(v17));
        LODWORD(v17[4]) |= 0x10u;
        LODWORD(v17[2]) = 3;
        v17[5] = a1 + 1572;
        VidSchiWaitFlushCompletion(v9, v17, 23LL);
      }
      if ( v7 != 5 )
      {
        VidSchiClearFlipDevice((struct _KEVENT *)v9, a1, 9);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v9 + 1712), (_DWORD *)(a1 + 1572));
      }
    }
    LOBYTE(v4) = v7 >= 9;
    result = 0LL;
    *(_DWORD *)(a1 + 1692) = v4;
  }
  else
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  return result;
}
