/*
 * XREFs of RootHub_DetectPortInComplianceMode @ 0x1C001A3A8
 * Callers:
 *     RootHub_DetectLinkErrorState @ 0x1C001A2AC (RootHub_DetectLinkErrorState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C004825C (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0050588 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall RootHub_DetectPortInComplianceMode(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  char v6; // bl
  int v7; // edx
  int v8; // r14d
  __int64 v10; // rdi
  unsigned int v11; // eax
  int v12; // ecx
  int v14; // [rsp+20h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = (unsigned int)(a2 - 1);
  v6 = 0;
  v7 = *a3;
  v8 = (int)a3;
  v10 = 112 * v4;
  if ( (*a3 & 0x1E0) == 0x140 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        11,
        260,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        *a3);
    }
    if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x8000) != 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
    v11 = *(_DWORD *)(v10 + v3 + 88) + 1;
    *(_DWORD *)(v10 + v3 + 88) = v11;
    if ( v11 == 3 && !*(_BYTE *)(v10 + v3 + 96) )
    {
      LOBYTE(v14) = 0;
      Etw_ReportControllerHealthWithPortInfo(a1, *(_QWORD *)(a1 + 8), a2, v8, v14);
      v11 = *(_DWORD *)(v10 + v3 + 88);
      *(_BYTE *)(v10 + v3 + 96) = 1;
    }
    if ( v11 <= 0x18 )
    {
      v12 = 17043456;
      if ( _bittest(&v12, v11) )
        return 1;
    }
  }
  else if ( *(_DWORD *)(v10 + v3 + 88) )
  {
    Etw_ReportControllerHealthWithPortInfo(a1, *(_QWORD *)(a1 + 8), a2, (_DWORD)a3, 1);
    *(_DWORD *)(v10 + v3 + 88) = 0;
    *(_BYTE *)(v10 + v3 + 96) = 0;
    *(_BYTE *)(v10 + v3 + 104) = 0;
  }
  return v6;
}
