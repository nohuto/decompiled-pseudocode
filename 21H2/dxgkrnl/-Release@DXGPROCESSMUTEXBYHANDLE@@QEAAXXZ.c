/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C01641F0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C01DF350 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0307188 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C03081F8 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0334C04 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0338100 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0338270 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009278 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  struct _KTHREAD **v2; // rcx
  DXGPROCESS *v3; // rcx
  void *v4; // rdi
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
  v2 = (struct _KTHREAD **)(*((_QWORD *)this + 2) + 104LL);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(v2);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v3 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v4 = (void *)*((_QWORD *)v3 + 7);
  DXGPROCESS::ReleaseReference(v3);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v4);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
