/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C0148870
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C024A8A0 )
    return qword_1C024A8A0(a1, 0LL);
  else
    return 3221225659LL;
}
