/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x18002C170
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x180008820 (CempRpcQueryClientInformation.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x18002C49C (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(
        RPC_BINDING_HANDLE ClientBinding,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  NTSTATUS ClientInformation; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  DWORD v10; // edi
  signed int v12; // eax
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v17; // [rsp+140h] [rbp+40h]
  int v18; // [rsp+148h] [rbp+48h]
  int v19; // [rsp+14Ch] [rbp+4Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, v13, 0LL, 0LL);
  v8 = v13[0];
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v19 = 0;
    v17 = v13;
    v13[0] = v8;
    v18 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009A807, 0, 0, 3u, &v16);
  }
  if ( ClientInformation < 0 )
  {
    v12 = RtlNtStatusToDosError(ClientInformation);
    v9 = v12;
    if ( v12 > 0 )
      v9 = (unsigned __int16)v12 | 0x80070000;
  }
  else
  {
    v9 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v6, v8, DestinationSid, a2, a3);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v19 = 0;
    v17 = v13;
    v13[0] = v9;
    v18 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009A5E1, 0, 0, 3u, &v16);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v9;
}
