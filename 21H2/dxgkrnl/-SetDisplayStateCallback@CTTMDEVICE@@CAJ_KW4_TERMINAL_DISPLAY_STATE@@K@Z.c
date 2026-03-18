/*
 * XREFs of ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x1C03485B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C0390148 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall CTTMDEVICE::SetDisplayStateCallback(struct _EX_RUNDOWN_REF *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v6; // rdi
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  unsigned int v9; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned __int8 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rax
  const wchar_t *v16; // r9
  __int64 v17; // r9
  __int64 result; // rax
  int v19; // ecx
  unsigned int v20; // r15d
  unsigned int v21; // r15d
  unsigned __int64 v22; // rax
  void *v23; // r14
  __int16 v24; // ax
  __int64 v25; // rcx
  struct _EX_RUNDOWN_REF **v26; // rcx
  unsigned int v27; // eax
  int *v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // rsi
  int v31; // ebx
  struct _DEVICE_OBJECT *Count; // r15
  struct _EX_RUNDOWN_REF **v33; // rax
  unsigned int v34; // ecx
  struct _EX_RUNDOWN_REF *v35; // r9
  __int64 v36; // rax
  struct _EX_RUNDOWN_REF *v37; // rbx
  __int64 v38; // rcx
  struct _EX_RUNDOWN_REF *v39; // r8
  struct _EX_RUNDOWN_REF *i; // rbx
  int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // kr00_8
  int v47; // eax
  __int64 v48; // rbx
  int v49; // eax
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rbx
  struct _EX_RUNDOWN_REF **v53; // rbx
  __int64 v54; // rdi
  struct _EX_RUNDOWN_REF *v55; // r9
  __int64 v56; // r8
  struct DXGSESSIONDATA *v57; // rsi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v59; // rcx
  __int64 v60; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D0h]
  unsigned int v62; // [rsp+50h] [rbp-B0h]
  int v63; // [rsp+54h] [rbp-ACh]
  unsigned int v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+5Ch] [rbp-A4h]
  unsigned int v66; // [rsp+5Ch] [rbp-A4h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+60h] [rbp-A0h] BYREF
  int *v68; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF **v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+78h] [rbp-88h] BYREF
  int v71; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EX_RUNDOWN_REF **v72; // [rsp+80h] [rbp-80h]
  struct _EX_RUNDOWN_REF *v73; // [rsp+88h] [rbp-78h]
  struct DXGSESSIONDATA *v74; // [rsp+90h] [rbp-70h]
  _QWORD v75[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v76[10]; // [rsp+F0h] [rbp-10h] BYREF
  int v77[4]; // [rsp+140h] [rbp+40h] BYREF

  v3 = a2;
  v4 = 0;
  v65 = a2;
  v67 = 0LL;
  v68 = v77;
  v6 = a3;
  v64 = -1073741637;
  v63 = 4;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v8
    || (v9 = PsGetCurrentProcessSessionId(v7),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v9),
        v74 = SessionDataForSpecifiedSession,
        (v13 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    LODWORD(v15) = PsGetCurrentProcessSessionId(v59);
    v16 = L"Cannot find the session data for current session 0x%I64x, returning 0x%I64x.";
    v61 = 0LL;
    v60 = -1073741811LL;
    v15 = (unsigned int)v15;
    goto LABEL_86;
  }
  if ( a1 == (struct _EX_RUNDOWN_REF *)0xFFFFFFFFLL )
  {
    v43 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
    if ( v43 != (_DWORD)v6 )
    {
      WdLogSingleEntry2(2LL, v43, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Batch sequence numbers are not match (0x%I64x : 0x%I64x).",
        *((unsigned int *)v13 + 4656),
        v6,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)v13 + 4657) != (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, *((int *)v13 + 4657), v3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The display state from batch is not same as the one from flush (0x%I64x : 0x%I64x).",
        *((int *)v13 + 4657),
        v3,
        0LL,
        0LL,
        0LL);
      v65 = *((_DWORD *)v13 + 4657);
    }
    goto LABEL_49;
  }
  if ( !*((_WORD *)SessionDataForSpecifiedSession + 9317) )
  {
    *((_DWORD *)SessionDataForSpecifiedSession + 4656) = v6;
    *((_DWORD *)SessionDataForSpecifiedSession + 4657) = v3;
    goto LABEL_6;
  }
  v14 = *((_DWORD *)SessionDataForSpecifiedSession + 4656);
  if ( v14 != (_DWORD)v6 )
  {
    WdLogSingleEntry3(2LL, v14, v6, -1073741811LL);
    v15 = *((unsigned int *)v13 + 4656);
    v16 = L"Batch sequence numbers are not match (0x%I64x : 0x%I64x), returning 0x%I64x.";
    v61 = -1073741811LL;
    v60 = v6;
LABEL_86:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, v15, v60, v61, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_DWORD *)v13 + 4657) != (_DWORD)v3 )
  {
    WdLogSingleEntry3(2LL, *((int *)v13 + 4657), v3, -1073741811LL);
    v15 = *((int *)v13 + 4657);
    v16 = L"Batch does not share same display state (0x%I64x : 0x%I64x), returning 0x%I64x.";
    v61 = -1073741811LL;
    v60 = v3;
    goto LABEL_86;
  }
LABEL_6:
  v67 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 6225LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pThis != NULL", 6225LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ExAcquireRundownProtection(a1 + 6) )
    return 3221226166LL;
  v19 = *((unsigned __int16 *)v13 + 9317);
  v20 = *((unsigned __int16 *)v13 + 9316);
  if ( v20 > v19 + 1 )
    goto LABEL_23;
  v21 = v20 + 4;
  if ( v21 >= 0xFFFF )
  {
    WdLogSingleEntry1(3LL, v21);
    goto LABEL_25;
  }
  v22 = 8LL * v21;
  if ( !is_mul_ok(v21, 8uLL) )
    v22 = -1LL;
  v23 = (void *)operator new[](v22, 0x4B677844u, 256LL, v17);
  if ( v23 )
  {
    v24 = *((_WORD *)v13 + 9317);
    if ( v24 )
    {
      memmove(v23, *((const void **)v13 + 2330), 8LL * *((unsigned __int16 *)v13 + 9317));
      operator delete[](*((void **)v13 + 2330));
      v24 = *((_WORD *)v13 + 9317);
    }
    *((_QWORD *)v13 + 2330) = v23;
    LOWORD(v19) = v24;
    *((_WORD *)v13 + 9316) = v21;
LABEL_23:
    *(_QWORD *)(*((_QWORD *)v13 + 2330) + 8LL * (unsigned __int16)v19) = a1;
    ++*((_WORD *)v13 + 9317);
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v21);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v21,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_25:
  v25 = *((_QWORD *)v13 + 2330);
  if ( !v25 )
  {
    v26 = &v67;
    v27 = 1;
    v69 = &v67;
    v62 = 1;
LABEL_27:
    v28 = v77;
    goto LABEL_28;
  }
  *(_QWORD *)(v25 + 8LL * (unsigned __int16)(*((_WORD *)v13 + 9317))++) = a1;
LABEL_49:
  v26 = (struct _EX_RUNDOWN_REF **)*((_QWORD *)v13 + 2330);
  v27 = *((unsigned __int16 *)v13 + 9317);
  v69 = v26;
  v62 = v27;
  if ( v27 <= 4 )
    goto LABEL_27;
  v44 = v27;
  v46 = v27;
  v45 = 4LL * v27;
  if ( !is_mul_ok(v46, 4uLL) )
    v45 = -1LL;
  v68 = (int *)operator new[](v45, 0x4B677844u, 256LL, v12);
  v28 = v68;
  if ( v68 )
  {
    v26 = v69;
    v27 = v44;
    v29 = v44;
    v63 = v44;
    goto LABEL_29;
  }
  WdLogSingleEntry1(6LL, (unsigned int)v44);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate new batch buffer, size = 0x%I64x.",
    v44,
    0LL,
    0LL,
    0LL,
    0LL);
  v26 = v69;
  v28 = v77;
  v68 = v77;
  v27 = v44;
LABEL_28:
  v29 = 4;
LABEL_29:
  v30 = v65;
  while ( 1 )
  {
    v31 = 0;
    v66 = 0;
    Count = 0LL;
    if ( !v27 )
      break;
    v33 = v26;
    v72 = v26;
    v34 = v62;
    do
    {
      if ( v4 >= v29 )
        break;
      v35 = *v33;
      v67 = v35;
      if ( v35 && (!Count || (struct _DEVICE_OBJECT *)v35[9].Count == Count) )
      {
        v36 = _InterlockedExchangeAdd((volatile signed __int32 *)&v35[78], 1u) & 0x1F;
        HIDWORD(v35[v36 + 78].Ptr) = v30;
        v37 = v67 + 111;
        LODWORD(v35[(unsigned int)v36 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        v73 = v37;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v37, 0LL);
        v38 = 0LL;
        v37[1].Count = (ULONG_PTR)KeGetCurrentThread();
        v39 = v37;
        for ( i = v67; (unsigned int)v38 < v4; v38 = (unsigned int)(v38 + 1) )
        {
          if ( v28[v38] == LODWORD(v67[10].Count) )
            break;
        }
        if ( LOBYTE(v67[114].Count) || (unsigned int)v38 < v4 )
        {
          v39[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v39, 0LL);
          KeLeaveCriticalRegion();
          ExReleaseRundownProtection(i + 6);
          v33 = v72;
          v31 = 0;
          *v72 = 0LL;
        }
        else
        {
          if ( !Count )
          {
            Count = (struct _DEVICE_OBJECT *)v67[9].Count;
            ObfReferenceObject(Count);
            v39 = v73;
          }
          HIDWORD(i[114].Ptr) = v30;
          v41 = i[10].Count;
          v31 = 0;
          v42 = v4++;
          v28[v42] = v41;
          v39[1].Count = 0LL;
          ExReleasePushLockExclusiveEx(v39, 0LL);
          KeLeaveCriticalRegion();
          v33 = v72;
        }
        v29 = v63;
        v34 = v62;
      }
      v72 = ++v33;
      ++v66;
    }
    while ( v66 < v34 );
    if ( !Count )
      break;
    if ( (int)v30 < 0 )
      goto LABEL_72;
    if ( (int)v30 <= 1 )
    {
      memset(v76, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v76[1]);
      v76[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v76[3]) = 54;
      LOBYTE(v76[6]) = -1;
      v71 = 4;
      v51 = DxgkPowerOnOffMonitor((__int64)Count, v4, v28, &v71, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v76);
      v64 = v51;
      if ( v51 < 0 )
      {
        v52 = v51;
        WdLogSingleEntry2(2LL, Count, v51);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to power off monitors on device 0x%I64x, (Status = 0x%I64x).",
          (__int64)Count,
          v52,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( (_DWORD)v30 == 2 )
    {
      if ( v4 )
      {
        while ( 1 )
        {
          v49 = DpiBrightnessNotifyMonitorDimming(Count, *v28, v11);
          v64 = v49;
          if ( v49 < 0 )
            break;
          ++v28;
          if ( ++v31 >= v4 )
            goto LABEL_73;
        }
        v50 = v49;
        WdLogSingleEntry3(2LL, (unsigned int)v68[v31], Count, v49);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to notify brightness dimming on target 0x%I64x from device 0x%I64x, (Status = 0x%I64x).",
          (unsigned int)v68[v31],
          (__int64)Count,
          v50,
          0LL,
          0LL);
      }
    }
    else
    {
      if ( (_DWORD)v30 != 3 )
      {
LABEL_72:
        v64 = -1073741811;
        WdLogSingleEntry2(2LL, v30, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Receieved unknown TTM display State 0x%I64x, returning 0x%I64x.",
          v30,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_73;
      }
      memset(v75, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v75[1]);
      v75[8] = MEMORY[0xFFFFF78000000014];
      v70 = 1;
      LODWORD(v75[3]) = 55;
      LOBYTE(v75[6]) = -1;
      v47 = DxgkPowerOnOffMonitor((__int64)Count, v4, v28, &v70, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v75);
      v64 = v47;
      if ( v47 < 0 )
      {
        v48 = v47;
        WdLogSingleEntry2(2LL, Count, v47);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to power on monitors on device 0x%I64x, (Status = 0x%I64x).",
          (__int64)Count,
          v48,
          0LL,
          0LL,
          0LL);
      }
    }
LABEL_73:
    v53 = v69;
    v54 = v62;
    do
    {
      v55 = *v53;
      if ( *v53 && (struct _DEVICE_OBJECT *)v55[9].Count == Count )
      {
        v56 = _InterlockedExchangeAdd((volatile signed __int32 *)&v55[78], 1u) & 0x1F;
        HIDWORD(v55[v56 + 78].Ptr) = v30 | 0x80000000;
        LODWORD(v55[v56 + 79].Count) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
        ExReleaseRundownProtection(*v53 + 6);
        *v53 = 0LL;
        --v4;
      }
      ++v53;
      --v54;
    }
    while ( v54 );
    if ( v4 )
    {
      WdLogSingleEntry1(1LL, 6584LL);
      v4 = 0;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"j == 0", 6584LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v4 = 0;
    }
    ObfDereferenceObject(Count);
    v27 = v62;
    v26 = v69;
    v29 = v63;
    v28 = v68;
  }
  v57 = v74;
  if ( v28 != v77 )
    operator delete[](v28);
  result = v64;
  *((_WORD *)v57 + 9317) = 0;
  return result;
}
