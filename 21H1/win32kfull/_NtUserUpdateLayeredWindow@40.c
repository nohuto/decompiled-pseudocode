/*
 * XREFs of _NtUserUpdateLayeredWindow@40 @ 0xBA93E
 * Callers:
 *     <none>
 * Callees:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 */

int __stdcall NtUserUpdateLayeredWindow(
        int a1,
        int a2,
        ULONG a3,
        ULONG a4,
        int a5,
        struct tagRECT *a6,
        int a7,
        ULONG a8,
        int a9,
        ULONG a10)
{
  _DWORD *v10; // ebx
  int v11; // esi
  struct tagRECT *v12; // ecx
  int *v13; // ecx
  int v14; // ecx
  struct tagWND *v15; // ecx
  int *v16; // eax
  int *v17; // esi
  int *v18; // esi
  int *v19; // eax
  _DWORD *v20; // esi
  int updated; // eax
  struct tagMONITOR *NewMonitor; // eax
  int v24; // edi
  int *v25; // ecx
  int v26; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagRECT *v29; // ecx
  int v30; // edx
  LONG v31[4]; // [esp+10h] [ebp-C4h] BYREF
  _DWORD v32[3]; // [esp+24h] [ebp-B0h] BYREF
  int v33; // [esp+30h] [ebp-A4h] BYREF
  _DWORD *v34; // [esp+34h] [ebp-A0h]
  int v35; // [esp+38h] [ebp-9Ch]
  int v36; // [esp+3Ch] [ebp-98h]
  int v37; // [esp+44h] [ebp-90h]
  int v38; // [esp+48h] [ebp-8Ch]
  ULONG v39; // [esp+4Ch] [ebp-88h]
  int *v40; // [esp+50h] [ebp-84h]
  ULONG v41; // [esp+54h] [ebp-80h]
  ULONG v42; // [esp+58h] [ebp-7Ch]
  int v43; // [esp+5Ch] [ebp-78h] BYREF
  int v44; // [esp+60h] [ebp-74h]
  int v45; // [esp+64h] [ebp-70h] BYREF
  int v46; // [esp+68h] [ebp-6Ch]
  LONG left; // [esp+6Ch] [ebp-68h] BYREF
  LONG top; // [esp+70h] [ebp-64h]
  int *v49; // [esp+74h] [ebp-60h]
  LONG *p_left; // [esp+78h] [ebp-5Ch]
  int *v51; // [esp+7Ch] [ebp-58h]
  int v52; // [esp+80h] [ebp-54h] BYREF
  int v53; // [esp+84h] [ebp-50h] BYREF
  ULONG v54; // [esp+88h] [ebp-4Ch]
  int *v55; // [esp+8Ch] [ebp-48h]
  struct tagRECT *v56; // [esp+90h] [ebp-44h]
  struct tagWND *v57; // [esp+94h] [ebp-40h] BYREF
  _DWORD v58[4]; // [esp+98h] [ebp-3Ch] BYREF
  int v59; // [esp+A8h] [ebp-2Ch] BYREF
  int v60; // [esp+ACh] [ebp-28h]
  int v61; // [esp+B0h] [ebp-24h]
  int v62; // [esp+B4h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+BCh] [ebp-18h]

  v37 = a2;
  v41 = a3;
  v42 = a4;
  v38 = a5;
  v56 = a6;
  v39 = a8;
  v54 = a10;
  left = 0;
  top = 0;
  p_left = 0;
  v45 = 0;
  v46 = 0;
  v49 = 0;
  v43 = 0;
  v44 = 0;
  v57 = 0;
  v40 = 0;
  v52 = 0;
  v51 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v55 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  EnterCrit(0, 1);
  v10 = (_DWORD *)ValidateHwnd(a1);
  if ( !v10 )
  {
    v11 = 0;
    goto LABEL_29;
  }
  v33 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v33;
  v34 = v10;
  HMLockObject(v10);
  v11 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( v56 )
  {
    v12 = (struct tagRECT *)_MmUserProbeAddress;
    if ( (unsigned int)v56 < _MmUserProbeAddress )
      v12 = v56;
    left = v12->left;
    top = v12->top;
    p_left = &left;
  }
  if ( !v42 )
    goto LABEL_11;
  v13 = (int *)_MmUserProbeAddress;
  if ( v42 < _MmUserProbeAddress )
    v13 = (int *)v42;
  v45 = *v13;
  v14 = v13[1];
  v46 = v14;
  v49 = &v45;
  if ( v45 < 0 || v14 < 0 )
  {
    v36 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
LABEL_11:
    if ( v41 )
    {
      v25 = (int *)_MmUserProbeAddress;
      if ( v41 < _MmUserProbeAddress )
        v25 = (int *)v41;
      v43 = *v25;
      v44 = v25[1];
      v15 = (struct tagWND *)&v43;
      v57 = (struct tagWND *)&v43;
      v40 = &v43;
    }
    else
    {
      v15 = v57;
    }
    if ( v39 )
    {
      v16 = (int *)_MmUserProbeAddress;
      if ( v39 < _MmUserProbeAddress )
        v16 = (int *)v39;
      v52 = *v16;
      v51 = &v52;
    }
    if ( v54 )
    {
      v17 = (int *)_MmUserProbeAddress;
      if ( v54 < _MmUserProbeAddress )
        v17 = (int *)v54;
      v59 = *v17;
      v18 = v17 + 1;
      v60 = *v18++;
      v61 = *v18;
      v62 = v18[1];
      v19 = &v59;
      v55 = &v59;
      v11 = 0;
    }
    else
    {
      v19 = v55;
    }
    ms_exc.registration.TryLevel = -2;
    if ( (a9 & 0xFFFFFFD0) == 0 )
    {
      if ( !v19 || *v19 >= 0 && v19[1] >= 0 )
      {
        v53 = 0;
        v54 = 0;
        if ( v15 )
        {
          v26 = v10[14];
          if ( v26 )
          {
            if ( IsTopLevelOrLayeredChildWindow(v10) && !_IsTopLevelWindow(v10) )
            {
              v53 = *(_DWORD *)v57 + *(_DWORD *)(*(_DWORD *)(v26 + 20) + 68);
              v54 = *((_DWORD *)v57 + 1) + *(_DWORD *)(*(_DWORD *)(v26 + 20) + 72);
              v57 = (struct tagWND *)&v53;
            }
          }
        }
        v56 = (struct tagRECT *)ValidateHmonitorNoRip(*(_DWORD *)(v10[5] + 164));
        v20 = (_DWORD *)(v10[5] + 52);
        v58[0] = *v20++;
        v58[1] = *v20++;
        v58[2] = *v20;
        v58[3] = v20[1];
        updated = zzzUpdateLayeredWindow(v10, v37, v57, v49, v38, p_left, a7, v51, a9, v55);
        v11 = 0;
        if ( updated < 0 )
        {
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v11 = 1;
          if ( !EqualRectInl(v58, (const void *)(v10[5] + 52)) )
          {
            memset(v31, 0, sizeof(v31));
            NewMonitor = GetNewMonitor((int)v10, 0, v31);
            v24 = (int)NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != (struct tagMONITOR *)v56 )
              {
                v32[2] = 0;
                CurrentThread = KeGetCurrentThread();
                ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
                v32[0] = *(_DWORD *)(ThreadWin32Thread + 228);
                *(_DWORD *)(ThreadWin32Thread + 228) = v32;
                v32[1] = v24;
                HMLockObject(v24);
                v57 = 0;
                if ( v56 )
                  v29 = (struct tagRECT *)*(unsigned __int16 *)(v56[1].top + 52);
                else
                  v29 = 0;
                v56 = v29;
                v30 = *(unsigned __int16 *)(*(_DWORD *)(v24 + 20) + 52);
                if ( (_WORD)v30 != (_WORD)v29 )
                  xxxAppAdjustDpiCandidateRect(v10, v30, v10[5] + 52, v31);
                if ( ThreadUnlock1() && UpdateMonitorForWindowAndChildren((int)v10, v24, (int *)&v57, 0) )
                  xxxNotifyMonitorChanged(v10, v31, v57, v56);
              }
            }
          }
        }
        goto LABEL_28;
      }
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    UserSetLastError((struct _NT_TIB *)0x57);
  }
LABEL_28:
  ThreadUnlock1();
LABEL_29:
  UserSessionSwitchLeaveCrit();
  return v11;
}
