/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0151090
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C012AD20 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C02528C0 )
    return qword_1C02528C0(a1, 0LL);
  else
    return 3221225659LL;
}
