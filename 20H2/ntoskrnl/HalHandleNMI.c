/*
 * XREFs of HalHandleNMI @ 0x1404BBD80
 * Callers:
 *     KiProcessNMI @ 0x140510F30 (KiProcessNMI.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     HalpCheckAndReportGhes @ 0x1404CDF78 (HalpCheckAndReportGhes.c)
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405BA084 (WheapGetErrorSource.c)
 */

unsigned __int8 HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  unsigned __int8 result; // al
  char v3; // bl
  __int64 ErrorSource; // rax

  dword_140C507D8 = 1;
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
    if ( dword_140C507D4 == 1 )
    {
      memset(&dword_140C507E0, 0, 0x5CuLL);
      dword_140C507E4 = 3;
      dword_140C507F0 = 3;
      dword_140C507FC = 3;
      dword_140C507E0 = 1095059543;
      dword_140C50838 = ((unsigned int)dword_140C507EC >> 2) & 1;
      dword_140C507E8 = 92;
      dword_140C507F4 = 1;
      dword_140C507F8 = HalpNmiInfo;
      xmmword_140C50800 = (__int128)NMI_NOTIFY_TYPE_GUID;
      dword_140C50818 = 4;
      dword_140C50820 = 80;
      dword_140C50824 = 12;
      byte_140C50830 = v3;
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
      PshedRetrieveErrorInfo(
        &dword_140C507E0,
        (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
      result = WheaReportHwError(&dword_140C507E0);
    }
  }
  HalpProcessorInNmiHandler = 1280;
  return result;
}
