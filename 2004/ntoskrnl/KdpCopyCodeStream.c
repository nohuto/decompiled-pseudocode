/*
 * XREFs of KdpCopyCodeStream @ 0x1409B6A9C
 * Callers:
 *     KdpAddBreakpoint @ 0x1409B70B0 (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x1409B7334 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x1409B7398 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x1409B7450 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x1409B7520 (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x1409B75E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1409B6B9C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(PVOID BaseAddress, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(BaseAddress, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(BaseAddress, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}
