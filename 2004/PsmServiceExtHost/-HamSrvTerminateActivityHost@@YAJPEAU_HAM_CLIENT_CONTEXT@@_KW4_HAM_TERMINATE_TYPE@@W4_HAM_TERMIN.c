/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18000408C
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x180004080 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180004224 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022780 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3443@Z @ 0x1800790C4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U2@U2@U1@.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6)
{
  __int64 v6; // rbx
  struct _HAM_ACTIVITY *v10; // r14
  bool v11; // zf
  struct _HAM_ACTIVITY *v12; // rax
  int v13; // edi
  DWORD v14; // r14d
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0LL;
  v21 = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A02D6, 0, 0, 2u, &v27);
  v10 = 0LL;
  if ( a5 )
    v20 = *a5;
  else
    v20 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  if ( a3 - 1 <= 2 )
  {
    if ( a4 - 1 > 0x1AFE )
    {
      v13 = -1073741582;
      goto LABEL_17;
    }
    if ( a3 == 2 )
    {
      if ( (a4 & 0xFFFFFF00) == 0xD00 )
      {
LABEL_11:
        if ( a5 && !*a5 )
        {
          v13 = -1073741581;
          goto LABEL_17;
        }
        v12 = HampActFindForClient(a1, v21);
        v10 = v12;
        if ( !v12 )
        {
          v13 = -1073741275;
          goto LABEL_17;
        }
        v13 = HampActTerminate(v12, a3, a4, a5, a6);
        if ( v13 >= 0 )
          v13 = 0;
        goto LABEL_15;
      }
      v11 = (a4 & 0xFFFFFF00) == 5120;
    }
    else
    {
      v11 = a6 == 0;
    }
    if ( !v11 )
    {
      v13 = -1073741776;
      goto LABEL_17;
    }
    goto LABEL_11;
  }
  v13 = -1073741583;
LABEL_15:
  if ( v10 )
    CemRcObjectDereference(v10);
LABEL_17:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 8LL) )
  {
    if ( a5 )
      v6 = *a5;
    v25 = v20;
    v22 = a6;
    v24 = v6;
    v23 = a4;
    v19[0] = a3;
    LODWORD(v20) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_18009F97D,
      v16,
      v17,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)v19,
      (__int64)&v23,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v22);
  }
  return (unsigned int)v13;
}
