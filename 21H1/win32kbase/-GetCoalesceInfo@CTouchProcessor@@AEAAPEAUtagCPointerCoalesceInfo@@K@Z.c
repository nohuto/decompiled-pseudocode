/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01964C4
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018FCAC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00221B4 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018E7EC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax

  v2 = a2;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  *((_DWORD *)this + 53) = 0;
  v5 = (unsigned __int64)(this + 26);
  if ( *((_DWORD *)this + 52) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v2 )
    {
      v6 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v6 )
        {
          this[27] = (struct _KTHREAD *)Win32AllocPoolZInit(v6, 0x70647355u);
          *(_DWORD *)v5 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v5 & -(__int64)(this[27] != 0LL));
}
