/*
 * XREFs of HamRpcSrvConnectExtendedExecution @ 0x180008A00
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

__int64 __fastcall HamRpcSrvConnectExtendedExecution(void *a1, struct _HAM_CLIENT_CONTEXT **a2, _QWORD *a3)
{
  int v5; // ebx
  struct _HAM_CLIENT_CONTEXT *v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  int v9; // ecx
  unsigned int v10; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int TokenInformation; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_CLIENT_CONTEXT *v13; // [rsp+78h] [rbp-88h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v16; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]

  v13 = 0LL;
  Handle = 0LL;
  v5 = CempRpcQueryClientInformation(a1, DestinationSid, &TokenInformation, &v10, 0LL, &Handle);
  if ( v5 < 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
    {
      v18 = 0;
      v16 = &v10;
      v10 = v5;
      v17 = 4;
      tlgWriteTransfer_EventWriteTransfer(v9, (int)&dword_1800A1AF7, 0, 0, 3u, &v15);
    }
  }
  else
  {
    v5 = HamSrvConnect((char *)RmSvcGlobals + 1768, v10, DestinationSid, Handle, TokenInformation, 2, 0);
    if ( v5 < 0 )
    {
      v7 = v13;
    }
    else
    {
      v6 = v13;
      v7 = 0LL;
      *a2 = v13;
      v5 = 0;
      *a3 = *((_QWORD *)v6 + 13);
    }
    if ( v7 )
      HamSrvDisconnect(v7);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
