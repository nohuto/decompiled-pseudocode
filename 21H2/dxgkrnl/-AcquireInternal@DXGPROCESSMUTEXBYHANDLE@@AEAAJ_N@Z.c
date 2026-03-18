/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C015CDF0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01DF350 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C01DF640 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02D3654 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02D78DC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C03081F8 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0337AF0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0337D40 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0338100 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0338270 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03386A0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0339230 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00092A8 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C016437C (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  ACCESS_MASK v4; // edx
  struct _KAPC_STATE *v5; // rbp
  _BYTE *v6; // r14
  int v7; // ebx
  DXGPROCESS *v8; // rbx
  void *v10; // rdi
  _BYTE v11[16]; // [rsp+50h] [rbp-28h] BYREF
  DXGPROCESS *v12; // [rsp+80h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v11);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = *((_DWORD *)this + 6);
  v12 = 0LL;
  v5 = (struct _KAPC_STATE *)((char *)this + 32);
  v6 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         v4,
         a2,
         (bool *)this + 29,
         (LUID)((char *)this + 30),
         (struct _KAPC_STATE *)((char *)this + 32),
         &v12);
  if ( v7 >= 0 )
  {
    DXGPROCESS::AcquireReference(v12);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    v8 = v12;
    if ( *((struct _KTHREAD **)v12 + 16) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 3208LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!pProcess->IsMutexOwner()", 3208LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_BYTE *)this + 28) )
      WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    DXGFASTMUTEX::Acquire((DXGPROCESS *)((char *)v8 + 104));
    if ( *((_DWORD *)v8 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v8;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)v8 + 13);
      v10 = (void *)*((_QWORD *)v8 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGPROCESS::ReleaseReference(v8);
      if ( *v6 )
      {
        KeUnstackDetachProcess(v5);
        *v6 = 0;
      }
      ObfDereferenceObject(v10);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
      v7 = -1073741130;
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v7;
}
