/*
 * XREFs of _RtlInitBarrier@12 @ 0x4B3502F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitBarrier(PRTL_BARRIER Barrier, ULONG TotalThreads, ULONG SpinCount)
{
  _DWORD *v3; // eax
  NTSTATUS v4; // edx

  v3 = (_DWORD *)(((unsigned int)&Barrier->Reserved2 + 3) & 0xFFFFFFF8);
  if ( !v3 )
    return -1073741811;
  v4 = 0;
  v3[2] = 0;
  v3[3] = TotalThreads;
  *v3 = 0;
  v3[1] = 0;
  return v4;
}
