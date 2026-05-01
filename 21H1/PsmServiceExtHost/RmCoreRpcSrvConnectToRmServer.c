/*
 * XREFs of RmCoreRpcSrvConnectToRmServer @ 0x180042A40
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x180008820 (CempRpcQueryClientInformation.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z @ 0x180042B24 (-RmpCoreApiConnectToRmServer@@YAJPEAT_RM_SID@@KPEAPEAU_RM_ACTIVATOR@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall RmCoreRpcSrvConnectToRmServer(
        RPC_BINDING_HANDLE ClientBinding,
        struct _RM_ACTIVATOR **a2,
        struct _WNF_STATE_NAME *a3)
{
  int v6; // edi
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-118h] BYREF
  struct _RM_ACTIVATOR *v10; // [rsp+38h] [rbp-110h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v12[144]; // [rsp+90h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v6 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, &v9, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v6 = RmpCoreApiConnectToRmServer((union _RM_SID *)DestinationSid, v9, &v10, a3);
    if ( v6 >= 0 )
      *a2 = v10;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v7, 0LL);
  }
  return (unsigned int)v6;
}
