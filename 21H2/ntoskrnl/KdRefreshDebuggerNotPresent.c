/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x1403CFF10
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 * Callees:
 *     KdEnterDebugger @ 0x1409B7028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B7190 (KdExitDebugger.c)
 *     KdpPrintString @ 0x1409BA7A0 (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v1; // rax
  char v2; // di
  BOOLEAN v3; // bl
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( KdPitchDebugger || !(_BYTE)KdDebuggerEnabled )
    return 1;
  v1 = -1LL;
  *((_QWORD *)&v5 + 1) = "KDTARGET: Refreshing KD connection\n";
  do
    ++v1;
  while ( aKdtargetRefres[v1] );
  LOWORD(v5) = v1;
  v2 = KdEnterDebugger(0LL, 0LL);
  KdpPrintString(&v5);
  v3 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v4) = v2;
  KdExitDebugger(v4);
  return v3;
}
