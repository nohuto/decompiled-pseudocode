/*
 * XREFs of _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01A267C
 * Callers:
 *     _lambda_6c26126ad1bc2cece2687303122ecfc1_::_lambda_invoker_cdecl_ @ 0x1C001DF30 (_lambda_6c26126ad1bc2cece2687303122ecfc1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00185E4 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0161C1C (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C01B0200 (MonitorGetCCDMonitorID.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 */

__int64 __fastcall lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator()(__int64 a1, __int64 a2)
{
  bool v3; // r12
  _DWORD *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r15
  _DWORD *v12; // rdi
  unsigned int v13; // edx
  unsigned __int8 v14; // bl
  bool v15; // si
  __int64 v16; // r14
  MONITOR_MGR *v17; // rcx
  __int64 v18; // rbx
  bool IsVirtualModeSupportDisabled; // si
  char v20; // al
  __int64 v21; // r14
  __int64 v22; // rdx
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  BOOL v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rax
  DXGMONITOR *v47; // rbx
  __int64 v48; // rax
  struct _DEVICE_OBJECT *v49; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  NTSTATUS v53; // esi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  __int64 v57; // rbx
  _OWORD *v58; // rax
  _OWORD *v59; // rcx
  __int64 v60; // rdx
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  unsigned int v70; // edx
  unsigned int v71; // r8d
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // r8d
  int v75; // eax
  int v76; // ecx
  int v77; // eax
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct DXGMONITOR *v83; // [rsp+50h] [rbp-B0h] BYREF
  DXGMONITOR *v84; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+68h] [rbp-98h]
  PZZWSTR SymbolicLinkList; // [rsp+70h] [rbp-90h] BYREF
  __int64 v88; // [rsp+78h] [rbp-88h]
  __int64 v89; // [rsp+80h] [rbp-80h]
  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v91[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v92; // [rsp+98h] [rbp-68h]
  char v93; // [rsp+A0h] [rbp-60h]
  _BYTE v94[560]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v95[1088]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD v96[108]; // [rsp+720h] [rbp+620h] BYREF

  v92 = a2;
  v3 = 0;
  v93 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  if ( *(_DWORD *)(a2 + 200) == 1 && *(_QWORD *)(a2 + 2792) )
  {
    v5 = *(_DWORD **)a1;
    v86 = *(_QWORD *)(a1 + 8);
    v6 = v86;
    v7 = ++*v5;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 4LL) >= v7 )
    {
      v57 = *(_QWORD *)(*(_QWORD *)v6 + 8LL) + 560LL * (v7 - 1);
      memset(v94, 0, sizeof(v94));
      v58 = (_OWORD *)v57;
      v59 = v94;
      v60 = 4LL;
      do
      {
        v61 = v59[1];
        *v58 = *v59;
        v62 = v59[2];
        v58[1] = v61;
        v63 = v59[3];
        v58[2] = v62;
        v64 = v59[4];
        v58[3] = v63;
        v65 = v59[5];
        v58[4] = v64;
        v66 = v59[6];
        v58[5] = v65;
        v67 = v59[7];
        v59 += 8;
        v58[6] = v66;
        v58 += 8;
        *(v58 - 1) = v67;
        --v60;
      }
      while ( v60 );
      v68 = v59[1];
      *v58 = *v59;
      v69 = v59[2];
      v58[1] = v68;
      v58[2] = v69;
      *(_QWORD *)v57 = *(_QWORD *)(a2 + 404);
      RtlStringCbCopyNW(
        (char *)(v57 + 8),
        0LL,
        *(char **)(*(_QWORD *)(a2 + 1616) + 8LL),
        **(unsigned __int16 **)(a2 + 1616));
      v70 = *(_DWORD *)(v57 + 556) & 0xFFFFFFFD | (*(_BYTE *)(*(_QWORD *)(a2 + 2792) + 289LL) != 0 ? 2 : 0);
      *(_DWORD *)(v57 + 556) = v70;
      v71 = v70 & 0xFFFFFFFE | (*(_BYTE *)(*(_QWORD *)(a2 + 2792) + 290LL) != 0);
      *(_DWORD *)(v57 + 556) = v71;
      v72 = *(_QWORD *)(a2 + 2792);
      if ( *(_BYTE *)(v72 + 289) && *(_BYTE *)(v72 + 290)
        || (v73 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
      {
        v73 = 4;
      }
      v74 = v73 | v71 & 0xFFFFFFFB;
      *(_DWORD *)(v57 + 556) = v74;
      *(_DWORD *)(v57 + 528) = *(_DWORD *)(a2 + 2692);
      *(_DWORD *)(v57 + 532) = *(_DWORD *)(*(_QWORD *)(a2 + 2792) + 96LL);
      *(_DWORD *)(v57 + 536) = *(_DWORD *)(a2 + 412);
      *(_DWORD *)(v57 + 540) = *(_DWORD *)(a2 + 416);
      *(_DWORD *)(v57 + 544) = *(_DWORD *)(a2 + 420);
      *(_DWORD *)(v57 + 548) = *(_DWORD *)(a2 + 424);
      *(_DWORD *)(v57 + 552) = *(_DWORD *)(a2 + 428);
      v75 = v74 ^ ((unsigned __int8)v74 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 436))) & 8;
      *(_DWORD *)(v57 + 556) = v75;
      v76 = v75 ^ ((unsigned __int8)v75 ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 436))) & 0x10;
      *(_DWORD *)(v57 + 556) = v76;
      v77 = v76 ^ ((unsigned __int8)v76 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 436))) & 0x20;
      *(_DWORD *)(v57 + 556) = v77;
      v78 = v77 ^ ((unsigned __int8)v77 ^ (unsigned __int8)(4 * *(_DWORD *)(a2 + 436))) & 0x40;
      *(_DWORD *)(v57 + 556) = v78;
      v79 = v78 ^ (v78 ^ (4 * *(_DWORD *)(a2 + 436))) & 0x80;
      *(_DWORD *)(v57 + 556) = v79;
      v80 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)*(_DWORD *)(a2 + 436)) & 0x100;
      *(_DWORD *)(v57 + 556) = v80;
      *(_DWORD *)(v57 + 556) = v80 ^ ((unsigned __int16)v80 ^ (unsigned __int16)(*(_DWORD *)(a2 + 436) >> 9)) & 0x200;
      v6 = v86;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 2792) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v90, v8);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 120) + 72LL));
    v9 = *(_QWORD *)(v8 + 120);
    v89 = v9;
    v10 = *(_QWORD *)(v9 + 24);
    v88 = v9 + 24;
    if ( v10 != v9 + 24 )
    {
      v11 = v10 - 8;
      if ( v11 )
      {
        v12 = *(_DWORD **)(a1 + 16);
        while ( *(_DWORD *)(*(_QWORD *)v6 + 20LL) < ++*v12 )
        {
LABEL_36:
          v45 = *(_QWORD *)(v11 + 8);
          v11 = v45 - 8;
          if ( v45 == v88 )
            v11 = 0LL;
          if ( !v11 )
          {
            v9 = v89;
            goto LABEL_40;
          }
        }
        v13 = *(_DWORD *)(v11 + 24);
        v14 = 0;
        v15 = 0;
        if ( v13 == -1 )
        {
LABEL_21:
          v21 = *(_QWORD *)(*(_QWORD *)v86 + 24LL) + 1076LL * (unsigned int)(*v12 - 1);
          memset(v95, 0, 0x434uLL);
          v22 = 8LL;
          v23 = v95;
          v24 = (_OWORD *)v21;
          do
          {
            v25 = v23[1];
            *v24 = *v23;
            v26 = v23[2];
            v24[1] = v25;
            v27 = v23[3];
            v24[2] = v26;
            v28 = v23[4];
            v24[3] = v27;
            v29 = v23[5];
            v24[4] = v28;
            v30 = v23[6];
            v24[5] = v29;
            v31 = v23[7];
            v23 += 8;
            v24[6] = v30;
            v24 += 8;
            *(v24 - 1) = v31;
            --v22;
          }
          while ( v22 );
          v32 = v23[1];
          *v24 = *v23;
          v33 = v23[2];
          v34 = *((_DWORD *)v23 + 12);
          v24[1] = v32;
          v24[2] = v33;
          *((_DWORD *)v24 + 12) = v34;
          *(_QWORD *)v21 = *(_QWORD *)(a2 + 404);
          *(_DWORD *)(v21 + 8) = *(_DWORD *)(v11 + 24);
          *(_DWORD *)(v21 + 1052) = *(_DWORD *)(v11 + 92);
          v35 = 2 * !v3;
          v3 = 0;
          *(_DWORD *)(v21 + 1072) = (32 * (v14 ^ 1)) | v35 & 0xFFFFFFDF | (4 * !v15) & 0xFFFFFFDF | *(_DWORD *)(v21 + 1072) & 0xFFFFFFD8 | (*(_QWORD *)(v11 + 112) != 0LL);
          v36 = *(_QWORD *)(v11 + 40);
          if ( !v36 )
          {
            WdLogSingleEntry0(1LL);
            v36 = *(_QWORD *)(v11 + 40);
          }
          v37 = *(_QWORD *)(v36 + 88);
          v38 = *(_QWORD *)(v37 + 8);
          if ( !v38 )
          {
            WdLogSingleEntry0(1LL);
            v38 = *(_QWORD *)(v37 + 8);
          }
          v39 = *(_QWORD *)(v38 + 16);
          if ( *(_DWORD *)(v39 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v39 + 2792) + 16LL) + 2692LL) < 1105 )
            goto LABEL_33;
          if ( *(_DWORD *)(v11 + 128) == -1 )
          {
            v40 = *(_DWORD *)(v11 + 408);
            if ( v40 != -1 )
            {
              v42 = v40 == 1;
              goto LABEL_34;
            }
            v41 = *(_DWORD *)(v11 + 80);
            if ( v41 < 0 || v41 > 3 && v41 != 14 )
            {
LABEL_33:
              v42 = 0;
              goto LABEL_34;
            }
          }
          v42 = 1;
LABEL_34:
          v43 = *(_DWORD *)(v21 + 1072) & 0xFFFFFFEF;
          *(_DWORD *)(v21 + 1056) = 0;
          *(_DWORD *)(v21 + 1072) = (16 * v42) | v43;
          *(_DWORD *)(v21 + 1060) = *(_DWORD *)(v11 + 124);
          *(_DWORD *)(v21 + 1064) = *(_DWORD *)(v11 + 128);
          *(_DWORD *)(v21 + 1068) = *(_DWORD *)(v11 + 100);
          v44 = *(_QWORD *)(v11 + 112);
          if ( !v44 )
          {
LABEL_35:
            v6 = v86;
            goto LABEL_36;
          }
          memset(v96, 0, 0x1A4uLL);
          MONITOR_MGR::AcquireMonitorShared(&v84, v44);
          v47 = v84;
          if ( v84 )
          {
            if ( *((_DWORD *)v84 + 78) != 1 || *(_BYTE *)(*((_QWORD *)v84 + 25) + 16LL) )
            {
              memset(&v96[41], 0, 0x100uLL);
              v48 = *((_QWORD *)v84 + 25);
              v49 = *(struct _DEVICE_OBJECT **)(v48 + 8);
              if ( !v49 || !*(_QWORD *)(v48 + 56) )
              {
LABEL_53:
                v54 = DXGMONITOR::_FillMonitorDeviceInfo(v47, (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)v96);
                v55 = v54;
                if ( v54 == -1071841279 )
                {
                  v55 = 0;
                }
                else if ( v54 < 0 )
                {
LABEL_58:
                  ExReleaseResourceLite((PERESOURCE)((char *)v47 + 24));
                  KeLeaveCriticalRegion();
                  if ( v55 >= 0 )
                    RtlStringCchCopyW((unsigned __int16 *)(v21 + 532), 0x104uLL, (const unsigned __int16 *)&v96[41]);
                  goto LABEL_60;
                }
                if ( (v96[5] & 1) == 0 && !LOWORD(v96[9]) )
                  v96[5] |= 2u;
                goto LABEL_58;
              }
              SymbolicLinkList = 0LL;
              DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v49, 0, &SymbolicLinkList);
              if ( DeviceInterfaces < 0 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v52, v51) + 24) = DeviceInterfaces;
              }
              else
              {
                v53 = RtlStringCchCopyW((unsigned __int16 *)&v96[41], 0x80uLL, SymbolicLinkList);
                ExFreePoolWithTag(SymbolicLinkList, 0);
                if ( v53 >= 0 )
                {
                  HIWORD(v96[41]) = 92;
                  goto LABEL_53;
                }
              }
LABEL_86:
              RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v84);
LABEL_60:
              MonitorGetCCDMonitorID(*(DXGMONITOR **)(v11 + 112), 0x104u, (unsigned __int16 *)(v21 + 12));
              v56 = (*(_DWORD *)(v21 + 1072) ^ (*(_DWORD *)(v11 + 556) >> 3)) & 8;
              LODWORD(v83) = 0;
              *(_DWORD *)(v21 + 1072) ^= v56;
              if ( (int)MonitorGetMonitorType(*(struct HDXGMONITOR__ **)(v11 + 112)) >= 0 )
              {
                switch ( (_DWORD)v83 )
                {
                  case 2:
                    *(_DWORD *)(v21 + 1056) = 2;
                    break;
                  case 3:
                    *(_DWORD *)(v21 + 1056) = 3;
                    break;
                  case 4:
                    *(_DWORD *)(v21 + 1056) = 4;
                    break;
                  case 5:
                    *(_DWORD *)(v21 + 1056) = 5;
                    break;
                  default:
                    *(_DWORD *)(v21 + 1056) = 1;
                    break;
                }
              }
              goto LABEL_35;
            }
            v81 = 1LL;
            v82 = 7LL;
          }
          else
          {
            v81 = -1073741275LL;
            v82 = 2LL;
          }
          WdLogSingleEntry1(v82, v81);
          goto LABEL_86;
        }
        v16 = *(_QWORD *)(a2 + 2792);
        if ( !v16 )
        {
          WdLogSingleEntry1(2LL, 9372LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The selected adapter is render-only",
            9372LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_21;
        }
        v17 = *(MONITOR_MGR **)(v16 + 112);
        if ( v17 )
        {
          v83 = 0LL;
          if ( (int)MONITOR_MGR::_GetMonitorInstance(v17, v13, 1u, &v83) >= 0 )
          {
            RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v85, (__int64)v83, 0);
            v18 = v85;
          }
          else
          {
            v18 = 0LL;
            v85 = 0LL;
          }
          if ( v18 )
          {
            if ( *(_DWORD *)(v18 + 312) != 1 )
              WdLogSingleEntry0(1LL);
            IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled((DXGMONITOR *)v18);
            ExReleaseResourceLite((PERESOURCE)(v18 + 24));
            KeLeaveCriticalRegion();
            if ( IsVirtualModeSupportDisabled )
            {
              v15 = 1;
              v3 = 1;
LABEL_20:
              v14 = 1;
              goto LABEL_21;
            }
LABEL_18:
            v20 = *(_BYTE *)(v16 + 289);
            v15 = v20 == 0;
            v3 = *(_BYTE *)(v16 + 290) == 0;
            if ( v20 && (*(_DWORD *)(v16 + 24) & 0x20) != 0 )
            {
              v14 = 0;
              goto LABEL_21;
            }
            goto LABEL_20;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, a2);
          v85 = 0LL;
        }
        WdLogSingleEntry1(2LL, -1073741632LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>(&v85);
        goto LABEL_18;
      }
    }
LABEL_40:
    ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v90 + 40));
  }
  if ( v93 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  return 0LL;
}
