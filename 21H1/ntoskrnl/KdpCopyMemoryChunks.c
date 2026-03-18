/*
 * XREFs of KdpCopyMemoryChunks @ 0x1409B6B9C
 * Callers:
 *     KdpSetCommonState @ 0x14050B92C (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1408B5740 (KdSystemDebugControl.c)
 *     KdpCreateRemoteFile @ 0x1409B3BD0 (KdpCreateRemoteFile.c)
 *     KdpFillMemory @ 0x1409B4430 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x1409B4870 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x1409B4A84 (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x1409B4B48 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1409B4DD0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x1409B4F08 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x1409B54F4 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x1409B6090 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1409B62E0 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x1409B6380 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x1409B6A9C (KdpCopyCodeStream.c)
 *     KdpSysReadControlSpace @ 0x1409B6F1C (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409B7008 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x1409B77A0 (KdpPrintString.c)
 *     KdpPromptString @ 0x1409B7898 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140540F7C (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(
        char *BaseAddress,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v12; // edx

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
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)BaseAddress) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(BaseAddress, a2, i, i, a5) < 0 )
      break;
    BaseAddress += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
