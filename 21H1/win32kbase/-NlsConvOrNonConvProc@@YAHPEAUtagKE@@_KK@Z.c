/*
 * XREFs of ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01AE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01AEB8C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C01AEC3C (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsConvOrNonConvProc(struct tagKE *a1)
{
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
