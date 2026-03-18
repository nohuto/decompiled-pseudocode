/*
 * XREFs of ?FlushMouseReports@CMouseSensor@@AEAAJXZ @ 0x1C01B4D18
 * Callers:
 *     ?OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ @ 0x1C01B4F70 (-OnMouseReportRateLimitingTimerNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01B5010 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     RIMRefreshDeviceAttributes @ 0x1C0161190 (RIMRefreshDeviceAttributes.c)
 *     ?HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z @ 0x1C01B4DB8 (-HandleMouseReportRateLimitingTimer@MouseRateLimitHoldingFrame@CMouseSensor@@AEAAJ_NK@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 */

__int64 __fastcall CMouseSensor::FlushMouseReports(CMouseSensor *this)
{
  __int64 result; // rax
  char v3; // [rsp+20h] [rbp-18h]

  v3 = *((_BYTE *)this + 1704);
  if ( (unsigned int)CMouseProcessor::ProcessInput(
                       *((_QWORD *)this + 218),
                       *((_QWORD *)this + 212),
                       (char *)this + 1304,
                       24 * (unsigned int)*((unsigned __int16 *)this + 844),
                       v3) == 1 )
    RIMRefreshDeviceAttributes(*((char **)this + 1), *(char **)(*((_QWORD *)this + 212) + 16LL));
  if ( *((__int64 *)this + 161) > 0 )
    CMouseSensor::MouseRateLimitHoldingFrame::HandleMouseReportRateLimitingTimer(
      (CMouseSensor *)((char *)this + 1280),
      1,
      0);
  *((_BYTE *)this + 1728) = 0;
  result = 0LL;
  *((_WORD *)this + 844) = 0;
  *((_QWORD *)this + 214) = 0LL;
  return result;
}
