/*
 * XREFs of NdisSetAoAcOptions @ 0x1C0114CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  v5 = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x34u,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      a1,
      a2);
    v5 = *(_QWORD *)(v2 + 4456);
  }
  if ( v5 )
  {
    v7 = ndisNicQuietDerefDefaultTimeout;
    if ( (v3 & 1) != 0 )
      v7 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    *(_DWORD *)(v4 + 284) = v7;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x36u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        v8);
    }
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xEu,
        0x35u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids);
    return 3221225659LL;
  }
}
