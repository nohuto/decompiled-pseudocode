/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00E17F0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00DEAB0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0265698 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C02664B8 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0282BBC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C02858B0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0285A20 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006654 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  __int64 v3; // rcx
  DXGPROCESS *v4; // rcx
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v9 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v9 + 24) = 275LL;
    *(_QWORD *)(v9 + 32) = 4LL;
    *(_QWORD *)(v9 + 40) = this;
    *(_OWORD *)(v9 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v3 + 104), a2);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v5 = (void *)*((_QWORD *)v4 + 7);
  DXGPROCESS::ReleaseReference(v4, v6);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v5);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v7);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v8);
}
