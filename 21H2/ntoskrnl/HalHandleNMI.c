/*
 * XREFs of HalHandleNMI @ 0x14050A180
 * Callers:
 *     KiProcessNMI @ 0x14029B9A0 (KiProcessNMI.c)
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14021294C (HalpCheckAndReportGhes.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 */

char HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  char result; // al
  unsigned __int8 v3; // al
  char v4; // bl
  __int64 ErrorSource; // rax

  _InterlockedAdd(&WheapCriticalStateRefCount, 1u);
  dword_140C54AE8 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v0 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v1 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes((__int64)v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &HalpGenericNmiErrorSourceListHead );
  if ( v1 != 1 )
  {
LABEL_7:
    v3 = __inbyte(0x61u);
    v4 = v3;
    if ( dword_140C54AE4 != 1 )
    {
      HalpDoingCrashDump = 1;
      HalpBugcheckInProgress = 1;
      KeBugCheckEx(0x80u, 0x4F4454uLL, v3, 0LL, 0LL);
    }
    memset(&dword_140C54AF0, 0, 0x5CuLL);
    dword_140C54AF4 = 3;
    dword_140C54B00 = 3;
    dword_140C54B0C = 3;
    dword_140C54AF0 = 1095059543;
    dword_140C54B48 = ((unsigned int)dword_140C54AFC >> 2) & 1;
    dword_140C54AF8 = 92;
    dword_140C54B04 = 1;
    dword_140C54B08 = HalpNmiInfo;
    xmmword_140C54B10 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140C54B28 = 4;
    dword_140C54B30 = 80;
    dword_140C54B34 = 12;
    byte_140C54B40 = v4;
    ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140C54AF0,
      (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError(&dword_140C54AF0);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
