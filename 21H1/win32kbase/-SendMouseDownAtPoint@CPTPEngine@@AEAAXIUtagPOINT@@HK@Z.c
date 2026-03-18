/*
 * XREFs of ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C01CAAB0
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01C64F0 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01C76D4 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01CA5E0 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C01CAB50 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C01CADDC (-SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z.c)
 */

void __fastcall CPTPEngine::SendMouseDownAtPoint(struct tagPOINT *this, int a2, struct tagPOINT a3, LONG a4, LONG a5)
{
  int v9; // edi
  __int64 v10; // rdx

  if ( a2 == 2 )
  {
    v9 = 4;
  }
  else
  {
    v9 = 16;
    if ( a2 != 8 )
      return;
  }
  v10 = 1LL;
  if ( a2 != 2 )
    v10 = 3LL;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CBasePTPEngine::SendMouseOutput)(this, v10, a3);
  this[477].y = a5;
  this[476].x = 1;
  this[476].y = a4;
  this[477].x = v9;
  this[478] = a3;
  CBasePTPEngine::SendTimerOutput(this, 0LL);
}
