/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x1800688D8
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180062EE0 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x1800682F0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18006C2FC (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006D300 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006D660 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  PVOID v8; // r14
  unsigned __int64 v9; // r15
  DWORD ProcessId; // ebx
  int v11; // edi
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  char *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  DWORD v16; // ebx
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  DWORD v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+110h] [rbp+10h] BYREF

  v22 = a3;
  RmpUtilCheckStartLockTracking(&v21, (struct _CEM_LOCK_TRACKER *)v25);
  v8 = 0LL;
  v9 = -1LL;
  P = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009B2F4,
      0LL,
      0LL,
      2u,
      &v26);
  ProcessId = GetProcessId(a2);
  if ( ProcessId == GetCurrentProcessId() )
  {
    v11 = -1073741584;
    goto LABEL_17;
  }
  RmpAcquireGlobalLock();
  Allocation = RmpCpuSetManagerFindAllocation(*a1, a3);
  v13 = (char *)Allocation;
  if ( !Allocation || *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) != a1 || !*((_DWORD *)Allocation + 66) )
  {
    v11 = -1073741583;
LABEL_13:
    if ( v8 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v8, 1u);
    goto LABEL_15;
  }
  v11 = RmpCpuSetManagerRegisterProcessWithAllocation(
          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
          a2,
          Allocation,
          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
  if ( v11 < 0 )
  {
    v8 = P;
    goto LABEL_13;
  }
  v11 = 0;
  v9 = *((_QWORD *)P + 4);
  *a4 = v9;
LABEL_15:
  if ( v13 )
    RmpObjectRelease(v13);
LABEL_17:
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v19 = GetProcessId(a2);
    v20 = *((_DWORD *)a1 + 14);
    v23 = v22;
    v24 = v9;
    LODWORD(P) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v22,
      byte_18009B328,
      v14,
      v15,
      (__int64)&P,
      (__int64)&v24,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v23);
  }
  if ( v21 )
  {
    v16 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v16, 0LL);
    }
  }
  return (unsigned int)v11;
}
