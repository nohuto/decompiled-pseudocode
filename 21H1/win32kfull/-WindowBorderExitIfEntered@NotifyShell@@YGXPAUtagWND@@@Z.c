/*
 * XREFs of ?WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z @ 0x12CEE
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

void __thiscall NotifyShell::WindowBorderExitIfEntered(_DWORD *ecx0)
{
  char v1; // si
  int v2; // eax

  v1 = (char)ecx0;
  v2 = ecx0[49];
  if ( (v2 & 1) != 0 )
  {
    ecx0[49] = v2 & 0xFFFFFFFE;
    anonymous_namespace_::NotifyShellSimplePayload(0, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(1, 14, &WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v1);
  }
}
