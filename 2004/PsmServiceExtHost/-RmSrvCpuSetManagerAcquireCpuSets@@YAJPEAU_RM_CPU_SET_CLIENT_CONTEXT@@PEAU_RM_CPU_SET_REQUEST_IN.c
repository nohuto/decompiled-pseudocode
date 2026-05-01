/*
 * XREFs of ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x180068544
 * Callers:
 *     ?RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z @ 0x180062E30 (-RmGameModeCpuSetManagerAcquireExplicitCpuSets@@YAJPEAX0K_KPEA_K@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x180068238 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006BAD0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006D504 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        ULONG *a2,
        unsigned __int64 *a3,
        struct _WNF_STATE_NAME *a4)
{
  unsigned __int64 v7; // rsi
  int v8; // edi
  PVOID v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DWORD v13; // ebx
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v16; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v17; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v20; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+100h] [rbp+0h] BYREF

  RmpUtilCheckStartLockTracking(&v20, (struct _CEM_LOCK_TRACKER *)v21);
  P = 0LL;
  v7 = -1LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BA5D,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&BitMapHeader);
  RtlInitializeBitMap(&BitMapHeader, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 8 && RtlNumberOfSetBits(&BitMapHeader) <= *a2 )
  {
    RmpAcquireGlobalLock();
    v8 = RmpCpuSetManagerAcquireCpuSets(
           a1,
           (struct _RM_CPU_SET_REQUEST_INFORMATION *)a2,
           0,
           (struct _RM_CPU_SET_ALLOCATION **)&P);
    if ( v8 < 0 )
    {
      v9 = P;
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
      v7 = *((_QWORD *)P + 4);
      *a3 = v7;
    }
    if ( v9 )
      RmpCpuSetManagerReleaseAllocation(v9);
    RmpReleaseGlobalLock();
  }
  else
  {
    v8 = -1073741584;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v16 = *a2;
    v17 = a2[43];
    v18 = a2[42];
    v19 = *((_DWORD *)a1 + 14);
    *(_QWORD *)&BitMapHeader.SizeOfBitMap = v7;
    LODWORD(P) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_18009B3D4,
      v11,
      v12,
      (__int64)&P,
      (__int64)&BitMapHeader,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  if ( v20 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v8;
}
