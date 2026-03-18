/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0
 * Callers:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C0007288 (-IsTokenManagerReady@@YAHXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C000DA20 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB90 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C000E730 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0014CC0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0015214 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgNotifyVSyncCB @ 0x1C0016490 (DxgNotifyVSyncCB.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0016730 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 CurrentProcessSessionId; // rsi
  DXGFASTMUTEX *v5; // [rsp+50h] [rbp-18h] BYREF
  char v6; // [rsp+58h] [rbp-10h]

  v1 = *((_QWORD *)this + 122);
  if ( !v1 )
    return 0LL;
  v6 = 0;
  v2 = 0LL;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v5 = (DXGFASTMUTEX *)(v1 + 88);
  if ( v1 == -88 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v5 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v5);
  v6 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v5);
  }
  else
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * CurrentProcessSessionId);
    v6 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v5);
  }
  return (struct DXGSESSIONDATA *)v2;
}
