/*
 * XREFs of HalHandleNMI @ 0x1404B8180
 * Callers:
 *     KiProcessNMI @ 0x14050CFB0 (KiProcessNMI.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     HalpCheckAndReportGhes @ 0x1404CA568 (HalpCheckAndReportGhes.c)
 *     WheaReportHwError @ 0x1405B5450 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405B5E04 (WheapGetErrorSource.c)
 */

unsigned __int8 HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  unsigned __int8 result; // al
  char v3; // bl
  __int64 ErrorSource; // rax

  dword_140C50898 = 1;
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
    if ( dword_140C50894 == 1 )
    {
      memset(&dword_140C508A0, 0, 0x5CuLL);
      dword_140C508A4 = 3;
      dword_140C508B0 = 3;
      dword_140C508BC = 3;
      dword_140C508A0 = 1095059543;
      dword_140C508F8 = ((unsigned int)dword_140C508AC >> 2) & 1;
      dword_140C508A8 = 92;
      dword_140C508B4 = 1;
      dword_140C508B8 = HalpNmiInfo;
      xmmword_140C508C0 = (__int128)NMI_NOTIFY_TYPE_GUID;
      dword_140C508D8 = 4;
      dword_140C508E0 = 80;
      dword_140C508E4 = 12;
      byte_140C508F0 = v3;
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
      PshedRetrieveErrorInfo(
        &dword_140C508A0,
        (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
      result = WheaReportHwError(&dword_140C508A0);
    }
  }
  HalpProcessorInNmiHandler = 1280;
  return result;
}
