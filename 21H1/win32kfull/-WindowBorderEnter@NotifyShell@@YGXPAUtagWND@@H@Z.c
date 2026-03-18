/*
 * XREFs of ?WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z @ 0xB5830
 * Callers:
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _anonymous_namespace_::GetModifiersStateForShell @ 0xB5874 (_anonymous_namespace_--GetModifiersStateForShell.c)
 */

void __thiscall NotifyShell::WindowBorderEnter(int *ecx0)
{
  __int64 ModifiersStateForShell; // rax
  int v3; // edx
  int v4; // ecx

  ModifiersStateForShell = anonymous_namespace_::GetModifiersStateForShell(ecx0[2]);
  if ( anonymous_namespace_::NotifyShellSimplePayload(
         *ecx0,
         5,
         ModifiersStateForShell,
         SHIDWORD(ModifiersStateForShell)) )
  {
    ecx0[49] |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(v4, v3, 1u, 13, (int)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, (char)ecx0);
    }
  }
}
