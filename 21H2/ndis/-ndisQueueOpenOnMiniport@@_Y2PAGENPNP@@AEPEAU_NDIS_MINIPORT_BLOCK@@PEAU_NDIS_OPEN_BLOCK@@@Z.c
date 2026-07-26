/*
 * XREFs of ?ndisQueueOpenOnMiniport@@_Y2PAGENPNP@@AEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C012F040
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002AF30 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060308 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall ndisQueueOpenOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  __int64 PnPDeviceState; // rcx
  unsigned __int8 v5; // di
  char v7[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x68u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      a2);
  PnPDeviceState = (unsigned int)a1->PnPDeviceState;
  if ( (((_DWORD)PnPDeviceState - 1) & 0xFFFFFFFC) != 0 || (_DWORD)PnPDeviceState == 3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0x69u,
        (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
        (char)a1,
        a2);
    if ( (byte_1C00E6181 & 2) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        PnPDeviceState,
        &OpenFailedMiniportNotStarted,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)a2);
    v5 = 0;
  }
  else
  {
    v5 = 1;
    a2->MiniportNextOpen = a1->OpenQueue;
    ++a1->NumOpens;
    a1->OpenQueue = a2;
    ndisUpdateCheckForLoopbackFlag(a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x6Au,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v7);
  }
  return v5;
}
