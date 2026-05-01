/*
 * XREFs of ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007B5DC
 * Callers:
 *     HamRpcSrvSetExternalResourcePriority @ 0x180080E20 (HamRpcSrvSetExternalResourcePriority.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800228C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180077780 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180081C98 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 */

__int64 __fastcall HamSrvSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  struct _HAM_ACTIVITY *v6; // rdi
  struct _HAM_ACTIVITY *v7; // rax
  int v8; // ebx
  DWORD v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp-F8h] BYREF
  int v15; // [rsp+44h] [rbp-F4h] BYREF
  int v16; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v18[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A00A7,
      0LL,
      0LL,
      2u,
      &v19);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v6 = 0LL;
  if ( *(_BYTE *)a3 < 3u || *(_BYTE *)a3 > 0x30u )
  {
    v8 = -1073741583;
  }
  else
  {
    if ( (unsigned __int8)(*((_BYTE *)a3 + 1) - 2) > 0x63u )
    {
      v8 = -1073741583;
      goto LABEL_15;
    }
    v7 = HampActFindForClient(a1, a2);
    v6 = v7;
    if ( !v7 )
    {
      v8 = -1073741275;
      goto LABEL_15;
    }
    v8 = HampActSetExternalResourcePriority(v7, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( v6 )
    CemRcObjectDereference(v6);
LABEL_15:
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v14 = *((unsigned __int8 *)a3 + 1);
    v15 = *(unsigned __int8 *)a3;
    v17 = a2;
    v16 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_18009FFE8,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14);
  }
  return (unsigned int)v8;
}
