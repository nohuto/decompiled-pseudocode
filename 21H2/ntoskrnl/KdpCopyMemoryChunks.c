/*
 * XREFs of KdpCopyMemoryChunks @ 0x140A6F124
 * Callers:
 *     KdpSetCommonState @ 0x1402DAB78 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     KdpCreateRemoteFile @ 0x140A6F444 (KdpCreateRemoteFile.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140A6FA44 (KdpReportLoadSymbolsStateChange.c)
 *     KdpSendWaitContinue @ 0x140A6FB80 (KdpSendWaitContinue.c)
 *     KdpReadVirtualMemory @ 0x140A6FEC4 (KdpReadVirtualMemory.c)
 *     KdpSysReadControlSpace @ 0x140A70AE0 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140A70C44 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140A7131C (KdpPrintString.c)
 *     KdpFillMemory @ 0x140A72DF0 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140A73078 (KdpReadPhysicalMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140A7328C (KdpReportCommandStringStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140A73514 (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140A73D80 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140A73F44 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140A73FF0 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140A74644 (KdpCopyCodeStream.c)
 *     KdpPromptString @ 0x140A74D24 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x14028F978 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(char *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v13; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v13 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v13 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
