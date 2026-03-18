/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00699C8
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0069A84 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 v5; // rdi
  unsigned int DpiAwarenessContext; // eax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char v9; // al
  int v10; // r8d
  unsigned int v11; // edx
  int v12; // r9d
  unsigned int v13; // eax

  v5 = QHelper::_anonymous_namespace_::GetQ((__int64)this);
  if ( v5 )
  {
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext(this);
    v8 = 511LL;
    if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(DpiAwarenessContext >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v9 = CInputDest::GetDpiAwarenessContext(this);
    v11 = 1;
    v12 = 0x20000000;
    if ( (v9 & 0xF) == 2 && (v13 = CInputDest::GetDpiAwarenessContext(this), (v13 & v12) != 0) )
      v8 = v11;
    else
      v8 = 0LL;
    if ( (v10 & 0xF) != 2 || (v10 & v12) == 0 )
      v11 = 0;
    if ( (_DWORD)v8 != v11 )
LABEL_14:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 192) = *((_DWORD *)a2 + 2);
  }
}
