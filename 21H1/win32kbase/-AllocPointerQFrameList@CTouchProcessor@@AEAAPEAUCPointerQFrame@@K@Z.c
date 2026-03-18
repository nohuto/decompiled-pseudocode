/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C018E218
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  _BYTE *v7; // rbx

  v2 = a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(_DWORD)v2 )
    return 0LL;
  v3 = 160 * v2;
  v4 = v2;
  if ( (unsigned __int64)(160 * v2) > 0xFFFFFFFF || !v3 )
    return 0LL;
  v5 = (char *)Win32AllocPoolZInit(v3, 0x51707355u);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 16;
    do
    {
      *((_DWORD *)v7 - 4) = -1;
      memset(v7, 0, 0x70uLL);
      v7[112] = 0;
      v7 += 160;
      --v4;
    }
    while ( v4 );
  }
  return (struct CPointerQFrame *)v6;
}
