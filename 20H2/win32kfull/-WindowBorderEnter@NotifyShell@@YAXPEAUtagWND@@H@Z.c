/*
 * XREFs of ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D2AC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011B3B0 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderEnter(NotifyShell *this, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  char v5; // r11
  unsigned int v6; // r10d
  __int64 v7; // r8
  int v8; // edx
  int v9; // ecx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)this;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 432) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  if ( anonymous_namespace_::NotifyShellSimplePayload(v4, 5, v7, (int)a2) )
  {
    *((_DWORD *)this + 81) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(v9, v8, 1, 13, (__int64)&WPP_df8d2832c9f0384c87c95eb8329d57df_Traceguids, (char)this);
    }
  }
}
