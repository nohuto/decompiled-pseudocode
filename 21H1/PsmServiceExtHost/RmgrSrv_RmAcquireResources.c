/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180001700
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800018C0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1800626C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180062780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 *a11)
{
  int v14; // ebx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  HANDLE CurrentProcess; // rbx
  HANDLE v19; // rax
  __int64 v20; // rcx
  signed int v21; // ebx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  signed int LastError; // eax
  int v27; // [rsp+48h] [rbp-B8h]
  char v28; // [rsp+60h] [rbp-A0h] BYREF
  bool v29; // [rsp+61h] [rbp-9Fh]
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+6Ch] [rbp-94h] BYREF
  int v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  _DWORD RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[56]; // [rsp+A8h] [rbp-58h] BYREF
  int v41; // [rsp+E0h] [rbp-20h]

  v36 = a3;
  hSourceHandle = a7;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v40, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  TargetHandle = 0LL;
  v14 = v41;
  v28 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 2LL) )
  {
    v33 = a8;
    v32 = a9;
    v34 = a4;
    v35 = a2;
    v30 = a5;
    v31 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_18009A95E,
      v16,
      v17,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
  v29 = a5 == v14;
  CurrentProcess = GetCurrentProcess();
  v19 = GetCurrentProcess();
  if ( DuplicateHandle(v19, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LOBYTE(v27) = v29;
    v21 = ExecutionModel::ResourceManager::RmAcquireResources(
            v20,
            a2,
            v36,
            a4,
            a5,
            a6,
            TargetHandle,
            a8,
            a9,
            v27,
            &v28,
            a11);
    if ( v21 >= 0 )
      *a10 = v28 != 0;
  }
  else
  {
    LastError = GetLastError();
    v21 = LastError;
    if ( LastError > 0 )
      v21 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 2LL) )
  {
    v31 = *a10;
    v36 = *a11;
    v30 = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v22,
      (unsigned int)&unk_18009A90A,
      v23,
      v24,
      (__int64)&v30,
      (__int64)&v36,
      (__int64)&v31);
  }
  return (unsigned int)v21;
}
