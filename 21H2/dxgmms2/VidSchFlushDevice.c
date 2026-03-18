/*
 * XREFs of VidSchFlushDevice @ 0x1C009A0D0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0082DAC (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0083200 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009A064 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchSuspendAdapter @ 0x1C00A6140 (VidSchSuspendAdapter.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00D6F24 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00143B8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00144F0 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C00147A8 (VidSchiClearFlipDevice.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0097060 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1C009A288 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushDevice(__int64 a1, int *a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r15
  int v8; // esi
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rax
  VIDMM_DEVICE *v12; // rcx
  _DWORD *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  char v16[8]; // [rsp+28h] [rbp-99h]
  _QWORD v17[20]; // [rsp+58h] [rbp-69h] BYREF
  char v18; // [rsp+140h] [rbp+7Fh]

  v18 = a4;
  v4 = 0;
  v5 = a3;
  if ( a1 && a2 )
  {
    v8 = *a2;
    v9 = *a2;
    if ( *a2 == 13 )
    {
      *(_DWORD *)(a1 + 1704) = 1;
      VidSchSuspendResumeDevice((_KEVENT *)a1, 1, 0, 0);
      VidSchMarkDeviceAsError(a1);
      VidSchSuspendResumeDevice((_KEVENT *)a1, 0, 0, 0);
      v9 = *a2;
    }
    v10 = *(_QWORD *)(a1 + 32);
    VidSchRundownUnorderedWaiter<_VIDSCH_DEVICE>(a1, v10, v9, a4, *(union _LARGE_INTEGER *)v16);
    if ( (v8 & 1) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        v12 = *(VIDMM_DEVICE **)(v11 + 760);
        if ( v12 )
          VIDMM_DEVICE::EnsureSchedulable(v12, 0);
      }
      memset(v17, 0, sizeof(v17));
      v13 = (_DWORD *)((-(__int64)(((*a2 - 3) & 0xFFFFFFFD) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 1584);
      if ( *v13 )
      {
        LODWORD(v17[4]) |= 0x10u;
        v17[5] = v13;
        LODWORD(v17[2]) = 1;
        LOBYTE(v17[19]) = v8 == 7;
        VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)v10);
      }
      if ( *(_DWORD *)(a1 + 1572) )
      {
        memset(v17, 0, sizeof(v17));
        LODWORD(v17[4]) |= 0x10u;
        LODWORD(v17[2]) = 3;
        v17[5] = a1 + 1572;
        LOBYTE(v17[19]) = v8 == 7;
        VidSchiWaitFlushCompletion((struct _VIDSCH_GLOBAL *)v10);
      }
      if ( v8 != 5 )
      {
        if ( (_DWORD)v5 != -3 && (unsigned int)v5 >= *(_DWORD *)(v10 + 40) )
        {
          WdLogSingleEntry1(3LL, v5);
          LODWORD(v5) = -3;
        }
        VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v10, a1, 9u, v5, v18);
        VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v10 + 1728), (_DWORD *)(a1 + 1572));
      }
    }
    LOBYTE(v4) = v8 >= 11;
    result = 0LL;
    *(_DWORD *)(a1 + 1700) = v4;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}
