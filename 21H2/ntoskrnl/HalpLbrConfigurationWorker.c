/*
 * XREFs of HalpLbrConfigurationWorker @ 0x140866DBC
 * Callers:
 *     HalpLbrConfigureRecording @ 0x140866E30 (HalpLbrConfigureRecording.c)
 *     HalpLbrStartRecording @ 0x140866E70 (HalpLbrStartRecording.c)
 *     HalpLbrStopRecording @ 0x140866F20 (HalpLbrStopRecording.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 */

__int64 __fastcall HalpLbrConfigurationWorker(int a1, unsigned __int8 a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  __int64 result; // rax

  v3 = a2;
  HalpLbrSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = a1 | 0x1C4;
  if ( (a1 & 0x200) == 0 )
    v4 = a1;
  HalpLbrSelectFlags = v4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpLbrConfigureProcessor, v3);
  while ( 1 )
  {
    result = (unsigned int)HalpLbrSyncBarrier;
    if ( HalpLbrSyncBarrier <= 0 )
      break;
    _mm_pause();
  }
  return result;
}
