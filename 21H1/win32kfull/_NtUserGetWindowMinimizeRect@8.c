/*
 * XREFs of _NtUserGetWindowMinimizeRect@8 @ 0xA7B36
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetWindowMinimizeRect(int a1, ULONG a2)
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *v7; // eax
  int Prop; // eax
  int v10; // edx
  int v11; // esi
  PKTHREAD v12; // eax
  unsigned int v13; // esi
  int v14; // esi
  int v15; // [esp+14h] [ebp-44h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-40h]
  int v17; // [esp+1Ch] [ebp-3Ch]
  int v18; // [esp+24h] [ebp-34h]
  ULONG v19; // [esp+28h] [ebp-30h]
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  int v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h]
  int v23; // [esp+38h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  v19 = a2;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v2 = 1;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = (_DWORD *)ValidateHwnd(a1);
  v4 = v3;
  if ( !v3 || (v5 = *(_WORD *)(v3[5] + 30) & 0x3FFF, v5 == 669) || v5 == 671 )
  {
    v2 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v15;
    v16 = v4;
    HMLockObject(v4);
    if ( v19 )
    {
      if ( IsTrayWindow(v4) )
      {
        v2 = xxxSendMinRectMessages(v4, &v20);
      }
      else
      {
        Prop = _GetProp((int)v4, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
        if ( Prop && (*(_BYTE *)(Prop + 48) & 0x20) != 0 )
        {
          v10 = *(_DWORD *)(Prop + 32);
          v20 = v10;
          v11 = *(_DWORD *)(Prop + 36);
          v21 = v11;
        }
        else
        {
          ParkIcon(v4, &v20);
          v11 = v21;
          v10 = v20;
        }
        v22 = v10 + *(_DWORD *)(_gpsi + 1724);
        v23 = v11 + *(_DWORD *)(_gpsi + 1728);
      }
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
      {
        v12 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v12) + 260) + 148) & 0x20) == 0 )
        {
          v13 = *(_DWORD *)(v4[5] + 184);
          if ( (((v13 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
            goto LABEL_31;
          if ( (*(_DWORD *)(v4[5] + 184) & 0xF) == 2 && (*(_DWORD *)(v4[5] + 184) & 0x20000000) != 0 )
          {
            v14 = 1;
            v18 = 1;
          }
          else
          {
            v18 = 0;
            v14 = 1;
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
          {
            v14 = 0;
          }
          if ( v18 != v14 )
LABEL_31:
            TransformRectBetweenCoordinateSpaces(&v20, &v20, 0, v4);
        }
      }
      if ( v2 )
      {
        ms_exc.registration.TryLevel = 0;
        v7 = (_DWORD *)_MmUserProbeAddress;
        if ( v19 < _MmUserProbeAddress )
          v7 = (_DWORD *)v19;
        *v7 = v20;
        v7[1] = v21;
        v7[2] = v22;
        v7[3] = v23;
        ms_exc.registration.TryLevel = -2;
      }
    }
    else
    {
      v2 = 0;
      UserSetLastError((struct _NT_TIB *)0x57);
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
