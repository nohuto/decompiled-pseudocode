/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022618
 * Callers:
 *     HamRpcSrvCloseActivity @ 0x1800254E0 (HamRpcSrvCloseActivity.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003433C (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x18000B440 (CempLockTrackerIsSetForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020CE0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022780 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  DWORD v4; // ebx
  int v5; // edi
  struct _HAM_ACTIVITY *v6; // rax
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  struct _HAM_ACTIVITY *v10; // rsi
  int v11; // ebx
  DWORD v12; // edi
  int v14; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0108, 0, 0, 2u, &v17);
  if ( CempLockTrackerIsSetForThread() )
  {
    v5 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v4, TlsValue);
    }
    v5 = 1;
  }
  v6 = HampActFindForClient(a1, a2);
  v10 = v6;
  if ( v6 )
  {
    v11 = HampActClose(v6, v7);
    if ( v11 >= 0 )
      v11 = 0;
    CemRcObjectDereference(v10);
  }
  else
  {
    v11 = -1073741275;
  }
  if ( v5 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v15 = a2;
    v14 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B3218,
      (unsigned int)&unk_18009F91E,
      v8,
      v9,
      (__int64)&v14,
      (__int64)&v15);
  }
  return (unsigned int)v11;
}
