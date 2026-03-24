/*
 * XREFs of _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C012D9A4
 * Callers:
 *     _lambda_3dc479c6339d8ea3367aebfddfa054a6_::_lambda_invoker_cdecl_ @ 0x1C001A3C0 (_lambda_3dc479c6339d8ea3367aebfddfa054a6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00055D4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00097F0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009F18 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     MonitorGetCCDMonitorID @ 0x1C012A0BC (MonitorGetCCDMonitorID.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     MonitorGetMonitorType @ 0x1C012BB78 (MonitorGetMonitorType.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C012E270 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C012FAB0 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall lambda_3a429c02e21bb855f1ec386a1cface2b_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int **v2; // rbx
  bool v3; // r12
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rcx
  char v14; // r14
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // si
  bool v31; // zf
  __int64 v32; // rsi
  __int64 v33; // rdx
  _OWORD *v34; // rax
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  int v45; // eax
  unsigned int v46; // eax
  struct HDXGMONITOR__ *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int MonitorFromHandle; // r14d
  struct DXGMONITOR *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  struct _DEVICE_OBJECT *v61; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  _OWORD *v71; // rax
  _OWORD *v72; // rcx
  __int64 v73; // rdx
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  unsigned int v83; // edx
  unsigned int v84; // r8d
  __int64 v85; // rax
  int v86; // eax
  unsigned int v87; // r8d
  int v88; // eax
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // ecx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned int v108; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int **v109; // [rsp+28h] [rbp-D8h]
  PZZWSTR SymbolicLinkList; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGMONITOR *v111; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v113[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+50h] [rbp-B0h]
  char v115; // [rsp+58h] [rbp-A8h]
  _BYTE v116[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v117[1088]; // [rsp+290h] [rbp+190h] BYREF
  _DWORD v118[108]; // [rsp+6D0h] [rbp+5D0h] BYREF

  v2 = a1;
  v109 = a1;
  v3 = 0;
  v114 = a2;
  v115 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
  if ( *(_DWORD *)(a2 + 200) == 1 && *(_QWORD *)(a2 + 2696) )
  {
    ++**v2;
    v5 = *(_QWORD *)v2[1];
    v6 = **v2;
    if ( *(_DWORD *)(v5 + 4) >= v6 )
    {
      v70 = *(_QWORD *)(v5 + 8) + 560LL * (v6 - 1);
      memset(v116, 0, sizeof(v116));
      v71 = (_OWORD *)v70;
      v72 = v116;
      v73 = 4LL;
      do
      {
        v74 = v72[1];
        *v71 = *v72;
        v75 = v72[2];
        v71[1] = v74;
        v76 = v72[3];
        v71[2] = v75;
        v77 = v72[4];
        v71[3] = v76;
        v78 = v72[5];
        v71[4] = v77;
        v79 = v72[6];
        v71[5] = v78;
        v80 = v72[7];
        v72 += 8;
        v71[6] = v79;
        v71 += 8;
        *(v71 - 1) = v80;
        --v73;
      }
      while ( v73 );
      v81 = v72[1];
      *v71 = *v72;
      v82 = v72[2];
      v71[1] = v81;
      v71[2] = v82;
      *(_QWORD *)v70 = *(_QWORD *)(a2 + 316);
      RtlStringCbCopyNW(
        (char *)(v70 + 8),
        0LL,
        *(char **)(*(_QWORD *)(a2 + 1520) + 8LL),
        **(unsigned __int16 **)(a2 + 1520));
      v83 = *(_DWORD *)(v70 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 2696) + 249LL) != 0 ? 2 : 0);
      *(_DWORD *)(v70 + 556) = v83;
      v84 = v83 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 2696) + 250LL) != 0);
      *(_DWORD *)(v70 + 556) = v84;
      v85 = *(_QWORD *)(a2 + 2696);
      if ( *(_BYTE *)(v85 + 249) && *(_BYTE *)(v85 + 250)
        || (v86 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v86 = 4;
      }
      v87 = v86 | v84 & 0xFFFFFFFB;
      *(_DWORD *)(v70 + 556) = v87;
      *(_DWORD *)(v70 + 528) = *(_DWORD *)(a2 + 2596);
      *(_DWORD *)(v70 + 532) = *(_DWORD *)(*(_QWORD *)(a2 + 2696) + 80LL);
      *(_DWORD *)(v70 + 536) = *(_DWORD *)(a2 + 324);
      *(_DWORD *)(v70 + 540) = *(_DWORD *)(a2 + 328);
      *(_DWORD *)(v70 + 544) = *(_DWORD *)(a2 + 332);
      *(_DWORD *)(v70 + 548) = *(_DWORD *)(a2 + 336);
      *(_DWORD *)(v70 + 552) = *(_DWORD *)(a2 + 340);
      v88 = v87 ^ ((unsigned __int8)v87 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 348))) & 8;
      *(_DWORD *)(v70 + 556) = v88;
      v89 = v88 ^ ((unsigned __int8)v88 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 348))) & 0x10;
      *(_DWORD *)(v70 + 556) = v89;
      v90 = v89 ^ ((unsigned __int8)v89 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 348))) & 0x20;
      *(_DWORD *)(v70 + 556) = v90;
      v91 = v90 ^ ((unsigned __int8)v90 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 348))) & 0x40;
      *(_DWORD *)(v70 + 556) = v91;
      v92 = v91 ^ (v91 ^ (4 * *(_DWORD *)(a2 + 348))) & 0x80;
      *(_DWORD *)(v70 + 556) = v92;
      v93 = v92 ^ (*(_DWORD *)(a2 + 348) ^ v92) & 0x100;
      *(_DWORD *)(v70 + 556) = v93;
      *(_DWORD *)(v70 + 556) = v93 ^ ((unsigned __int16)v93 ^ (unsigned __int16)(*(_DWORD *)(a2 + 348) >> 9)) & 0x200;
      v2 = v109;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 2696) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v112, v7);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
    v9 = *(_QWORD *)(v7 + 80);
    v10 = v9 + 24;
    v11 = *(_QWORD *)(v9 + 24);
    if ( v11 != v9 + 24 )
    {
      v12 = v11 - 8;
      if ( v12 )
      {
        while ( 1 )
        {
          ++*v2[2];
          v8 = *(_QWORD *)v2[1];
          v13 = *v2[2];
          if ( *(_DWORD *)(v8 + 20) >= (unsigned int)v13 )
            break;
LABEL_29:
          v48 = *(_QWORD *)(v12 + 8);
          v12 = v48 - 8;
          if ( v48 == v10 )
            v12 = 0LL;
          if ( !v12 )
            goto LABEL_32;
        }
        v14 = 0;
        v108 = *(_DWORD *)(v12 + 24);
        if ( v108 != -1 )
        {
          v15 = *(_QWORD *)(a2 + 2696);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 96);
            if ( v16 )
            {
              if ( v16 == -168 )
              {
                v99 = WdLogNewEntry5_WdAssertion(v13, v8);
                WdLogEvent5_WdAssertion(v99);
              }
              KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
              v20 = v16 + 128;
              v21 = *(_QWORD *)(v16 + 128);
              if ( v21 != v16 + 128 )
              {
                v17 = 0LL;
                do
                {
                  v22 = v21 - 16;
                  if ( !v21 )
                    v22 = 0LL;
                  if ( !v22 )
                    break;
                  if ( *(_DWORD *)(v22 + 44) == v108 )
                  {
                    if ( *(_DWORD *)(v22 + 432) != 1 )
                      v22 = *(_QWORD *)(v22 + 440);
                    if ( v22 )
                    {
                      if ( v16 == -168 )
                      {
                        v100 = WdLogNewEntry5_WdAssertion(v20, 0LL);
                        WdLogEvent5_WdAssertion(v100);
                      }
                      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
                      if ( *(_DWORD *)(v22 + 432) != 1 )
                      {
                        v101 = WdLogNewEntry5_WdAssertion(v52, v51);
                        WdLogEvent5_WdAssertion(v101);
                      }
                      KeEnterCriticalRegion();
                      ExAcquireResourceSharedLite((PERESOURCE)(v22 + 296), 1u);
                      IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled((DXGMONITOR *)v22);
                      v54 = (struct _ERESOURCE *)(v22 + 296);
                      v30 = IsVirtualModeSuportDisabled;
                      ExReleaseResourceLite(v54);
                      KeLeaveCriticalRegion();
                      goto LABEL_22;
                    }
                    break;
                  }
                  v21 = *(_QWORD *)(v22 + 16);
                }
                while ( v21 != v20 );
              }
              v23 = WdLogNewEntry5_WdTrace(v20, v17, v18, v19);
              v26 = v108;
              *(_QWORD *)(v23 + 32) = v16;
              *(_QWORD *)(v23 + 24) = v26;
              if ( v16 == -168 )
              {
                v102 = WdLogNewEntry5_WdAssertion(v25, v24);
                WdLogEvent5_WdAssertion(v102);
              }
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v16 + 168));
              v29 = WdLogNewEntry5_WdDmmEvent(v28, v27);
              *(_QWORD *)(v29 + 24) = v26;
              *(_QWORD *)(v29 + 32) = a2;
              WdLogEvent5_WdDmmEvent(v29);
              v30 = 0;
LABEL_22:
              if ( v30 )
              {
                v3 = 1;
                v14 = 1;
              }
              else
              {
                v31 = *(_BYTE *)(v15 + 249) == 0;
                v3 = *(_BYTE *)(v15 + 250) == 0;
                v14 = v31;
              }
              v2 = v109;
              goto LABEL_25;
            }
            v95 = WdLogNewEntry5_WdError(v13, v8);
            *(_QWORD *)(v95 + 24) = a2;
            WdLogEvent5_WdError(v95);
            v98 = WdLogNewEntry5_WdAssertion(v97, v96);
            *(_QWORD *)(v98 + 24) = -1073741811LL;
            WdLogEvent5_WdAssertion(v98);
            v14 = 0;
          }
          else
          {
            v94 = WdLogNewEntry5_WdError(v13, v8);
            *(_QWORD *)(v94 + 24) = 9262LL;
            WdLogEvent5_WdError(v94);
          }
          v3 = 0;
        }
LABEL_25:
        v32 = *(_QWORD *)(*(_QWORD *)v2[1] + 24LL) + 1076LL * (*v2[2] - 1);
        memset(v117, 0, 0x434uLL);
        v33 = 8LL;
        v34 = v117;
        v35 = (_OWORD *)v32;
        do
        {
          v36 = v34[1];
          *v35 = *v34;
          v37 = v34[2];
          v35[1] = v36;
          v38 = v34[3];
          v35[2] = v37;
          v39 = v34[4];
          v35[3] = v38;
          v40 = v34[5];
          v35[4] = v39;
          v41 = v34[6];
          v35[5] = v40;
          v42 = v34[7];
          v34 += 8;
          v35[6] = v41;
          v35 += 8;
          *(v35 - 1) = v42;
          --v33;
        }
        while ( v33 );
        v43 = v34[1];
        *v35 = *v34;
        v44 = v34[2];
        v45 = *((_DWORD *)v34 + 12);
        v35[1] = v43;
        v35[2] = v44;
        *((_DWORD *)v35 + 12) = v45;
        *(_QWORD *)v32 = *(_QWORD *)(a2 + 316);
        *(_DWORD *)(v32 + 8) = *(_DWORD *)(v12 + 24);
        *(_DWORD *)(v32 + 1052) = *(_DWORD *)(v12 + 88);
        *(_DWORD *)(v32 + 1072) = (!v3 ? 2 : 0) | (v14 == 0 ? 4 : 0) | *(_DWORD *)(v32 + 1072) & 0xFFFFFFF8 | (*(_QWORD *)(v12 + 112) != 0LL);
        v3 = 0;
        v46 = (DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v12) != 0 ? 0x10 : 0) | *(_DWORD *)(v32 + 1072) & 0xFFFFFFEF;
        *(_DWORD *)(v32 + 1056) = 0;
        *(_DWORD *)(v32 + 1072) = v46;
        *(_DWORD *)(v32 + 1060) = *(_DWORD *)(v12 + 124);
        *(_DWORD *)(v32 + 1064) = *(_DWORD *)(v12 + 128);
        *(_DWORD *)(v32 + 1068) = *(_DWORD *)(v12 + 96);
        v47 = *(struct HDXGMONITOR__ **)(v12 + 112);
        if ( !v47 )
          goto LABEL_28;
        memset(v118, 0, 0x1A4uLL);
        v111 = 0LL;
        MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v47, &v111);
        if ( MonitorFromHandle < 0 )
          goto LABEL_61;
        v58 = v111;
        if ( !v111 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v56, v55);
          WdLogEvent5_WdAssertion(v103);
          v106 = WdLogNewEntry5_WdAssertion(v105, v104);
          WdLogEvent5_WdAssertion(v106);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v58 + 296), 1u);
        if ( *((_DWORD *)v58 + 108) == 1 && (*((_DWORD *)v58 + 10) & 0x10) == 0 )
        {
          v107 = WdLogNewEntry5_WdDmmEvent(v60, v59);
          *(_QWORD *)(v107 + 24) = v58;
          WdLogEvent5_WdDmmEvent(v107);
          ExReleaseResourceLite((PERESOURCE)((char *)v58 + 296));
          KeLeaveCriticalRegion();
          v3 = 0;
          goto LABEL_63;
        }
        memset(&v118[41], 0, 0x100uLL);
        v61 = (struct _DEVICE_OBJECT *)*((_QWORD *)v58 + 7);
        if ( !v61 || !*((_QWORD *)v58 + 12) )
          goto LABEL_54;
        SymbolicLinkList = 0LL;
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v61, 0, &SymbolicLinkList);
        MonitorFromHandle = DeviceInterfaces;
        if ( DeviceInterfaces < 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v64, v63, v65, v66) + 24) = DeviceInterfaces;
        }
        else
        {
          MonitorFromHandle = RtlStringCchCopyW((unsigned __int16 *)&v118[41], 0x80uLL, SymbolicLinkList);
          ExFreePoolWithTag(SymbolicLinkList, 0);
          if ( MonitorFromHandle >= 0 )
          {
            HIWORD(v118[41]) = 92;
LABEL_54:
            MonitorFromHandle = DXGMONITOR::_FillMonitorDeviceInfo(v58, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v118);
            if ( MonitorFromHandle == -1071841279 )
              MonitorFromHandle = 0;
            if ( MonitorFromHandle >= 0 && (v118[5] & 1) == 0 && !LOWORD(v118[9]) )
              v118[5] |= 2u;
          }
        }
        ExReleaseResourceLite((PERESOURCE)((char *)v58 + 296));
        KeLeaveCriticalRegion();
        v3 = 0;
LABEL_61:
        if ( MonitorFromHandle >= 0 )
          RtlStringCchCopyW((unsigned __int16 *)(v32 + 532), 0x104uLL, (const unsigned __int16 *)&v118[41]);
LABEL_63:
        MonitorGetCCDMonitorID(*(struct HDXGMONITOR__ **)(v12 + 112), 0x104u, (unsigned __int16 *)(v32 + 12));
        v67 = (*(_DWORD *)(v32 + 1072) ^ (*(_DWORD *)(v12 + 556) >> 3)) & 8;
        v108 = 0;
        *(_DWORD *)(v32 + 1072) ^= v67;
        if ( (int)MonitorGetMonitorType(*(struct HDXGMONITOR__ **)(v12 + 112), &v108, v68, v69) >= 0 )
        {
          switch ( v108 )
          {
            case 2u:
              *(_DWORD *)(v32 + 1056) = 2;
              break;
            case 3u:
              *(_DWORD *)(v32 + 1056) = 3;
              break;
            case 4u:
              *(_DWORD *)(v32 + 1056) = 4;
              break;
            default:
              v2 = v109;
              if ( v108 == 5 )
                *(_DWORD *)(v32 + 1056) = 5;
              else
                *(_DWORD *)(v32 + 1056) = 1;
              goto LABEL_28;
          }
        }
        v2 = v109;
LABEL_28:
        v10 = v9 + 24;
        goto LABEL_29;
      }
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)(v9 + 64), v8);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v112 + 40), v49);
  }
  if ( v115 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
  return 0LL;
}
