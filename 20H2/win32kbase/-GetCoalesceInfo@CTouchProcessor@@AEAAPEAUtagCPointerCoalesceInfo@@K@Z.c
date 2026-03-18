/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C018E2A4
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C0187A6C (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C0009DA4 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01865AC (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax

  v2 = a2;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  *((_DWORD *)this + 53) = 0;
  v8 = (unsigned __int64)(this + 26);
  if ( *((_DWORD *)this + 52) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v2 )
    {
      v9 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v9 )
        {
          this[27] = (struct _KTHREAD *)Win32AllocPoolZInit(v9, 0x70647355u);
          *(_DWORD *)v8 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v8 & -(__int64)(this[27] != 0LL));
}
