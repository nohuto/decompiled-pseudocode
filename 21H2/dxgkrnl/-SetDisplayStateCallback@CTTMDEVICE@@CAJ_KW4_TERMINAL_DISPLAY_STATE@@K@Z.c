/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029F380
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0177F24 (DxgkPowerOnOffMonitor.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0275FC0 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D1418 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r14d
  unsigned int v23; // r14d
  SIZE_T v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  PVOID v29; // r15
  __int64 v30; // rax
  __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _EX_RUNDOWN_REF **v34; // rcx
  unsigned __int64 v35; // r9
  _DWORD *v36; // r12
  unsigned __int64 v37; // rdx
  struct _DEVICE_OBJECT *Count; // r14
  unsigned int v39; // ebx
  unsigned int v40; // r15d
  unsigned int v41; // eax
  struct _EX_RUNDOWN_REF *v42; // r9
  __int64 v43; // rax
  struct _EX_RUNDOWN_REF *v44; // r13
  struct _EX_RUNDOWN_REF *v45; // r8
  unsigned int v46; // ecx
  struct _EX_RUNDOWN_REF *i; // r13
  bool v48; // zf
  char v49; // r13
  __int64 v50; // rax
  __int64 v51; // rax
  SIZE_T v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // r13
  __int64 v61; // rax
  int *v62; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v63; // rax
  int v64; // eax
  __int64 v65; // rbx
  _QWORD *v66; // rax
  __int64 v67; // r12
  unsigned int *v68; // r13
  int v69; // eax
  __int64 v70; // rbx
  int v71; // eax
  __int64 v72; // r12
  __int64 v73; // rax
  struct _EX_RUNDOWN_REF **v74; // r12
  struct _EX_RUNDOWN_REF *v75; // r9
  __int64 v76; // r8
  __int64 v77; // rax
  struct DXGSESSIONDATA *v78; // rbx
  unsigned int v79; // [rsp+38h] [rbp-D0h]
  char v80; // [rsp+3Ch] [rbp-CCh]
  unsigned __int64 v81; // [rsp+40h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v82; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v83; // [rsp+50h] [rbp-B8h]
  struct _EX_RUNDOWN_REF **v84; // [rsp+58h] [rbp-B0h]
  int v85; // [rsp+60h] [rbp-A8h] BYREF
  int v86; // [rsp+64h] [rbp-A4h] BYREF
  struct _EX_RUNDOWN_REF **v87; // [rsp+68h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v88; // [rsp+70h] [rbp-98h]
  struct DXGSESSIONDATA *v89; // [rsp+78h] [rbp-90h]
  _QWORD v90[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v91[10]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v92[16]; // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  LOWORD(v4) = 0;
  v83 = v92;
  v82 = 0LL;
  v6 = (int)a2;
  v81 = 0xC00000BB00000004uLL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 102);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v89 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14, v13);
    v15 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( a1 != (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    if ( !*((_WORD *)SessionDataForSpecifiedSession + 9309) )
    {
      *((_DWORD *)SessionDataForSpecifiedSession + 4652) = v3;
      *((_DWORD *)SessionDataForSpecifiedSession + 4653) = v6;
      goto LABEL_10;
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4652) == (_DWORD)v3 )
    {
      if ( *((_DWORD *)SessionDataForSpecifiedSession + 4653) == (_DWORD)v6 )
      {
LABEL_10:
        v82 = a1;
        if ( !a1 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v8, v7);
          *(_QWORD *)(v17 + 24) = 6127LL;
          WdLogEvent5_WdAssertion(v17);
        }
        if ( !ExAcquireRundownProtection(a1 + 6) )
          return 3221226166LL;
        v21 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309);
        v22 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9308);
        if ( v22 <= (int)v21 + 1 )
        {
          v23 = v22 + 4;
          if ( v23 >= 0xFFFF )
          {
            v32 = WdLogNewEntry5_WdWarning(v21, v18, v19);
            *(_QWORD *)(v32 + 24) = v23;
            WdLogEvent5_WdWarning(v32);
            goto LABEL_30;
          }
          v24 = 8LL * v23;
          if ( !is_mul_ok(v23, 8uLL) )
            v24 = -1LL;
          v29 = operator new[](v24, 0x4B677844u, PagedPool);
          if ( !v29 )
          {
            v30 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
            *(_QWORD *)(v30 + 24) = v23;
            WdLogEvent5_WdLowResource(v30);
LABEL_30:
            v33 = *((_QWORD *)SessionDataForSpecifiedSession + 2328);
            if ( !v33 )
            {
              v34 = &v82;
              v79 = 1;
              v84 = &v82;
              LODWORD(v35) = 1;
LABEL_32:
              v36 = v92;
              goto LABEL_33;
            }
            *(_QWORD *)(v33 + 8LL * (unsigned __int16)(*((_WORD *)SessionDataForSpecifiedSession + 9309))++) = a1;
            goto LABEL_55;
          }
          v31 = *((_WORD *)SessionDataForSpecifiedSession + 9309);
          if ( v31 )
          {
            memmove(
              v29,
              *((const void **)SessionDataForSpecifiedSession + 2328),
              8LL * *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309));
            operator delete[](*((void **)SessionDataForSpecifiedSession + 2328));
            v31 = *((_WORD *)SessionDataForSpecifiedSession + 9309);
          }
          *((_QWORD *)SessionDataForSpecifiedSession + 2328) = v29;
          LOWORD(v21) = v31;
          *((_WORD *)SessionDataForSpecifiedSession + 9308) = v23;
        }
        *(_QWORD *)(*((_QWORD *)SessionDataForSpecifiedSession + 2328) + 8LL * (unsigned __int16)v21) = a1;
        ++*((_WORD *)SessionDataForSpecifiedSession + 9309);
        return 0LL;
      }
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v20 = *((int *)SessionDataForSpecifiedSession + 4653);
      v15[4] = v6;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v20 = *((unsigned int *)SessionDataForSpecifiedSession + 4652);
      v15[4] = v3;
    }
    v15[3] = v20;
    v15[5] = -1073741811LL;
    goto LABEL_6;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4652) != (_DWORD)v3 )
  {
    v50 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v50 + 24) = *((unsigned int *)SessionDataForSpecifiedSession + 4652);
    *(_QWORD *)(v50 + 32) = v3;
    WdLogEvent5_WdError(v50);
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4653) != (_DWORD)v6 )
  {
    v51 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v51 + 24) = *((int *)SessionDataForSpecifiedSession + 4653);
    *(_QWORD *)(v51 + 32) = v6;
    WdLogEvent5_WdError(v51);
    LODWORD(v6) = *((_DWORD *)SessionDataForSpecifiedSession + 4653);
  }
LABEL_55:
  v34 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)SessionDataForSpecifiedSession + 2328);
  v35 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309);
  v84 = v34;
  v79 = v35;
  if ( (unsigned int)v35 <= 4 )
    goto LABEL_32;
  v52 = 4 * v35;
  v53 = (unsigned int)v35;
  if ( !is_mul_ok(v35, 4uLL) )
    v52 = -1LL;
  v83 = operator new[](v52, 0x4B677844u, PagedPool);
  v36 = v83;
  if ( !v83 )
  {
    v58 = WdLogNewEntry5_WdLowResource(v55, v54, v56, v57);
    *(_QWORD *)(v58 + 24) = v53;
    WdLogEvent5_WdLowResource(v58);
    v36 = v92;
    LODWORD(v35) = v53;
    v83 = v92;
    goto LABEL_60;
  }
  v34 = v84;
  v37 = (unsigned int)v53;
  LODWORD(v81) = v53;
  LODWORD(v35) = v53;
LABEL_34:
  v80 = 0;
  Count = 0LL;
  v39 = 0;
  v40 = 0;
  if ( (_DWORD)v35 )
  {
    v41 = v79;
    v87 = v34;
    while ( 1 )
    {
      if ( v40 >= (unsigned int)v37 )
      {
        v49 = v80;
LABEL_67:
        if ( !Count )
        {
          LOWORD(v4) = 0;
          break;
        }
        if ( v49 )
        {
          if ( (v6 & 0xFFFFFFFC) == 0 && (_DWORD)v6 != 1 )
          {
            v59 = LPMSetTTMDisplayPowerState(v6, (struct _ERESOURCE *)v37);
            v60 = v59;
            if ( v59 < 0 )
            {
              v61 = WdLogNewEntry5_WdError(v34, v37);
              *(_QWORD *)(v61 + 24) = (int)v6;
              *(_QWORD *)(v61 + 32) = v60;
              WdLogEvent5_WdError(v61);
            }
          }
        }
        if ( (int)v6 < 0 )
          goto LABEL_87;
        if ( (int)v6 <= 1 )
        {
          memset(v91, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v91[1]);
          v62 = &v86;
          v91[8] = MEMORY[0xFFFFF78000000014];
          v63 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v91;
          LODWORD(v91[3]) = 54;
          LOBYTE(v91[6]) = -1;
          v86 = 4;
LABEL_78:
          v64 = DxgkPowerOnOffMonitor((__int64)Count, v40, v36, v62, 0, v63);
          v65 = v64;
          HIDWORD(v81) = v64;
          if ( v64 < 0 )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v34, v37);
            v66[3] = Count;
            v66[4] = v65;
            goto LABEL_88;
          }
        }
        else if ( (_DWORD)v6 == 2 )
        {
          v67 = 0LL;
          if ( v40 )
          {
            v68 = (unsigned int *)v83;
            while ( 1 )
            {
              v69 = DpiBrightnessNotifyMonitorDimming(Count, *v68, 1u);
              v70 = v69;
              HIDWORD(v81) = v69;
              if ( v69 < 0 )
                break;
              ++v68;
              v67 = (unsigned int)(v67 + 1);
              if ( (unsigned int)v67 >= v40 )
                goto LABEL_89;
            }
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v34, v37);
            v66[3] = *(unsigned int *)&v83[4 * v67];
            v66[4] = Count;
            v66[5] = v70;
            goto LABEL_88;
          }
        }
        else
        {
          if ( (_DWORD)v6 == 3 )
          {
            memset(v90, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v90[1]);
            v62 = &v85;
            v90[8] = MEMORY[0xFFFFF78000000014];
            v63 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v90;
            LODWORD(v90[3]) = 55;
            LOBYTE(v90[6]) = -1;
            v85 = 1;
            goto LABEL_78;
          }
LABEL_87:
          HIDWORD(v81) = -1073741811;
          v66 = (_QWORD *)WdLogNewEntry5_WdError(v34, v37);
          v66[3] = (int)v6;
          v66[4] = -1073741811LL;
LABEL_88:
          WdLogEvent5_WdError(v66);
        }
LABEL_89:
        if ( v80 )
        {
          if ( (_DWORD)v6 == 1 )
          {
            v71 = LPMSetTTMDisplayPowerState(1, (struct _ERESOURCE *)v37);
            v72 = v71;
            if ( v71 < 0 )
            {
              v73 = WdLogNewEntry5_WdError(v34, v37);
              *(_QWORD *)(v73 + 24) = 1LL;
              *(_QWORD *)(v73 + 32) = v72;
              WdLogEvent5_WdError(v73);
            }
          }
        }
        v74 = v84;
        v4 = v79;
        do
        {
          v75 = *v74;
          if ( *v74 && (struct _DEVICE_OBJECT *)v75[9].Count == Count )
          {
            v76 = _InterlockedExchangeAdd((volatile signed __int32 *)&v75[78], 1u) & 0x1F;
            HIDWORD(v75[v76 + 78].Ptr) = v6 | 0x80000000;
            LODWORD(v75[v76 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
            ExReleaseRundownProtection(*v74 + 6);
            *v74 = 0LL;
            --v40;
          }
          ++v74;
          --v4;
        }
        while ( v4 );
        if ( v40 )
        {
          v77 = WdLogNewEntry5_WdAssertion(v34, v37);
          *(_QWORD *)(v77 + 24) = 6527LL;
          WdLogEvent5_WdAssertion(v77);
        }
        ObfDereferenceObject(Count);
        LODWORD(v35) = v79;
        v36 = v83;
LABEL_60:
        v34 = v84;
LABEL_33:
        v37 = (unsigned int)v81;
        goto LABEL_34;
      }
      v42 = *v34;
      v82 = v42;
      if ( v42 && (!Count || (struct _DEVICE_OBJECT *)v42[9].Count == Count) )
      {
        v43 = _InterlockedExchangeAdd((volatile signed __int32 *)&v42[78], 1u) & 0x1F;
        HIDWORD(v42[v43 + 78].Ptr) = v6;
        v44 = v82 + 111;
        LODWORD(v42[(unsigned int)v43 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v88 = v44;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v44, 0LL);
        v45 = v44;
        v44[1].Count = (ULONG_PTR)KeGetCurrentThread();
        v46 = 0;
        for ( i = v82; v46 < v40; ++v46 )
        {
          if ( v36[v46] == LODWORD(v82[10].Count) )
            break;
        }
        if ( !LOBYTE(v82[114].Count) && v46 >= v40 )
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v82[9].Count;
            ObfReferenceObject(Count);
            v45 = v88;
          }
          HIDWORD(i[114].Ptr) = v6;
          v36[v40++] = i[10].Count;
          v48 = (BYTE4(i[10].Ptr) & 1) == 0;
          v49 = v80;
          if ( !v48 )
            v49 = 1;
          v45[1].Count = 0LL;
          v80 = v49;
          ExReleasePushLockExclusiveEx(v45, 0LL);
          KeLeaveCriticalRegion();
          v41 = v79;
          v34 = v87;
          v37 = (unsigned int)v81;
          goto LABEL_64;
        }
        v45[1].Count = 0LL;
        ExReleasePushLockExclusiveEx(v45, 0LL);
        KeLeaveCriticalRegion();
        ExReleaseRundownProtection(i + 6);
        v34 = v87;
        v41 = v79;
        v37 = (unsigned int)v81;
        *v87 = 0LL;
      }
      v49 = v80;
LABEL_64:
      ++v34;
      ++v39;
      v87 = v34;
      if ( v39 >= v41 )
        goto LABEL_67;
    }
  }
  v78 = v89;
  if ( v36 != (_DWORD *)v92 )
    operator delete[](v36);
  result = HIDWORD(v81);
  *((_WORD *)v78 + 9309) = v4;
  return result;
}
