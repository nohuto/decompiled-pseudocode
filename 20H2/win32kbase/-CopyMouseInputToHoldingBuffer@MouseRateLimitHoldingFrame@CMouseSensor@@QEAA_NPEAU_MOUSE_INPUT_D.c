/*
 * XREFs of ?CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_NPEAU_MOUSE_INPUT_DATA@@K_J@Z @ 0x1C01ACAC0
 * Callers:
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01ACF30 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseSensor::MouseRateLimitHoldingFrame::CopyMouseInputToHoldingBuffer(
        CMouseSensor::MouseRateLimitHoldingFrame *this,
        struct _MOUSE_INPUT_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r14
  unsigned __int64 v8; // rdx
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // r8
  struct _MOUSE_INPUT_DATA *v11; // r10
  struct _MOUSE_INPUT_DATA *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 result; // rax

  v5 = (unsigned int)a3;
  v8 = (unsigned int)a3 / 0x18uLL;
  if ( (unsigned int)v8 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v8, a3, a4);
  v9 = *((_WORD *)this + 204);
  v10 = 0;
  if ( a2 )
  {
    v11 = (struct _MOUSE_INPUT_DATA *)((char *)a2 + v5);
    do
    {
      v12 = (struct _MOUSE_INPUT_DATA *)((unsigned __int64)&a2[1] & -(__int64)(&a2[1] < v11));
      v13 = ++v9;
      v14 = 3 * v13;
      *(_OWORD *)((char *)this + 8 * v14) = *(_OWORD *)&a2->UnitId;
      *((_QWORD *)this + v14 + 2) = *(_QWORD *)&a2->LastY;
      v15 = a2->ButtonFlags == 0;
      a2 = v12;
      if ( !v15 )
        v10 = 1;
    }
    while ( v12 );
  }
  result = v10;
  if ( *((__int64 *)this + 1) <= 0 )
    result = 1LL;
  *((_WORD *)this + 204) = v9;
  if ( a4 - *((_QWORD *)this + 55) > *((_QWORD *)this + 2) )
    return 1LL;
  return result;
}
