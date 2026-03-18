/*
 * XREFs of ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C018E1C4
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx

  v2 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( (_DWORD)v2 && (v3 = 480 * v2, (unsigned __int64)(480 * v2) <= 0xFFFFFFFF) && v3 )
    return (struct CPointerInfoNode *)Win32AllocPoolZInit(v3, 0x65707355u);
  else
    return 0LL;
}
