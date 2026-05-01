/*
 * XREFs of PsmHostStateNotification2 @ 0x18000B300
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerIsSetForThread @ 0x18000B440 (CempLockTrackerIsSetForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180031238 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$03@@55AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180062324 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$03@@U3@U3@U-$_tlgWrapperB.c)
 */

int __fastcall PsmHostStateNotification2(void *Src, unsigned int a2, __int64 a3, __int64 a4, __int64 *a5, int a6)
{
  int v10; // ebx
  ULONG v11; // eax
  int result; // eax
  DWORD v13; // ebx
  int *v14; // [rsp+30h] [rbp-D0h]
  unsigned int v15; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  void *v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _BYTE v19[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v20[144]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = 1;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v16 = *a5;
    v14 = (int *)&v15;
    v15 = a2;
    v17 = Src;
    v18 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      Src,
      &unk_18009A4D1);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
    v10 = 0;
  else
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  memset_0(v19, 0, 0x44uLL);
  v11 = RtlLengthSid(Src);
  memcpy_0(v19, Src, v11);
  LODWORD(v14) = a6;
  result = ModernResourceEnforcer::ApplicationStateNotification(*((_QWORD *)RmSvcGlobals + 5), v19, a2, a3, a4, a5, v14);
  if ( v10 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      return TlsSetValue(v13, 0LL);
    }
  }
  return result;
}
