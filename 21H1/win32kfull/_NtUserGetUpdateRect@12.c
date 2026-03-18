/*
 * XREFs of _NtUserGetUpdateRect@12 @ 0xA5990
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserGetUpdateRect(int a1, ULONG a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v6; // eax
  unsigned int v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  int v12; // [esp+14h] [ebp-40h] BYREF
  int v13; // [esp+18h] [ebp-3Ch]
  int v14; // [esp+1Ch] [ebp-38h]
  int UpdateRect; // [esp+24h] [ebp-30h]
  int v16; // [esp+28h] [ebp-2Ch] BYREF
  int v17; // [esp+2Ch] [ebp-28h]
  int v18; // [esp+30h] [ebp-24h]
  int v19; // [esp+34h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v3 = (_DWORD *)a2;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v12 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v12;
    v13 = v4;
    HMLockObject(v4);
    UpdateRect = xxxGetUpdateRect(a3);
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
      {
        v6 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 260) + 148) & 0x20) == 0 )
        {
          v7 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 184);
          if ( (((v7 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
            || ((*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0xF) == 2
             && (*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0x20000000) != 0
              ? (v8 = 1)
              : (v8 = 0),
                (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
             && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0
              ? (v9 = 1)
              : (v9 = 0),
                v8 != v9) )
          {
            TransformRectBetweenCoordinateSpaces(&v16, &v16, 0, v4);
          }
        }
      }
      ms_exc.registration.TryLevel = 0;
      if ( a2 >= _MmUserProbeAddress )
        v3 = (_DWORD *)_MmUserProbeAddress;
      *v3 = v16;
      v3[1] = v17;
      v3[2] = v18;
      v3[3] = v19;
      ms_exc.registration.TryLevel = -2;
    }
    v10 = UpdateRect;
    ThreadUnlock1();
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
