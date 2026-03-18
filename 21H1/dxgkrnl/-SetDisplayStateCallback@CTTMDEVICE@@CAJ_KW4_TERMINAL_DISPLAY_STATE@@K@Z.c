/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C029A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0163BF4 (DxgkPowerOnOffMonitor.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C02718B0 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02CCAE8 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
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
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  unsigned int v22; // r14d
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  PVOID v28; // r15
  __int64 v29; // rax
  __int16 v30; // ax
  __int64 v31; // rax
  __int64 v32; // rcx
  struct _EX_RUNDOWN_REF **v33; // rcx
  unsigned __int64 v34; // r9
  _DWORD *v35; // r12
  unsigned __int64 v36; // rdx
  struct _DEVICE_OBJECT *Count; // r14
  unsigned int v38; // ebx
  unsigned int v39; // r15d
  unsigned int v40; // eax
  struct _EX_RUNDOWN_REF *v41; // r9
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // r13
  struct _EX_RUNDOWN_REF *v44; // r8
  unsigned int v45; // ecx
  struct _EX_RUNDOWN_REF *i; // r13
  bool v47; // zf
  char v48; // r13
  __int64 v49; // rax
  __int64 v50; // rax
  SIZE_T v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r13
  __int64 v60; // rax
  int *v61; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v62; // rax
  int v63; // eax
  __int64 v64; // rbx
  _QWORD *v65; // rax
  __int64 v66; // r12
  unsigned int *v67; // r13
  int v68; // eax
  __int64 v69; // rbx
  int v70; // eax
  __int64 v71; // r12
  __int64 v72; // rax
  struct _EX_RUNDOWN_REF **v73; // r12
  struct _EX_RUNDOWN_REF *v74; // r9
  __int64 v75; // r8
  __int64 v76; // rax
  struct DXGSESSIONDATA *v77; // rbx
  unsigned int v78; // [rsp+38h] [rbp-D0h]
  char v79; // [rsp+3Ch] [rbp-CCh]
  unsigned __int64 v80; // [rsp+40h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v81; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v82; // [rsp+50h] [rbp-B8h]
  struct _EX_RUNDOWN_REF **v83; // [rsp+58h] [rbp-B0h]
  int v84; // [rsp+60h] [rbp-A8h] BYREF
  int v85; // [rsp+64h] [rbp-A4h] BYREF
  struct _EX_RUNDOWN_REF **v86; // [rsp+68h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v87; // [rsp+70h] [rbp-98h]
  struct DXGSESSIONDATA *v88; // [rsp+78h] [rbp-90h]
  _QWORD v89[10]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v90[10]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v91[16]; // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  LOWORD(v4) = 0;
  v82 = v91;
  v81 = 0LL;
  v6 = (int)a2;
  v80 = 0xC00000BB00000004uLL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 88);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v88 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
    v12 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v12 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v13);
    v14 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v14);
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
        v81 = a1;
        if ( !a1 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v8, v7);
          *(_QWORD *)(v16 + 24) = 6127LL;
          WdLogEvent5_WdAssertion(v16);
        }
        if ( !ExAcquireRundownProtection(a1 + 6) )
          return 3221226166LL;
        v20 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309);
        v21 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9308);
        if ( v21 <= (int)v20 + 1 )
        {
          v22 = v21 + 4;
          if ( v22 >= 0xFFFF )
          {
            v31 = WdLogNewEntry5_WdWarning(v20, v17, v18);
            *(_QWORD *)(v31 + 24) = v22;
            WdLogEvent5_WdWarning(v31);
            goto LABEL_30;
          }
          v23 = 8LL * v22;
          if ( !is_mul_ok(v22, 8uLL) )
            v23 = -1LL;
          v28 = operator new[](v23, 0x4B677844u, PagedPool);
          if ( !v28 )
          {
            v29 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
            *(_QWORD *)(v29 + 24) = v22;
            WdLogEvent5_WdLowResource(v29);
LABEL_30:
            v32 = *((_QWORD *)SessionDataForSpecifiedSession + 2328);
            if ( !v32 )
            {
              v33 = &v81;
              v78 = 1;
              v83 = &v81;
              LODWORD(v34) = 1;
LABEL_32:
              v35 = v91;
              goto LABEL_33;
            }
            *(_QWORD *)(v32 + 8LL * (unsigned __int16)(*((_WORD *)SessionDataForSpecifiedSession + 9309))++) = a1;
            goto LABEL_55;
          }
          v30 = *((_WORD *)SessionDataForSpecifiedSession + 9309);
          if ( v30 )
          {
            memmove(
              v28,
              *((const void **)SessionDataForSpecifiedSession + 2328),
              8LL * *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309));
            operator delete[](*((void **)SessionDataForSpecifiedSession + 2328));
            v30 = *((_WORD *)SessionDataForSpecifiedSession + 9309);
          }
          *((_QWORD *)SessionDataForSpecifiedSession + 2328) = v28;
          LOWORD(v20) = v30;
          *((_WORD *)SessionDataForSpecifiedSession + 9308) = v22;
        }
        *(_QWORD *)(*((_QWORD *)SessionDataForSpecifiedSession + 2328) + 8LL * (unsigned __int16)v20) = a1;
        ++*((_WORD *)SessionDataForSpecifiedSession + 9309);
        return 0LL;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v19 = *((int *)SessionDataForSpecifiedSession + 4653);
      v14[4] = v6;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
      v19 = *((unsigned int *)SessionDataForSpecifiedSession + 4652);
      v14[4] = v3;
    }
    v14[3] = v19;
    v14[5] = -1073741811LL;
    goto LABEL_6;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4652) != (_DWORD)v3 )
  {
    v49 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v49 + 24) = *((unsigned int *)SessionDataForSpecifiedSession + 4652);
    *(_QWORD *)(v49 + 32) = v3;
    WdLogEvent5_WdError(v49);
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4653) != (_DWORD)v6 )
  {
    v50 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v50 + 24) = *((int *)SessionDataForSpecifiedSession + 4653);
    *(_QWORD *)(v50 + 32) = v6;
    WdLogEvent5_WdError(v50);
    LODWORD(v6) = *((_DWORD *)SessionDataForSpecifiedSession + 4653);
  }
LABEL_55:
  v33 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)SessionDataForSpecifiedSession + 2328);
  v34 = *((unsigned __int16 *)SessionDataForSpecifiedSession + 9309);
  v83 = v33;
  v78 = v34;
  if ( (unsigned int)v34 <= 4 )
    goto LABEL_32;
  v51 = 4 * v34;
  v52 = (unsigned int)v34;
  if ( !is_mul_ok(v34, 4uLL) )
    v51 = -1LL;
  v82 = operator new[](v51, 0x4B677844u, PagedPool);
  v35 = v82;
  if ( !v82 )
  {
    v57 = WdLogNewEntry5_WdLowResource(v54, v53, v55, v56);
    *(_QWORD *)(v57 + 24) = v52;
    WdLogEvent5_WdLowResource(v57);
    v35 = v91;
    LODWORD(v34) = v52;
    v82 = v91;
    goto LABEL_60;
  }
  v33 = v83;
  v36 = (unsigned int)v52;
  LODWORD(v80) = v52;
  LODWORD(v34) = v52;
LABEL_34:
  v79 = 0;
  Count = 0LL;
  v38 = 0;
  v39 = 0;
  if ( (_DWORD)v34 )
  {
    v40 = v78;
    v86 = v33;
    while ( 1 )
    {
      if ( v39 >= (unsigned int)v36 )
      {
        v48 = v79;
LABEL_67:
        if ( !Count )
        {
          LOWORD(v4) = 0;
          break;
        }
        if ( v48 )
        {
          if ( (v6 & 0xFFFFFFFC) == 0 && (_DWORD)v6 != 1 )
          {
            v58 = LPMSetTTMDisplayPowerState(v6, (struct _ERESOURCE *)v36);
            v59 = v58;
            if ( v58 < 0 )
            {
              v60 = WdLogNewEntry5_WdError(v33, v36);
              *(_QWORD *)(v60 + 24) = (int)v6;
              *(_QWORD *)(v60 + 32) = v59;
              WdLogEvent5_WdError(v60);
            }
          }
        }
        if ( (int)v6 < 0 )
          goto LABEL_87;
        if ( (int)v6 <= 1 )
        {
          memset(v90, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v90[1]);
          v61 = &v85;
          v90[8] = MEMORY[0xFFFFF78000000014];
          v62 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v90;
          LODWORD(v90[3]) = 54;
          LOBYTE(v90[6]) = -1;
          v85 = 4;
LABEL_78:
          v63 = DxgkPowerOnOffMonitor((__int64)Count, v39, v35, v61, 0, v62);
          v64 = v63;
          HIDWORD(v80) = v63;
          if ( v63 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v33, v36);
            v65[3] = Count;
            v65[4] = v64;
            goto LABEL_88;
          }
        }
        else if ( (_DWORD)v6 == 2 )
        {
          v66 = 0LL;
          if ( v39 )
          {
            v67 = (unsigned int *)v82;
            while ( 1 )
            {
              v68 = DpiBrightnessNotifyMonitorDimming(Count, *v67, 1u);
              v69 = v68;
              HIDWORD(v80) = v68;
              if ( v68 < 0 )
                break;
              ++v67;
              v66 = (unsigned int)(v66 + 1);
              if ( (unsigned int)v66 >= v39 )
                goto LABEL_89;
            }
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v33, v36);
            v65[3] = *(unsigned int *)&v82[4 * v66];
            v65[4] = Count;
            v65[5] = v69;
            goto LABEL_88;
          }
        }
        else
        {
          if ( (_DWORD)v6 == 3 )
          {
            memset(v89, 0, 0x48uLL);
            EtwActivityIdControl(3u, (LPGUID)&v89[1]);
            v61 = &v84;
            v89[8] = MEMORY[0xFFFFF78000000014];
            v62 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v89;
            LODWORD(v89[3]) = 55;
            LOBYTE(v89[6]) = -1;
            v84 = 1;
            goto LABEL_78;
          }
LABEL_87:
          HIDWORD(v80) = -1073741811;
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v33, v36);
          v65[3] = (int)v6;
          v65[4] = -1073741811LL;
LABEL_88:
          WdLogEvent5_WdError(v65);
        }
LABEL_89:
        if ( v79 )
        {
          if ( (_DWORD)v6 == 1 )
          {
            v70 = LPMSetTTMDisplayPowerState(1, (struct _ERESOURCE *)v36);
            v71 = v70;
            if ( v70 < 0 )
            {
              v72 = WdLogNewEntry5_WdError(v33, v36);
              *(_QWORD *)(v72 + 24) = 1LL;
              *(_QWORD *)(v72 + 32) = v71;
              WdLogEvent5_WdError(v72);
            }
          }
        }
        v73 = v83;
        v4 = v78;
        do
        {
          v74 = *v73;
          if ( *v73 && (struct _DEVICE_OBJECT *)v74[9].Count == Count )
          {
            v75 = _InterlockedExchangeAdd((volatile signed __int32 *)&v74[78], 1u) & 0x1F;
            HIDWORD(v74[v75 + 78].Ptr) = v6 | 0x80000000;
            LODWORD(v74[v75 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
            ExReleaseRundownProtection(*v73 + 6);
            *v73 = 0LL;
            --v39;
          }
          ++v73;
          --v4;
        }
        while ( v4 );
        if ( v39 )
        {
          v76 = WdLogNewEntry5_WdAssertion(v33, v36);
          *(_QWORD *)(v76 + 24) = 6527LL;
          WdLogEvent5_WdAssertion(v76);
        }
        ObfDereferenceObject(Count);
        LODWORD(v34) = v78;
        v35 = v82;
LABEL_60:
        v33 = v83;
LABEL_33:
        v36 = (unsigned int)v80;
        goto LABEL_34;
      }
      v41 = *v33;
      v81 = v41;
      if ( v41 && (!Count || (struct _DEVICE_OBJECT *)v41[9].Count == Count) )
      {
        v42 = _InterlockedExchangeAdd((volatile signed __int32 *)&v41[78], 1u) & 0x1F;
        HIDWORD(v41[v42 + 78].Ptr) = v6;
        v43 = v81 + 111;
        LODWORD(v41[(unsigned int)v42 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v87 = v43;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v43, 0LL);
        v44 = v43;
        v43[1].Count = (ULONG_PTR)KeGetCurrentThread();
        v45 = 0;
        for ( i = v81; v45 < v39; ++v45 )
        {
          if ( v35[v45] == LODWORD(v81[10].Count) )
            break;
        }
        if ( !LOBYTE(v81[114].Count) && v45 >= v39 )
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v81[9].Count;
            ObfReferenceObject(Count);
            v44 = v87;
          }
          HIDWORD(i[114].Ptr) = v6;
          v35[v39++] = i[10].Count;
          v47 = (BYTE4(i[10].Ptr) & 1) == 0;
          v48 = v79;
          if ( !v47 )
            v48 = 1;
          v44[1].Count = 0LL;
          v79 = v48;
          ExReleasePushLockExclusiveEx(v44, 0LL);
          KeLeaveCriticalRegion();
          v40 = v78;
          v33 = v86;
          v36 = (unsigned int)v80;
          goto LABEL_64;
        }
        v44[1].Count = 0LL;
        ExReleasePushLockExclusiveEx(v44, 0LL);
        KeLeaveCriticalRegion();
        ExReleaseRundownProtection(i + 6);
        v33 = v86;
        v40 = v78;
        v36 = (unsigned int)v80;
        *v86 = 0LL;
      }
      v48 = v79;
LABEL_64:
      ++v33;
      ++v38;
      v86 = v33;
      if ( v38 >= v40 )
        goto LABEL_67;
    }
  }
  v77 = v88;
  if ( v35 != (_DWORD *)v91 )
    operator delete[](v35);
  result = HIDWORD(v80);
  *((_WORD *)v77 + 9309) = v4;
  return result;
}
