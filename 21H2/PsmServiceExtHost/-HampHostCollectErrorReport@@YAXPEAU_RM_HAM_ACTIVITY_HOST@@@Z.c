/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DD7C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800030A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180005818 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180021FF0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180029E44 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x180077DD4 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180078710 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@35@Z @ 0x18007D564 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x1800871C4 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // esi
  int v4; // r15d
  unsigned int v5; // r14d
  int v6; // r12d
  BOOL IsSuspendWaiter; // eax
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  BOOL v14; // eax
  int v15; // ecx
  int ProcessesInfo; // r9d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v23[4]; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+6Ch] [rbp-35h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  void *v27; // [rsp+78h] [rbp-29h] BYREF
  __int64 v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  __int128 v30; // [rsp+90h] [rbp-11h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A8h] [rbp+7h] BYREF

  v2 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v4 = 1;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A0CB5,
      0LL,
      0LL,
      2u,
      &v32);
  v5 = *((unsigned __int16 *)a1 + 324);
  v6 = *((_DWORD *)a1 + 210);
  if ( (*((_DWORD *)a1 + 162) & 0x30000) != 0x20000LL )
    goto LABEL_35;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  v8 = *((_DWORD *)a1 + 140);
  v9 = IsSuspendWaiter;
  v10 = 256;
  if ( v8 == 2 )
  {
    v11 = *((_DWORD *)a1 + 295);
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (v11 & 0x100) != 0 )
        goto LABEL_14;
      *((_DWORD *)a1 + 296) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a1 + 296) |= 0x180u;
    }
    goto LABEL_13;
  }
  if ( v8 == 4 && (*((_BYTE *)a1 + 1180) & 0x40) == 0 )
  {
    *((_DWORD *)a1 + 296) |= 0x40u;
LABEL_13:
    v2 = 1;
  }
LABEL_14:
  HampHostCheckUpdateSuspendWaitState(a1, v9);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v4 = 0;
  if ( v2 )
  {
    v12 = *((_DWORD *)a1 + 140);
    if ( v12 == 2 )
    {
      RmpSystemChangePsmApplicationState((__int64)a1 - 64, 2LL);
    }
    else if ( v12 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 1);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v14 = HampHostIsSuspendWaiter(a1, v13);
    *((_DWORD *)a1 + 296) = 0;
    v15 = *((_DWORD *)a1 + 140);
    if ( v15 == 2 )
    {
      *((_DWORD *)a1 + 295) |= 0x180u;
    }
    else if ( v15 == 4 )
    {
      *((_DWORD *)a1 + 295) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v14);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  ProcessesInfo = HampSystemCheckReportGameCoreHang((__int64)a1, v5, &v24);
  if ( ProcessesInfo >= 0 )
  {
    if ( v24 )
      goto LABEL_35;
    ProcessesInfo = RmHamHostGetProcessesInfo(
                      (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
                      0,
                      1,
                      (struct _HAM_PROCESS_SNAPSHOT *)&v30);
    if ( ProcessesInfo >= 0 )
    {
      ProcessesInfo = HampSystemReportHang(v17, *((_QWORD *)&v30 + 1), (unsigned int)v31, v5, v6);
      if ( ProcessesInfo >= 0 )
      {
        v10 = 0;
        ProcessesInfo = 0;
      }
      else
      {
        v10 = 768;
      }
    }
    else
    {
      v10 = 512;
    }
  }
  if ( ProcessesInfo < 0 )
  {
    if ( (unsigned int)dword_1800B3218 <= 4 )
      goto LABEL_38;
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
    {
      v23[0] = *((_BYTE *)a1 + 560);
      v29 = *((_QWORD *)a1 - 4);
      v27 = (char *)a1 + 24;
      v28 = 0x1000000LL;
      v24 = v5;
      v26 = v10;
      v25 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v18,
        byte_1800A0CDC,
        v19,
        v20,
        (__int64)&v25,
        (__int64)&v26,
        &v27,
        (__int64)&v29,
        (__int64)v23,
        (__int64)&v24,
        (__int64)&v28);
    }
  }
LABEL_35:
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v27 = (void *)*((_QWORD *)a1 - 4);
    v25 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1800B3218,
      (int)&unk_1800A0E98,
      v21,
      v22,
      (__int64)&v27,
      (__int64)&v25);
  }
LABEL_38:
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v30);
  if ( !v4 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 81) &= ~0x10000000000000uLL;
}
