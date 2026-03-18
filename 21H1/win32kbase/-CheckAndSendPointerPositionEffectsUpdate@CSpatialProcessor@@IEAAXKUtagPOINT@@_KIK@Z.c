/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C0045728
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C006E240 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A35A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C004583C (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C00641A8 (ApiSetAddMagnificationOutputTransform.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  CInputThread *v6; // rsi
  int v11; // edi
  int v12; // eax
  __int64 v14; // rcx
  _QWORD v15[38]; // [rsp+20h] [rbp-148h] BYREF

  v6 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = *((_DWORD *)v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 == 2 )
  {
    v12 = *((_DWORD *)this + 8);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 9) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      memset(v15, 0, sizeof(v15));
      LODWORD(v15[3]) = a6;
      LODWORD(v15[0]) = 1;
      LODWORD(v15[1]) = a2;
      *(struct tagPOINT *)((char *)&v15[1] + 4) = a3;
      HIDWORD(v15[2]) = a5;
      ApiSetAddMagnificationOutputTransform((char *)&v15[1] + 4);
      InputExtensibilityCallout::CoreMsgSendMessage(v14, 5LL, v15, 304LL, v15[0], v15[1]);
    }
  }
}
