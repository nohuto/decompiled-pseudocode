/*
 * XREFs of HamRpcSrvConnectServicing @ 0x18003DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800085CC (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CempRpcQueryClientInformation @ 0x180008820 (CempRpcQueryClientInformation.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180009198 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectServicing(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  int v3; // ebx
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp-31h]
  __int64 v8; // [rsp+40h] [rbp-29h]
  unsigned int v9; // [rsp+60h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1h] BYREF
  int TokenInformation; // [rsp+70h] [rbp+7h] BYREF
  struct _HAM_CLIENT_CONTEXT *v12; // [rsp+78h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp+17h] BYREF
  unsigned int *v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+A8h] [rbp+3Fh]
  int v16; // [rsp+ACh] [rbp+43h]

  v12 = 0LL;
  Handle = 0LL;
  v3 = CempRpcQueryClientInformation(a1, 0LL, &TokenInformation, &v9, 0LL, &Handle);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v16 = 0;
      v14 = &v9;
      v9 = v3;
      v15 = 4;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800A1A80, 0LL, 0LL, 3u, &v13);
    }
  }
  else
  {
    v3 = HamSrvConnect(
           (__int64)RmSvcGlobals + 1768,
           v9,
           0LL,
           (__int64)Handle,
           TokenInformation,
           4,
           0,
           v7,
           v8,
           0LL,
           (__int64)&v12);
    if ( v3 < 0 )
    {
      v4 = v12;
    }
    else
    {
      v4 = 0LL;
      *a2 = v12;
      v3 = 0;
    }
    if ( v4 )
      HamSrvDisconnect(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
