/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x1C01177D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0033840 (WPP_RECORDER_SF_S.c)
 *     wcscmp_0 @ 0x1C00400AD (wcscmp_0.c)
 *     WPP_RECORDER_SF_SD @ 0x1C00746F8 (WPP_RECORDER_SF_SD_ea_1C00746F8.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  char v3[4]; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-18h]

  if ( !wcscmp_0(a1, L"NblTracking") )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v3 = *(_DWORD *)ndisNblTrackerMode;
      WPP_RECORDER_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Bu,
        0xFu,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        a1,
        *(_DWORD *)v3);
    }
    return *(unsigned int *)ndisNblTrackerMode;
  }
  else if ( !wcscmp_0(a1, L"OidWatchdogTimeout") )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v4 = 270000;
      WPP_RECORDER_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Bu,
        0x10u,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        a1,
        v4);
    }
    return 270000LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0x11u,
        (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
        a1);
    return 0xFFFFFFFFLL;
  }
}
