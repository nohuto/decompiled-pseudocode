/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180032470
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180020030 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x180032440 (HamRpcSrvStartExtendedExecutionAsync.c)
 *     HamRpcSrvStartActivityAsync @ 0x180032460 (HamRpcSrvStartActivityAsync.c)
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x18000B440 (CempLockTrackerIsSetForThread.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180017F70 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180032830 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180078BD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  DWORD v11; // ebx
  int v12; // r14d
  __int64 *v13; // rdi
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edi
  int v18; // eax
  __int64 v19; // rax
  int started; // edi
  DWORD v21; // ebx
  _BYTE v23[4]; // [rsp+50h] [rbp-128h] BYREF
  DWORD v24; // [rsp+54h] [rbp-124h] BYREF
  DWORD v25; // [rsp+58h] [rbp-120h] BYREF
  int v26; // [rsp+5Ch] [rbp-11Ch] BYREF
  __int64 v27; // [rsp+60h] [rbp-118h] BYREF
  __int64 v28; // [rsp+68h] [rbp-110h] BYREF
  __int64 v29; // [rsp+70h] [rbp-108h] BYREF
  __int64 v30; // [rsp+78h] [rbp-100h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+110h] [rbp-68h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F629,
      0LL,
      0LL,
      2u,
      &v32);
  v27 = 0LL;
  if ( CempLockTrackerIsSetForThread() )
  {
    v12 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, TlsValue);
    }
    v12 = 1;
  }
  v24 = 0;
  if ( a4 )
  {
    started = -1073741822;
    goto LABEL_35;
  }
  if ( a3 > 1 )
  {
    started = -1073741583;
    goto LABEL_35;
  }
  v13 = (__int64 *)(*a1 + 216LL);
  v28 = a2;
  v14 = v13 + 2;
  RtlAcquireSRWLockShared(v13 + 2);
  v15 = v13[1];
  v16 = *v13;
  if ( (v15 & 1) != 0 && v16 )
    v16 ^= (unsigned __int64)v13;
  v17 = v15 & 1;
  if ( !v16 )
  {
LABEL_15:
    v16 = 0LL;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v18 = HampActCompareByHandle(&v28, (void *)v16);
    if ( v18 < 0 )
    {
      v19 = *(_QWORD *)v16;
      if ( v17 && v19 )
        goto LABEL_27;
      goto LABEL_19;
    }
    if ( v18 <= 0 )
      break;
    v19 = *(_QWORD *)(v16 + 8);
    if ( v17 && v19 )
    {
LABEL_27:
      v16 ^= v19;
      goto LABEL_20;
    }
LABEL_19:
    v16 = v19;
LABEL_20:
    if ( !v16 )
      goto LABEL_30;
  }
  if ( !*(_QWORD *)(v16 + 24) )
    goto LABEL_15;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_30:
  RtlReleaseSRWLockShared(v14);
  if ( v16 && *(_QWORD **)(v16 + 64) == a1 )
  {
    started = HampActStartAsync(v16, a3, &v24, &v27);
    if ( started >= 0 )
      started = 0;
    CemRcObjectDereference((_QWORD *)v16);
  }
  else
  {
    if ( v16 )
      CemRcObjectDereference((_QWORD *)v16);
    started = -1073741275;
  }
LABEL_35:
  if ( v12 )
  {
    v21 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v21, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v29 = v27;
    v25 = v24;
    v23[0] = a3;
    v30 = a2;
    v26 = started;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v8,
      (unsigned int)&unk_18009F2A0,
      v9,
      v10,
      (__int64)&v26,
      (__int64)&v30,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)v23);
  }
  return (unsigned int)started;
}
