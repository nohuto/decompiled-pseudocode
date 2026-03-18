/*
 * XREFs of ?GetNextChildPointerId@CTouchProcessor@@AEAAGG@Z @ 0x1C01967A0
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0191D4C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextChildPointerId(struct _KTHREAD **this, unsigned __int16 a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !a2 )
  {
    a2 = *((_WORD *)this + 88);
    v4 = a2;
    if ( !a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      v4 = *((_WORD *)this + 88);
    }
    v5 = v4 + 1;
    *((_WORD *)this + 88) = v5;
    if ( v5 < 0x4000u )
      *((_WORD *)this + 88) = 0x4000;
  }
  return a2;
}
