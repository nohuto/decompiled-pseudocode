/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x180062860
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x1800043E0 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180062520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v10[3]; // [rsp+34h] [rbp-65h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-59h] BYREF
  char v12[56]; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v13; // [rsp+80h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+B0h] [rbp+17h] BYREF
  unsigned int *v15; // [rsp+D0h] [rbp+37h]
  int v16; // [rsp+D8h] [rbp+3Fh]
  int v17; // [rsp+DCh] [rbp+43h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v12, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v4 = v13;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v10[0] = a2;
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800B31E0,
      byte_18009A75A,
      v5,
      v6,
      (__int64)&v9,
      (__int64)v10);
  }
  v7 = ExecutionModel::ResourceManager::RmAccessCheckEx((__int64)g_pResourceManager, a2, v4);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v17 = 0;
    v15 = &v9;
    v9 = v7;
    v16 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009A6EA,
      0LL,
      0LL,
      3u,
      &v14);
  }
  return v7;
}
