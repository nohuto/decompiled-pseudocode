/*
 * XREFs of ?GetNextPointerId@CTouchProcessor@@AEAAGXZ @ 0x1C018E648
 * Callers:
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C0189B24 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetNextPointerId(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *((_WORD *)this + 88);
  v6 = v5;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    v6 = *((_WORD *)this + 88);
  }
  v7 = v6 + 1;
  *((_WORD *)this + 88) = v7;
  if ( v7 < 2u )
    *((_WORD *)this + 88) = 2;
  return v5;
}
