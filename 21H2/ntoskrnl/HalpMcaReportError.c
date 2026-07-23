/*
 * XREFs of HalpMcaReportError @ 0x1404BACD0
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0C60 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x1404BB004 (HalpMceHandlerCore.c)
 *     HalpMceHandlerWithRendezvous @ 0x1404BB158 (HalpMceHandlerWithRendezvous.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A7D20 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpTranslateToLegacyMcaException @ 0x1404BB2D8 (HalpTranslateToLegacyMcaException.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 */

__int64 __fastcall HalpMcaReportError(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ErrorSource; // rax
  __int64 v7; // rbx
  char CpuInfo; // al
  unsigned __int8 v10[16]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+40h] [rbp-C0h] BYREF

  v10[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  if ( !a1 )
  {
    if ( a2 )
    {
      HalpTranslateToLegacyMcaException(a2, BugCheckParameter2);
      KeBugCheckEx(
        0x9Cu,
        LOBYTE(BugCheckParameter2[3]),
        (ULONG_PTR)BugCheckParameter2,
        HIDWORD(BugCheckParameter2[4]),
        LODWORD(BugCheckParameter2[4]));
    }
    LODWORD(BugCheckParameter2[0]) = 1;
    BugCheckParameter2[1] = MEMORY[0xFFFFF78000000014];
    LODWORD(BugCheckParameter2[2]) = a3;
    if ( a3 > 0x80000000 )
      KeBugCheckEx(0x9Cu, a3, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x9Cu, 0LL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  }
  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, *(unsigned int *)(a1 + 24));
  v7 = (ErrorSource + 96) & -(__int64)(ErrorSource != 0);
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, v10);
  if ( (v10[0] & (unsigned __int8)-(CpuInfo != 0)) == 1 && HalpMcaScalableRasSupported )
    *(_DWORD *)(a1 + 12) |= 0x40u;
  if ( v7 )
    PshedRetrieveErrorInfo(a1, v7);
  return WheaReportHwError(a1);
}
