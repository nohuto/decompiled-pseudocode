/*
 * XREFs of HalHandleNMI @ 0x1404BD980
 * Callers:
 *     KiProcessNMI @ 0x140512CB0 (KiProcessNMI.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HalpCheckAndReportGhes @ 0x1404CFB88 (HalpCheckAndReportGhes.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 */

unsigned __int8 HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  unsigned __int8 result; // al
  char v3; // bl
  __int64 ErrorSource; // rax

  dword_140C50998 = 1;
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
    if ( dword_140C50994 == 1 )
    {
      memset(&dword_140C509A0, 0, 0x5CuLL);
      dword_140C509A4 = 3;
      dword_140C509B0 = 3;
      dword_140C509BC = 3;
      dword_140C509A0 = 1095059543;
      dword_140C509F8 = ((unsigned int)dword_140C509AC >> 2) & 1;
      dword_140C509A8 = 92;
      dword_140C509B4 = 1;
      dword_140C509B8 = HalpNmiInfo;
      xmmword_140C509C0 = (__int128)NMI_NOTIFY_TYPE_GUID;
      dword_140C509D8 = 4;
      dword_140C509E0 = 80;
      dword_140C509E4 = 12;
      byte_140C509F0 = v3;
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
      PshedRetrieveErrorInfo(
        &dword_140C509A0,
        (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
      result = WheaReportHwError(&dword_140C509A0);
    }
  }
  HalpProcessorInNmiHandler = 1280;
  return result;
}
