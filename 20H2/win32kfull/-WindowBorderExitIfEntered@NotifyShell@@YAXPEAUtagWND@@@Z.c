/*
 * XREFs of ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011B100
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011B3B0 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderExitIfEntered(NotifyShell *this, struct tagWND *a2)
{
  int v2; // eax
  char v3; // bl
  int v4; // edx
  int v5; // ecx

  v2 = *((_DWORD *)this + 81);
  v3 = (char)this;
  if ( (v2 & 1) != 0 )
  {
    *((_DWORD *)this + 81) = v2 & 0xFFFFFFFE;
    anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 6LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(v5, v4, 1, 14, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, v3);
    }
  }
}
