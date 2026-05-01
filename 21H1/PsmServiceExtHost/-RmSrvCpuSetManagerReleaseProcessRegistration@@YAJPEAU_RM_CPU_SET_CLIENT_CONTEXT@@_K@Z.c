/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180068C98
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180062F20 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000EC70 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180067F74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006D660 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_OBJECT_TABLE *v4; // rcx
  char *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  DWORD v9; // ebx
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009B78E,
      0LL,
      0LL,
      2u,
      &v16);
  RmpUtilCheckStartLockTracking(&v13, (struct _CEM_LOCK_TRACKER *)v15);
  RmpAcquireGlobalLock();
  v4 = (struct _RM_CPU_SET_MANAGER *)((char *)*a1 + 48);
  v12 = a2;
  if ( (int)RmpObjectTableFindObjectByHandle(v4, &v12, (struct _RM_OBJECT_HEADER **)&P) < 0 )
  {
    v5 = 0LL;
LABEL_6:
    v6 = -1073741584;
    goto LABEL_7;
  }
  v5 = (char *)P;
  if ( !P || *((struct _RM_CPU_SET_MANAGER ***)P + 6) != a1 )
    goto LABEL_6;
  RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, P, 1u);
  v6 = 0;
LABEL_7:
  if ( v5 )
    RmpObjectRelease(v5);
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    LODWORD(P) = *((_DWORD *)a1 + 14);
    v14 = a2;
    LODWORD(v12) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800B31E0,
      byte_18009BA07,
      v7,
      v8,
      (__int64)&v12,
      (__int64)&P,
      (__int64)&v14);
  }
  if ( v13 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v9, 0LL);
    }
  }
  return v6;
}
