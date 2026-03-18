/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964
 * Callers:
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F2D18 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F2E0C (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F3B5C (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // r13d
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  struct tagBWL *v11; // rax
  struct tagBWL *v12; // rbp
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int DpiForSystem; // eax
  INT v20; // eax
  int v21; // edx
  __int64 PrevTaskIndex; // r8
  char *v23; // rdx
  int v24; // ebp
  int v25; // eax
  bool v26; // zf
  int v27; // r14d
  __int64 v28; // rcx
  int v29; // r12d
  int v30; // eax
  int v31; // r13d
  __int64 v32; // r9
  __int64 v33; // rdx
  _DWORD *DPIServerInfo; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i *MonitorRect; // rax
  int v38; // edi
  int v39; // r14d
  __int64 v40; // r9
  unsigned __int64 v41; // xmm0_8
  int v42; // r10d
  int v43; // ecx
  int v44; // r8d
  int v45; // eax
  int v46; // r11d
  int DpiDependentMetric; // [rsp+20h] [rbp-58h]
  HWND *v48; // [rsp+28h] [rbp-50h] BYREF
  __int128 v49[4]; // [rsp+30h] [rbp-48h] BYREF
  int v51; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v48 = 0LL;
  v51 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 464LL);
  v10 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  *a1 = 0LL;
  *(_QWORD *)&v49[0] = v10;
  v11 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(v9 + 24) + 112LL), 2, 0LL);
  v12 = v11;
  if ( !v11 )
  {
LABEL_28:
    LOBYTE(v4) = (_GetKeyState(16LL) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v4, 0LL);
  }
  v13 = _RemoveNonTaskWindows(v11, a2, &v51, &v48);
  if ( v13 < 2 )
  {
    if ( v13 != 1
      || (v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 4), 1), (v8 = v14) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v14 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v14 )
    {
      v8 = *(_QWORD *)(v9 + 168);
    }
LABEL_9:
    FreeHwndList(v12);
    if ( v8 )
      return (struct tagWND *)v8;
    goto LABEL_28;
  }
  v15 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v17 = v15;
  if ( !v15 )
    goto LABEL_9;
  *(_QWORD *)(v15 + 8) = gptiCurrent;
  *(_QWORD *)(v15 + 16) = v12;
  *(_QWORD *)(v15 + 24) = v48;
  *(_DWORD *)(v15 + 40) = v13;
  *(_DWORD *)(v15 + 44) = v13;
  DpiForSystem = GetDpiForSystem(v16);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v20 = EngMulDiv(11, *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 424LL) + 284LL), 96);
  v21 = v51;
  *(_DWORD *)(v17 + 112) = DpiDependentMetric;
  LODWORD(v48) = DpiDependentMetric + v20;
  *(_DWORD *)(v17 + 116) = DpiDependentMetric + v20;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v17, v21, 1, v5 == 0);
  v23 = (char *)v12 + 8 * PrevTaskIndex + 32;
  v24 = v13;
  *(_QWORD *)(v17 + 32) = v23;
  if ( gnFastAltTabColumns < v13 )
    v24 = gnFastAltTabColumns;
  v25 = v13 / v24;
  v26 = v13 == v24 * (v13 / v24);
  v27 = v13 % v24;
  v28 = !v26;
  v29 = v28 + v25;
  if ( (int)v28 + v25 <= gnFastAltTabRows )
  {
    v30 = 0;
  }
  else
  {
    v29 = gnFastAltTabRows;
    v27 = v24;
    *(_DWORD *)(v17 + 44) = v24 * gnFastAltTabRows;
    v30 = 1;
  }
  *(_DWORD *)(v17 + 48) = v30;
  v31 = v24;
  *(_DWORD *)(v17 + 56) = v24;
  if ( v27 )
    v31 = v27;
  *(_DWORD *)(v17 + 60) = v29;
  *(_DWORD *)(v17 + 64) = v31;
  if ( (int)PrevTaskIndex < v24 * v29 )
  {
    v32 = (unsigned int)((int)PrevTaskIndex / v24);
    v28 = (unsigned int)(v24 * ((int)PrevTaskIndex / v24));
    v33 = (unsigned int)((int)PrevTaskIndex % v24);
  }
  else
  {
    v32 = (unsigned int)((v29 >> 2) + 1);
    v33 = (unsigned int)((v24 >> 2) + 1);
    PrevTaskIndex = (unsigned int)(PrevTaskIndex - v24 * ((v29 >> 2) + 1) - v33);
    v4 = PrevTaskIndex;
  }
  *(_DWORD *)(v17 + 52) = v4;
  *(_DWORD *)(v17 + 72) = v32;
  *(_DWORD *)(v17 + 68) = v33;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v28, v33, PrevTaskIndex, v32);
  MonitorRect = (__m128i *)GetMonitorRect(v49, *(__int64 *)&v49[0], v35, v36);
  v38 = DPIServerInfo[1];
  v39 = (int)v48;
  v40 = MonitorRect->m128i_i64[0];
  v41 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v42 = v41 - *(_OWORD *)MonitorRect;
  v43 = (int)v48;
  if ( v42 >= DpiDependentMetric / 2 + DPIServerInfo[4] + (int)v48 * gnFastAltTabColumns + 6 * v38 )
    v42 = DpiDependentMetric / 2 + DPIServerInfo[4] + (_DWORD)v48 * gnFastAltTabColumns + 6 * v38;
  v44 = DPIServerInfo[5];
  *(_DWORD *)(v17 + 76) = v42;
  v45 = v29 * v43 + DpiDependentMetric + v44 / 2;
  v46 = HIDWORD(v41) - HIDWORD(v40);
  if ( v29 != 1 )
    v31 = v24;
  *(_DWORD *)(v17 + 88) = DpiDependentMetric >> 1;
  *(_DWORD *)(v17 + 84) = (v42 + -4 * v38 - v39 * v31) >> 1;
  if ( v46 >= v45 + 2 * v44 )
    v46 = v45 + 2 * v44;
  *(_DWORD *)(v17 + 80) = v46;
  *(_QWORD *)v17 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v17;
  *a1 = (struct tagSwitchWndInfo *)v17;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v17 + 32), 1);
}
