/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C019B938
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01A3ED8 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     ApiSetGetPenHoldTime @ 0x1C01D1760 (ApiSetGetPenHoldTime.c)
 *     ApiSetGetTouchHoldTime @ 0x1C01D1838 (ApiSetGetTouchHoldTime.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

union _LARGE_INTEGER __fastcall CTouchProcessor::PassedHoldTime(struct _KTHREAD **this, int a2, __int64 a3, __int64 a4)
{
  union _LARGE_INTEGER result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  struct _KTHREAD *v11; // rsi
  bool v12; // cf
  bool v13; // zf

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  result = gliQpcFreq;
  v9 = 0;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (unsigned __int64)(gliQpcFreq.QuadPart - 1) > 0x7FFFFFFD )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    if ( !this[23] )
      this[23] = (struct _KTHREAD *)(gliQpcFreq.QuadPart * (unsigned int)ApiSetGetPenHoldTime() / 1000);
    v10 = (unsigned __int64)this[24];
    if ( !v10 )
    {
      v10 = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetTouchHoldTime() / 1000;
      this[24] = (struct _KTHREAD *)v10;
    }
    v11 = (struct _KTHREAD *)(a4 - a3);
    if ( a2 == 3 )
    {
      v12 = v11 < this[23];
      v13 = v11 == this[23];
    }
    else
    {
      v12 = (unsigned __int64)v11 < v10;
      v13 = v11 == (struct _KTHREAD *)v10;
    }
    LOBYTE(v9) = !v12 && !v13;
    return (union _LARGE_INTEGER)v9;
  }
  return result;
}
