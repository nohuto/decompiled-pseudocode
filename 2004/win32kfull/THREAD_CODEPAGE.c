/*
 * XREFs of THREAD_CODEPAGE @ 0x1C02317B0
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C0122AD0 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C0229FC0 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025EAD4 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 152LL);
}
