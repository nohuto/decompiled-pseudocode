/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C0196868
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0191D4C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v2 = *((_WORD *)this + 88);
  v3 = v2;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v3 = *((_WORD *)this + 88);
  }
  v4 = v3 + 1;
  *((_WORD *)this + 88) = v4;
  if ( v4 < 2u )
    *((_WORD *)this + 88) = 2;
  return v2;
}
