/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01691CC
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0168EE8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00191E0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001A41C (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C001AE58 (CreateTokenManagerSessionGlobal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01690B4 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C0169AB8 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  CTokenManager **v3; // r15
  char *v4; // r12
  HANDLE **v6; // rcx
  OUTPUTDUPL_SESSION_MGR *v7; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rbx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 (__fastcall *v16)(_DWORD *); // rax
  int v17; // eax
  __int64 v18; // rdi
  char v19; // al
  __int64 (*v20)(void); // rax
  __int64 (*v21)(void); // rax
  struct DXGPROCESS *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 ProcessServerSilo; // rax
  bool v29; // al
  struct _KEVENT *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  OUTPUTDUPL_SESSION_MGR *v36; // rcx
  __int64 v37; // rax
  __int64 HostSilo; // rax
  __int64 v39; // rdi
  int v40; // ebx
  __int64 v41; // rax
  void *EventHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v43[2]; // [rsp+38h] [rbp-C8h] BYREF
  char *v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  const wchar_t *v47; // [rsp+60h] [rbp-A0h]
  int *v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  int v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+90h] [rbp-70h]
  __int128 v54; // [rsp+98h] [rbp-68h]
  __int128 v55; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h] BYREF
  int v58; // [rsp+C8h] [rbp-38h]
  const wchar_t *v59; // [rsp+D0h] [rbp-30h]
  int *v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+100h] [rbp+0h]
  __int128 v66; // [rsp+108h] [rbp+8h]
  __int128 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  __int64 v69; // [rsp+130h] [rbp+30h] BYREF
  int v70; // [rsp+138h] [rbp+38h]
  const wchar_t *v71; // [rsp+140h] [rbp+40h]
  int *v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  int v77; // [rsp+170h] [rbp+70h]
  __int128 v78; // [rsp+178h] [rbp+78h]
  __int128 v79; // [rsp+188h] [rbp+88h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  int v81; // [rsp+1F0h] [rbp+F0h] BYREF
  char v82; // [rsp+1F8h] [rbp+F8h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+200h] [rbp+100h] BYREF
  int v84; // [rsp+208h] [rbp+108h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (CTokenManager **)((char *)this + 18720);
  *((_QWORD *)this + 2) = 0LL;
  v4 = (char *)this + 18752;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = 53;
  *((_DWORD *)this + 4622) = 0;
  *((_BYTE *)this + 18492) = 0;
  *((_BYTE *)this + 18494) = 0;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  *((_DWORD *)this + 4636) = 0;
  *((_DWORD *)this + 4637) = 38;
  *((_DWORD *)this + 4638) = 61;
  *((_DWORD *)this + 4654) = 0;
  *((_QWORD *)this + 2328) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2332) = 0LL;
  *((_QWORD *)this + 2333) = 0LL;
  *((_DWORD *)this + 4668) = 0;
  *((_DWORD *)this + 4669) = 81;
  *((_DWORD *)this + 4670) = 1;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2337) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_DWORD *)this + 4684) = 4;
  *((_QWORD *)this + 2343) = (char *)this + 18752;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2360) = 0LL;
  *((_QWORD *)this + 2361) = 0LL;
  *((_QWORD *)this + 2362) = 0LL;
  *((_DWORD *)this + 4726) = 0;
  *((_DWORD *)this + 4727) = -1;
  *((_DWORD *)this + 4728) = 47;
  *((_DWORD *)this + 4730) = 0;
  *((_QWORD *)this + 2366) = 0LL;
  *((_QWORD *)this + 2367) = 0LL;
  *((_WORD *)this + 9472) = 0;
  *((_QWORD *)this + 2369) = 0LL;
  *((_QWORD *)this + 2370) = 0LL;
  *((_DWORD *)this + 4742) = 0;
  *((_DWORD *)this + 4743) = 1;
  *((_DWORD *)this + 4744) = -1;
  v6 = (HANDLE **)((char *)this + 18984);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2374) = 0LL;
  *((_QWORD *)this + 2375) = 0LL;
  *((_QWORD *)this + 2376) = 0LL;
  *((_DWORD *)this + 4754) = 0;
  *((_DWORD *)this + 4755) = -1;
  *((_DWORD *)this + 4756) = 1;
  *((_QWORD *)this + 2380) = 0LL;
  *((_QWORD *)this + 2379) = 0LL;
  *((_QWORD *)this + 2381) = 0LL;
  *((_QWORD *)this + 2382) = 0LL;
  *((_QWORD *)this + 2383) = 0LL;
  *((_DWORD *)this + 4768) = 0;
  *((_DWORD *)this + 4769) = -1;
  *((_DWORD *)this + 4770) = 1;
  *((_QWORD *)this + 2386) = 0LL;
  *((_DWORD *)this + 4774) = 0;
  *((_DWORD *)this + 4775) = 1;
  *((_QWORD *)this + 2388) = 0LL;
  ProductType = 0;
  v7 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x1B8uLL, 0x674D444Fu, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 1) = 0;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v7);
    *((_DWORD *)v8 + 12) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 1) = v8;
  if ( v8 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v8) < 0 )
  {
    v36 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v36 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v36);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2321) = (char *)this + 18560;
  *((_QWORD *)this + 2320) = (char *)this + 18560;
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  *((_QWORD *)this + 2325) = (char *)this + 18592;
  *((_QWORD *)this + 2324) = (char *)this + 18592;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (v9 = 0, !g_bSkuSupportMultipleUsers) )
    v9 = 1;
  *((_BYTE *)this + 18496) = v9;
  v81 = 0;
  v45 = 0LL;
  v47 = L"bEnumerateHWBeforeSW";
  v46 = 292;
  v48 = &v81;
  v49 = 0x4000000;
  v56 = 0LL;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  v54 = 0LL;
  v55 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v45,
              0LL,
              0LL) >= 0 )
    goto LABEL_32;
  v57 = 0LL;
  v58 = 292;
  v59 = L"fUseHardwareGPU";
  v61 = 0x4000000;
  v60 = &v81;
  v62 = 0LL;
  v68 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v67 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v57,
              0LL,
              0LL) >= 0 )
LABEL_32:
    *((_BYTE *)this + 18496) = v81 != 0;
  v82 = 0;
  *(_QWORD *)((char *)this + 18500) = 0LL;
  v44 = &v82;
  *((_DWORD *)this + 4627) = 0;
  v43[0] = 3;
  v43[1] = 1;
  Current = DXGPROCESS::GetCurrent(v11, v10);
  if ( Current )
    v15 = (_QWORD *)*((_QWORD *)Current + 11);
  else
    v15 = 0LL;
  if ( v15 && (v16 = (__int64 (__fastcall *)(_DWORD *))v15[44]) != 0LL && (v17 = v16(v43), v18 = v17, v17 < 0) )
  {
    v37 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v37 + 24) = v2;
    *(_QWORD *)(v37 + 32) = v18;
    WdLogEvent5_WdError(v37);
    v19 = 0;
    v82 = 0;
  }
  else
  {
    v19 = v82;
  }
  *((_BYTE *)this + 18489) = v19;
  if ( v15 )
  {
    v20 = (__int64 (*)(void))v15[42];
    if ( v20 )
      *((_QWORD *)this + 2314) = v20();
    v21 = (__int64 (*)(void))v15[48];
    if ( v21 )
      *((_QWORD *)this + 2315) = v21();
  }
  v22 = DXGPROCESS::GetCurrent(v14, v13);
  *((_QWORD *)this + 2330) = v22;
  *((_BYTE *)v22 + 344) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v24, v23);
  *((_QWORD *)this + 2329) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 38048) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2329));
  v29 = (unsigned __int8)PsIsHostSilo(ProcessServerSilo) == 0;
  *((_BYTE *)this + 18493) = v29;
  if ( v29 )
  {
    v84 = 0;
    v69 = 0LL;
    v71 = L"DisableContainerSessionVersionCheck";
    v72 = &v84;
    v80 = 0LL;
    v70 = 292;
    v73 = 67108868;
    v74 = 0LL;
    v75 = 0;
    v76 = 0LL;
    v77 = 0;
    v78 = 0LL;
    v79 = 0LL;
    HostSilo = PsGetHostSilo();
    v39 = PsAttachSiloToCurrentThread(HostSilo);
    v40 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v69, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v39);
    if ( v40 < 0 || !v84 )
      *((_BYTE *)this + 18494) = 1;
  }
  *((_DWORD *)this + 4676) = 0;
  *((_QWORD *)this + 2339) = 0LL;
  *((_BYTE *)this + 18495) = 1;
  *((_QWORD *)this + 2367) = this;
  EventHandle = 0LL;
  v30 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2341) = v30;
  if ( v30 )
  {
    KeSetEvent(v30, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2341));
    ZwClose(EventHandle);
  }
  else
  {
    v41 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
    *(_QWORD *)(v41 + 24) = v2;
    WdLogEvent5_WdLowResource(v41);
  }
  memset(v4, 0, 0x80uLL);
  return this;
}
