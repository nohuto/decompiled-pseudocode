/*
 * XREFs of _NtUserSetWindowShowState@16 @ 0x16A34E
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOL __stdcall NtUserSetWindowShowState(int a1, unsigned int a2, int a3, struct tagWND *a4)
{
  BOOL v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // ecx
  int v10; // eax
  struct tagWND *v11; // edx
  int *v12; // esi
  int *v13; // esi
  struct tagMONITOR *v14; // eax
  int *MonitorWorkRectForWindow; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  int v20; // edi
  int v22; // [esp-4h] [ebp-94h]
  unsigned int v23; // [esp+0h] [ebp-90h]
  struct tagRECT *v24; // [esp+4h] [ebp-8Ch]
  int v25[4]; // [esp+10h] [ebp-80h] BYREF
  int v26[4]; // [esp+20h] [ebp-70h] BYREF
  int v27; // [esp+34h] [ebp-5Ch] BYREF
  int v28; // [esp+38h] [ebp-58h]
  int v29; // [esp+3Ch] [ebp-54h]
  int *v30; // [esp+44h] [ebp-4Ch]
  _DWORD *v31; // [esp+48h] [ebp-48h]
  struct tagWND *v32; // [esp+4Ch] [ebp-44h]
  int v33; // [esp+50h] [ebp-40h]
  _DWORD v34[4]; // [esp+54h] [ebp-3Ch] BYREF
  int v35[5]; // [esp+64h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v32 = a4;
  v30 = (int *)a4;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  v6 = v5;
  v33 = v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v27 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v27;
      v28 = v6;
      HMLockObject(v6);
      v8 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 248) + 200);
      v31 = v8;
      if ( v8 && IAMThreadAccessGranted(_gptiCurrent) && *(_DWORD *)(_gptiCurrent + 232) == *(_DWORD *)(v8[2] + 232) )
      {
        v10 = *(_DWORD *)(v33 + 8);
        if ( v10 != _gptiCurrent )
        {
          if ( *(_DWORD *)(v10 + 368) )
          {
            v9 = 5023;
            goto LABEL_7;
          }
          if ( a3 )
          {
            v9 = 1004;
            goto LABEL_7;
          }
          if ( a2 <= 5 )
          {
            v11 = v32;
            if ( !v32 )
            {
LABEL_36:
              v4 = xxxSetWindowShowState(v11, v23, v24);
              goto LABEL_37;
            }
            ms_exc.registration.TryLevel = 0;
            v12 = (int *)_MmUserProbeAddress;
            if ( (unsigned int)v32 < _MmUserProbeAddress )
              v12 = (int *)v32;
            v35[0] = *v12;
            v13 = v12 + 1;
            v35[1] = *v13++;
            v35[2] = *v13;
            v35[3] = v13[1];
            v32 = (struct tagWND *)v35;
            v30 = v35;
            ms_exc.registration.TryLevel = -2;
            v14 = _MonitorFromWindowInternal(2, v33, (struct tagWND *)1, v23, (int)v24);
            if ( v14 )
            {
              MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((int)v14, v31, v25);
              v26[0] = *MonitorWorkRectForWindow;
              v26[1] = MonitorWorkRectForWindow[1];
              v26[2] = MonitorWorkRectForWindow[2];
              v26[3] = MonitorWorkRectForWindow[3];
              memset(v34, 0, sizeof(v34));
              if ( IntersectRect(v34, v35, v26) )
              {
                if ( EqualRectInl(v34, v35) )
                {
                  CurrentThread = KeGetCurrentThread();
                  if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) != 0 )
                    goto LABEL_35;
                  v17 = KeGetCurrentThread();
                  if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v17) + 260) + 148) & 0x20) != 0 )
                    goto LABEL_35;
                  v18 = *(_DWORD *)(*(_DWORD *)(v33 + 20) + 184);
                  if ( (((v18 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) == 0 )
                  {
                    if ( (*(_DWORD *)(*(_DWORD *)(v33 + 20) + 184) & 0xF) == 2
                      && (*(_DWORD *)(*(_DWORD *)(v33 + 20) + 184) & 0x20000000) != 0 )
                    {
                      v19 = 1;
                      v20 = 1;
                    }
                    else
                    {
                      v20 = 0;
                      v19 = 1;
                    }
                    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
                    {
                      v19 = 0;
                    }
                    if ( v20 == v19 )
                      goto LABEL_35;
                  }
                  if ( TransformRectBetweenCoordinateSpaces(v35, v35, v33, v31) )
                  {
LABEL_35:
                    v11 = v32;
                    goto LABEL_36;
                  }
                }
              }
            }
          }
        }
        v22 = 87;
      }
      else
      {
        v22 = 5;
      }
      v9 = v22;
LABEL_7:
      UserSetLastError((struct _NT_TIB *)v9);
LABEL_37:
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
