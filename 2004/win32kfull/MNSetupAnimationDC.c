/*
 * XREFs of MNSetupAnimationDC @ 0x1C0009DFC
 * Callers:
 *     FinalUserInit @ 0x1C000AA3C (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C0222278 (MNAllocMenuState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  _QWORD *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 0LL);
    DPIMetrics = (_QWORD *)GetDPIMetrics();
    GreSelectFont(*(_QWORD *)(a1 + 136), *DPIMetrics);
    return 1LL;
  }
  return result;
}
