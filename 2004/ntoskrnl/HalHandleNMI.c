/*
 * XREFs of HalHandleNMI @ 0x1404B8860
 * Callers:
 *     KiProcessNMI @ 0x14050D600 (KiProcessNMI.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     HalpCheckAndReportGhes @ 0x1404CAA18 (HalpCheckAndReportGhes.c)
 *     WheaReportHwError @ 0x1405B5B70 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405B6524 (WheapGetErrorSource.c)
 */

unsigned __int8 HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  unsigned __int8 result; // al
  char v3; // bl
  __int64 ErrorSource; // rax

  dword_140C50758 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v0 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v1 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes(v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &HalpGenericNmiErrorSourceListHead );
  if ( v1 != 1 )
  {
LABEL_7:
    result = __inbyte(0x61u);
    v3 = result;
    if ( dword_140C50754 == 1 )
    {
      memset(&dword_140C50760, 0, 0x5CuLL);
      dword_140C50764 = 3;
      dword_140C50770 = 3;
      dword_140C5077C = 3;
      dword_140C50760 = 1095059543;
      dword_140C507B8 = ((unsigned int)dword_140C5076C >> 2) & 1;
      dword_140C50768 = 92;
      dword_140C50774 = 1;
      dword_140C50778 = HalpNmiInfo;
      xmmword_140C50780 = (__int128)NMI_NOTIFY_TYPE_GUID;
      dword_140C50798 = 4;
      dword_140C507A0 = 80;
      dword_140C507A4 = 12;
      byte_140C507B0 = v3;
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
      PshedRetrieveErrorInfo(
        &dword_140C50760,
        (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
      result = WheaReportHwError(&dword_140C50760);
    }
  }
  HalpProcessorInNmiHandler = 1280;
  return result;
}
