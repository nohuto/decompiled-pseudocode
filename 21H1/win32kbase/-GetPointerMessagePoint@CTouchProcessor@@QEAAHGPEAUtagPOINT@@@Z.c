/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C0198A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019E870 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29B0 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(
        CTouchProcessor *this,
        unsigned __int16 a2,
        struct tagPOINT *a3)
{
  unsigned __int16 v4; // si
  struct tagTHREADINPUTPOINTERLIST *v6; // rdx
  unsigned int v7; // edi
  unsigned __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v9; // rdx
  unsigned __int64 v10; // rsi
  struct tagPOINT *v11; // rax
  _BYTE v13[40]; // [rsp+30h] [rbp-48h] BYREF
  CInpLockGuard *v14; // [rsp+58h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      107,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v13,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v6 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1072);
  *a3 = 0LL;
  v7 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(this, v6, v4, 0LL, 0LL, 0LL);
  v10 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v9 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(ThreadPointerData + 28));
    if ( v9 )
    {
      v11 = (struct tagPOINT *)(*((_QWORD *)v9 + 17) + 480LL * *(unsigned int *)(v10 + 32));
      if ( v11 )
      {
        v7 = 1;
        *a3 = v11[25];
      }
      CTouchProcessor::UnreferenceFrame(this, v9);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v9,
      7,
      108,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuard::UnLock((PERESOURCE *)v14, (struct CRefUnRefPointerMsgId *)v13);
  return v7;
}
