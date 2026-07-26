/*
 * XREFs of ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C0106A3C
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002F9FC (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD80C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisNsiSyncMiniportMediaConnectStateNotification(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 4040);
  v3[1] = 0;
  v3[0] = 1;
  v5 = 4;
  v6 = 644;
  v4 = v1 + 1220;
  return ndisNsiNotifyClientInterfaceChange(v1, 0, (__int64)v3, 1);
}
