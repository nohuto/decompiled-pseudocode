/*
 * XREFs of ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C0113F10
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C0062110 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011493C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 */

bool ndisDisconnectInStandby(void)
{
  NTSTATUS v0; // eax
  char v2[4]; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+28h] [rbp-10h]
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+4Ch] [rbp+14h]

  v4 = 0LL;
  v6 = 0;
  v5 = 1;
  v0 = ZwPowerInformation(PowerInformationInternal, &v5, 8u, &v4, 8u);
  if ( v0 >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v3 = BYTE5(v4) & 1;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x20u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        v3);
    }
    return BYTE5(v4) & 1;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v2 = v0;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xEu,
        0x1Fu,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        *(_DWORD *)v2);
    }
    return 0;
  }
}
