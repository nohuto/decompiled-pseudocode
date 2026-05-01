/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180036190
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x1800043E0 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18006259C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-71h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v14[56]; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v15; // [rsp+90h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+C0h] [rbp+7h] BYREF
  int *v17; // [rsp+E0h] [rbp+27h]
  int v18; // [rsp+E8h] [rbp+2Fh]
  int v19; // [rsp+ECh] [rbp+33h]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v14, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v10 = v15;
    v11 = a2;
    v12 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009A8BC,
      v6,
      v7,
      (__int64)&v10,
      (__int64)&v12,
      (__int64)&v11);
  }
  v8 = ExecutionModel::ResourceManager::RmAccessCheckEx((__int64)g_pResourceManager, a2, a3);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 2LL) )
  {
    v19 = 0;
    v17 = (int *)&v10;
    v10 = v8;
    v18 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009A54A,
      0LL,
      0LL,
      3u,
      &v16);
  }
  return v8;
}
