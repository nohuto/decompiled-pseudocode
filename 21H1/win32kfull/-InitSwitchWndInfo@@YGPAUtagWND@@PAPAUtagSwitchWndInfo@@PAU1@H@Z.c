/*
 * XREFs of ?InitSwitchWndInfo@@YGPAUtagWND@@PAPAUtagSwitchWndInfo@@PAU1@H@Z @ 0x15C30E
 * Callers:
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ?NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z @ 0x15C660 (-NextPrevTaskIndex@@YGHPAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YGHPAUtagBWL@@PAUtagWND@@PAHPAPAPAUHWND__@@@Z @ 0x15C758 (-_RemoveNonTaskWindows@@YGHPAUtagBWL@@PAUtagWND@@PAHPAPAPAUHWND__@@@Z.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 */

struct tagWND *__userpurge InitSwitchWndInfo@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagSwitchWndInfo **a3,
        struct tagWND *a4,
        int a5)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // esi
  struct tagBWL *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v14; // edi
  ULONG v15; // eax
  INT DpiForSystem; // eax
  INT v17; // eax
  signed int TargetInfoAsUlong; // edi
  int v19; // edx
  bool v20; // zf
  int v21; // esi
  int Next; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int ProcessDpiServerInfo; // eax
  int *MonitorRect; // eax
  int v30; // esi
  signed int v31; // ecx
  int v32; // ecx
  ULONG v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 KeyState; // ax
  int *v38; // [esp+0h] [ebp-50h]
  int v39; // [esp+0h] [ebp-50h]
  HWND **v40; // [esp+4h] [ebp-4Ch]
  int v41; // [esp+4h] [ebp-4Ch]
  int v42; // [esp+10h] [ebp-40h]
  int DpiDependentMetric; // [esp+10h] [ebp-40h]
  int v45; // [esp+14h] [ebp-3Ch]
  int v46; // [esp+18h] [ebp-38h]
  int v47; // [esp+18h] [ebp-38h]
  ULONG v48; // [esp+1Ch] [ebp-34h] BYREF
  struct _SINGLE_LIST_ENTRY *v49; // [esp+20h] [ebp-30h]
  int PrevTaskIndex; // [esp+24h] [ebp-2Ch] BYREF
  _DWORD *v51; // [esp+28h] [ebp-28h]
  void *v52; // [esp+2Ch] [ebp-24h]
  int v53; // [esp+30h] [ebp-20h]
  int v54; // [esp+34h] [ebp-1Ch]
  int v55; // [esp+38h] [ebp-18h]
  int v56; // [esp+3Ch] [ebp-14h]
  _DWORD v57[4]; // [esp+40h] [ebp-10h] BYREF

  v51 = a2;
  v5 = 0;
  v48 = 0;
  v6 = *(_DWORD *)(_gptiCurrent + 252);
  PrevTaskIndex = 0;
  v49 = (struct _SINGLE_LIST_ENTRY *)_gptiCurrent;
  v46 = v6;
  v52 = *(void **)(GetDispInfo() + 52);
  *v51 = 0;
  v42 = BuildHwndList(*(_DWORD *)(*(_DWORD *)(v6 + 12) + 60), 2, 0);
  if ( !v42 )
  {
LABEL_32:
    KeyState = _GetKeyState(16);
    return (struct tagWND *)_GetNextQueueWindow(a1, KeyState < 0, 0);
  }
  v7 = _RemoveNonTaskWindows((struct tagBWL *)&PrevTaskIndex, (struct tagWND *)&v48, v38, v40);
  v8 = v7;
  if ( v7 < 2 )
  {
    v9 = (struct tagBWL *)v42;
    if ( v7 != 1
      || (v10 = HMValidateHandleNoSecure(*(_DWORD *)(v42 + 16), 1), (v5 = v10) != 0)
      && (*(_BYTE *)(*(_DWORD *)(v10 + 20) + 15) & 7) == 1
      && a1 == v10 )
    {
      v5 = *(_DWORD *)(v46 + 84);
    }
LABEL_10:
    FreeHwndList(v9);
    if ( v5 )
      return (struct tagWND *)v5;
    goto LABEL_32;
  }
  v11 = Win32AllocPoolWithQuota(100, 1818325845);
  v12 = v11;
  if ( !v11 )
  {
    v9 = (struct tagBWL *)v42;
    goto LABEL_10;
  }
  v14 = v42;
  *(_DWORD *)(v11 + 4) = v49;
  v15 = v48;
  *(_DWORD *)(v12 + 8) = v42;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)(v12 + 20) = v8;
  *(_DWORD *)(v12 + 24) = v8;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(5, DpiForSystem);
  v17 = EngMulDiv(11, LOWORD(v49[58].Next[40].Next), 96);
  *(_DWORD *)(v12 + 92) = DpiDependentMetric;
  v47 = DpiDependentMetric + v17;
  *(_DWORD *)(v12 + 96) = DpiDependentMetric + v17;
  PrevTaskIndex = NextPrevTaskIndex((struct tagSwitchWndInfo *)1, a3 == 0, v39, v41);
  *(_DWORD *)(v12 + 16) = v14 + 16 + 4 * PrevTaskIndex;
  TargetInfoAsUlong = WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
  v48 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
  if ( (int)WPP_MAIN_CB.Dpc.TargetInfoAsUlong >= v8 )
  {
    TargetInfoAsUlong = v8;
    v48 = v8;
  }
  v19 = v8 / TargetInfoAsUlong;
  v20 = v8 == TargetInfoAsUlong * (v8 / TargetInfoAsUlong);
  v21 = v8 % TargetInfoAsUlong;
  v45 = v21;
  Next = !v20 + v19;
  v49 = (struct _SINGLE_LIST_ENTRY *)Next;
  if ( Next <= (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    v23 = 0;
  }
  else
  {
    Next = (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    v49 = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    v21 = TargetInfoAsUlong;
    v45 = TargetInfoAsUlong;
    *(_DWORD *)(v12 + 24) = TargetInfoAsUlong * (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    v23 = 1;
  }
  *(_DWORD *)(v12 + 28) = v23;
  *(_DWORD *)(v12 + 36) = TargetInfoAsUlong;
  *(_DWORD *)(v12 + 40) = Next;
  if ( !v21 )
  {
    v21 = TargetInfoAsUlong;
    v45 = TargetInfoAsUlong;
  }
  v24 = PrevTaskIndex;
  *(_DWORD *)(v12 + 44) = v21;
  if ( v24 < TargetInfoAsUlong * Next )
  {
    v25 = v24 / TargetInfoAsUlong;
    v26 = PrevTaskIndex - TargetInfoAsUlong * (v24 / TargetInfoAsUlong);
    v27 = 0;
  }
  else
  {
    v25 = (Next >> 2) + 1;
    v26 = (TargetInfoAsUlong >> 2) + 1;
    v27 = v24 - TargetInfoAsUlong * v25 - v26;
  }
  *(_DWORD *)(v12 + 32) = v27;
  *(_DWORD *)(v12 + 52) = v25;
  *(_DWORD *)(v12 + 48) = v26;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    ProcessDpiServerInfo = GetProcessDpiServerInfo();
  else
    ProcessDpiServerInfo = Get96DpiServerInfo();
  PrevTaskIndex = ProcessDpiServerInfo;
  MonitorRect = GetMonitorRect(v52, v57);
  v53 = *MonitorRect;
  v54 = MonitorRect[1];
  v55 = MonitorRect[2];
  v56 = MonitorRect[3];
  v30 = PrevTaskIndex;
  v52 = *(void **)(PrevTaskIndex + 4);
  v31 = DpiDependentMetric / 2
      + *(_DWORD *)(PrevTaskIndex + 12)
      + 6 * (_DWORD)v52
      + v47 * WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
  PrevTaskIndex = v55 - v53;
  if ( v55 - v53 >= v31 )
    PrevTaskIndex = v31;
  v32 = v56 - v54;
  if ( v56 - v54 >= (int)v49 * v47 + DpiDependentMetric + *(_DWORD *)(v30 + 16) / 2 + 2 * *(_DWORD *)(v30 + 16) )
    v32 = (_DWORD)v49 * v47 + DpiDependentMetric + *(_DWORD *)(v30 + 16) / 2 + 2 * *(_DWORD *)(v30 + 16);
  v33 = v45;
  if ( v49 != (struct _SINGLE_LIST_ENTRY *)1 )
    v33 = v48;
  v34 = v33 * v47;
  v35 = -4 * (_DWORD)v52;
  *(_DWORD *)(v12 + 60) = v32;
  v36 = PrevTaskIndex + v35 - v34;
  *(_DWORD *)(v12 + 56) = PrevTaskIndex;
  *(_DWORD *)(v12 + 64) = v36 >> 1;
  *(_DWORD *)(v12 + 68) = DpiDependentMetric >> 1;
  *(_DWORD *)v12 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v12;
  *v51 = v12;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_DWORD **)(v12 + 16), 1);
}
