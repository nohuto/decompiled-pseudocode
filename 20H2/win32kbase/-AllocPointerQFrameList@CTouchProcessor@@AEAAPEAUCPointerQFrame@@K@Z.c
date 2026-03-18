/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0185FD8
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rsi
  char *v7; // rax
  char *v8; // rdi
  _BYTE *v9; // rbx

  v4 = (unsigned int)a2;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(_DWORD)v4 )
    return 0LL;
  v5 = 160 * v4;
  v6 = v4;
  if ( (unsigned __int64)(160 * v4) > 0xFFFFFFFF || !v5 )
    return 0LL;
  v7 = (char *)Win32AllocPoolZInit(v5, 0x51707355u);
  v8 = v7;
  if ( v7 )
  {
    v9 = v7 + 16;
    do
    {
      *((_DWORD *)v9 - 4) = -1;
      memset(v9, 0, 0x70uLL);
      v9[112] = 0;
      v9 += 160;
      --v6;
    }
    while ( v6 );
  }
  return (struct CPointerQFrame *)v8;
}
