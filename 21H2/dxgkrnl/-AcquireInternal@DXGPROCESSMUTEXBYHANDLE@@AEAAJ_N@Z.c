/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E3130
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00DF2D0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00E0CF0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C00E2E80 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0171B50 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0225608 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C0228F4C (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02668B8 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0267748 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0286600 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0286880 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0286C90 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0286E00 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0287220 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0287DF0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00069B4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00E3224 (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  ACCESS_MASK v4; // edx
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r14
  __int64 v7; // rdx
  int v8; // ebx
  DXGPROCESS *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  DXGPROCESS *v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  _BYTE v20[16]; // [rsp+40h] [rbp-28h] BYREF
  DXGPROCESS *v21; // [rsp+70h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v4 = *((_DWORD *)this + 6);
  v21 = 0LL;
  v5 = (struct _KAPC_STATE *)((char *)this + 32);
  v6 = (char *)this + 29;
  v8 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         v4,
         a2,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         &v21);
  if ( v8 >= 0 )
  {
    v9 = v21;
    DXGPROCESS::AcquireReference(v21, v7);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v10);
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)v9 + 13) + 16LL) == CurrentThread )
    {
      v15 = WdLogNewEntry5_WdAssertion(CurrentThread, v11);
      *(_QWORD *)(v15 + 24) = 3103LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v16 = WdLogNewEntry5_WdCriticalError(CurrentThread, v11);
      *(_QWORD *)(v16 + 24) = 275LL;
      *(_QWORD *)(v16 + 32) = 4LL;
      *(_QWORD *)(v16 + 40) = this;
      *(_OWORD *)(v16 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v9 + 13));
    v13 = v21;
    if ( *((_DWORD *)v21 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v21;
      v8 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v9 + 13), v7);
      v17 = (void *)*((_QWORD *)v13 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGPROCESS::ReleaseReference(v13, v18);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v17);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v19);
      v8 = -1073741130;
    }
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v7);
  return (unsigned int)v8;
}
