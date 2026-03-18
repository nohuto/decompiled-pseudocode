/*
 * XREFs of ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C0185F84
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx

  v4 = (unsigned int)a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( (_DWORD)v4 && (v5 = 480 * v4, (unsigned __int64)(480 * v4) <= 0xFFFFFFFF) && v5 )
    return (struct CPointerInfoNode *)Win32AllocPoolZInit(v5, 0x65707355u);
  else
    return 0LL;
}
