/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1C0071E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A744 (WPP_RECORDER_SF_Zq.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C008C0FC (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDCB0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123200 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  unsigned int v4; // edi
  int v5; // edx
  char v7[160]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x60u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)MiniportHandle,
      PrimaryMiniportHandle);
  if ( *((_QWORD *)MiniportHandle + 470) == *((_QWORD *)PrimaryMiniportHandle + 470)
    && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    *((_DWORD *)MiniportHandle + 30) |= 0x10000000u;
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5104));
    if ( Ndis::BindState::SetBinding(
           (Ndis::BindState *)((char *)MiniportHandle + 5032),
           BindingDisabled,
           Reason_SecondaryMiniport) )
    {
      memset(v7, 0, sizeof(v7));
      if ( (unsigned __int8)byte_1C00E448B >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (struct NDIS_PNPTRACE_LOCALS *)v7);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v5,
            0x1Cu,
            0x61u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            *(unsigned __int16 **)&v7[8],
            *(_QWORD *)v7);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5104));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5104), RunSynchronous, 0);
    *((_QWORD *)MiniportHandle + 22) = PrimaryMiniportHandle;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x62u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      (char)MiniportHandle,
      PrimaryMiniportHandle);
  NdisTraceLoggingRareMiniportPath(MiniportHandle, 4096LL, v4);
  return v4;
}
