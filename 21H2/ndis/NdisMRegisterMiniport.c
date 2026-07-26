/*
 * XREFs of NdisMRegisterMiniport @ 0x1C0061AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0106870 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0135AE4 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength)
{
  char v3; // si
  NDIS_STATUS v7; // ebx
  int v8; // eax
  char v10[4]; // [rsp+30h] [rbp-28h]
  void *v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      NdisWrapperHandle);
  ndisIfEnsureNsiInitialized();
  if ( CharacteristicsLength >= 0x70 )
  {
    if ( *(_BYTE *)MiniportCharacteristics < 6u )
    {
      v8 = ndisRegisterMiniportDriver(
             NdisWrapperHandle,
             (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics,
             CharacteristicsLength,
             &v11);
      v3 = (char)v11;
      v7 = v8;
    }
    else
    {
      v7 = -1073676284;
    }
  }
  else
  {
    v7 = -1073676283;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v3,
      *(_DWORD *)v10);
  }
  return v7;
}
