/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C01A6B5C
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6050 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A62F0 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6410 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6550 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A6600 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotificationBase @ 0x1C00B2A00 (NlsKbdSendIMENotificationBase.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x1C01C5A8C (ApiSetEditionGetAppImeCompatFlags.c)
 */

void __fastcall NlsKbdSendIMEProc(int a1, int a2)
{
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 96) && (ApiSetEditionGetAppImeCompatFlags() & 0x800000) == 0 )
    NlsKbdSendIMENotificationBase(a1, a2);
}
