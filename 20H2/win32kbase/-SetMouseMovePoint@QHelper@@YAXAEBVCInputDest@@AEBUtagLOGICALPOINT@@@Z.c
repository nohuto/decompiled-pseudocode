/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0033690
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033488 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C003374C (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0033CBC (QHelper--_anonymous_namespace_--GetQ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 v5; // rdi
  unsigned int DpiAwarenessContext; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  char v11; // al
  unsigned int v12; // eax

  v5 = QHelper::_anonymous_namespace_::GetQ(this, a2);
  if ( v5 )
  {
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext(this);
    v10 = 511LL;
    if ( (((unsigned __int16)((unsigned int)v8 >> 8) ^ (unsigned __int16)(DpiAwarenessContext >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v11 = CInputDest::GetDpiAwarenessContext(this);
    v7 = 1LL;
    v9 = 0x20000000LL;
    if ( (v11 & 0xF) == 2 && (v12 = CInputDest::GetDpiAwarenessContext(this), (v12 & (unsigned int)v9) != 0) )
      v10 = (unsigned int)v7;
    else
      v10 = 0LL;
    if ( (v8 & 0xF) != 2 || ((unsigned int)v8 & (unsigned int)v9) == 0 )
      v7 = 0LL;
    if ( (_DWORD)v10 != (_DWORD)v7 )
LABEL_14:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v8, v9);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 192) = *((_DWORD *)a2 + 2);
  }
}
