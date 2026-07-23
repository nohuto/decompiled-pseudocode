/*
 * XREFs of KdPollBreakIn @ 0x140511D60
 * Callers:
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 */

char __fastcall KdPollBreakIn()
{
  __int64 v0; // rax
  char v2; // bl
  __int64 v3; // rsi
  unsigned int *v4; // rax
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // rax
  _DWORD *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int16 v10; // [rsp+40h] [rbp-8h]

  if ( KdPitchDebugger && !KdEventLoggingEnabled )
    return 0;
  v2 = 0;
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    _disable();
    LODWORD(v0) = KeGetPcr()->Prcb.Number;
    v3 = (unsigned int)v0;
    v4 = (unsigned int *)KdLogBuffer[v0];
    if ( v4 )
    {
      v5 = (unsigned __int64 *)&v4[4 * *v4 + 4];
      v6 = __rdtsc();
      *v5 = ((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6;
      v5[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v2 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock) )
    {
      v2 = (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
      KxReleaseSpinLock(&KdDebuggerLock);
    }
    v2 &= (unsigned __int8)KdDebuggerEnabled;
    KdpControlCPressed |= v2;
    v7 = (_DWORD *)KdLogBuffer[v3];
    if ( v7 )
    {
      v8 = (unsigned int)*v7;
      v9 = __rdtsc();
      *(_QWORD *)&v7[4 * v8 + 6] = v7[4 * v8 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - *(_QWORD *)&v7[4 * v8 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v8 == 254 )
        *v7 = 0;
      else
        *v7 = v8 + 1;
    }
    if ( (v10 & 0x200) != 0 )
      _enable();
  }
  return v2;
}
