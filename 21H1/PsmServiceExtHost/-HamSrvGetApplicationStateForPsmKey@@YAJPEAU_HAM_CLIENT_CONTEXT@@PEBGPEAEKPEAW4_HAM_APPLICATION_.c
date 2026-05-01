/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000E05C
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x18000E050 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     CempUtilValidateSid @ 0x18000E330 (CempUtilValidateSid.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18000EE74 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     StringCopyWorkerW @ 0x180011250 (StringCopyWorkerW.c)
 *     CempLockTrackerMarkReleased @ 0x18001E5C0 (CempLockTrackerMarkReleased.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180028DC4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18007897C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_t_ea_18007897C.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        __int64 a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // esi
  DWORD v10; // ebx
  int v11; // ebx
  enum _HAM_APPLICATION_EXECUTION_STATE *v12; // rcx
  size_t *v13; // r8
  int v14; // ebx
  struct _HAM_APPLICATION *v15; // rdi
  DWORD v16; // esi
  _QWORD *Value; // rbx
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  DWORD v21; // edi
  int RegistryTerminateReason; // eax
  ULONG v24[2]; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  enum _HAM_TERMINATE_REASON *v26; // [rsp+58h] [rbp-A8h]
  enum _HAM_APPLICATION_EXECUTION_STATE *v27; // [rsp+60h] [rbp-A0h]
  unsigned __int8 *v28; // [rsp+68h] [rbp-98h]
  const unsigned __int16 *v29; // [rsp+70h] [rbp-90h]
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t pszDest[232]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v33; // [rsp+324h] [rbp+224h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+330h] [rbp+230h] BYREF

  v27 = a5;
  v26 = a6;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009FA0C, 0, 0, 2u, &v34);
  v9 = 6912;
  v25 = 6912;
  memset_0(TlsValue, 0, 0x88uLL);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, TlsValue);
  }
  v11 = *((_DWORD *)a1 + 36);
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( (int)CempUtilValidateSid(a3) < 0 )
    {
      v14 = -1073741584;
    }
    else
    {
      memset_0(pszDest, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) )
        CempUtilValidateSid(a3);
      StringCopyWorkerW(pszDest, 0xE8uLL, v13, a2, *(size_t *)v24);
      RtlCopySid(0x44u, DestinationSid, a3);
      v33 = v11;
      v14 = 0;
    }
  }
  else
  {
    v14 = -1073741585;
  }
  if ( v14 >= 0 )
  {
    v15 = HampAppFind(*(struct _HOST_ACTIVITY_MANAGER **)a1, (struct _HAM_APPLICATION_INFO *)pszDest);
    if ( v15 )
    {
      v16 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *Value |= 0x20uLL;
        ++Value[6];
      }
      RtlAcquireSRWLockShared((char *)v15 + 576);
      v9 = *((unsigned __int16 *)v15 + 304);
      v18 = (*((_DWORD *)v15 + 154) >> 5) & 7;
      CempLockTrackerMarkReleased(v20, v19, 5LL);
      RtlReleaseSRWLockShared((char *)v15 + 576);
      v12 = v27;
      if ( v18 == 4 )
        v18 = 3;
      *(_DWORD *)v27 = v18;
    }
    else
    {
      RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                                  pszDest,
                                  DestinationSid,
                                  (enum _HAM_TERMINATE_REASON *)&v25);
      v9 = v25;
      v14 = RegistryTerminateReason;
      if ( RegistryTerminateReason < 0 )
        goto LABEL_23;
      v12 = v27;
      *(_DWORD *)v27 = 3;
    }
    *(_DWORD *)v26 = v9;
    v14 = 0;
    if ( v15 )
      CemRcObjectDereference(v15);
  }
LABEL_23:
  v21 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v21, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    LODWORD(v26) = *((_DWORD *)a1 + 36);
    v25 = v9;
    v28 = a3;
    v29 = a2;
    LODWORD(v27) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v12,
      &unk_18009F113);
  }
  return (unsigned int)v14;
}
