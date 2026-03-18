/*
 * XREFs of _NtUserPhysicalToLogicalPoint@8 @ 0x16781D
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DCEPtInRect@12 @ 0x150BB6 (_DCEPtInRect@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserPhysicalToLogicalPoint(int a1, int *a2)
{
  int v2; // ebx
  int v3; // esi
  int *v4; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // eax
  PKTHREAD v11; // eax
  PKTHREAD v12; // eax
  unsigned int v13; // esi
  int v14; // esi
  int v15; // eax
  int v17; // [esp+10h] [ebp-3Ch] BYREF
  int v18; // [esp+14h] [ebp-38h]
  int v19; // [esp+24h] [ebp-28h]
  int v20; // [esp+2Ch] [ebp-20h]
  int v21; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]
  int v23; // [esp+54h] [ebp+8h]
  int v24; // [esp+58h] [ebp+Ch]

  v2 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  v20 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = ValidateHwnd(a1);
  v23 = v3;
  if ( v3 )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (int *)_MmUserProbeAddress;
    if ( (unsigned int)a2 < _MmUserProbeAddress )
      v4 = a2;
    v17 = *v4;
    v18 = v4[1];
    ms_exc.registration.TryLevel = -2;
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v7 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v7) + 260) + 148) & 0x20) == 0 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184);
        v9 = (v8 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8);
        v3 = v23;
        if ( (v9 & 0x1FF) != 0 )
          goto LABEL_15;
        if ( (*(_DWORD *)(*(_DWORD *)(v23 + 20) + 184) & 0xF) != 2
          || (v24 = 1, (*(_DWORD *)(*(_DWORD *)(v23 + 20) + 184) & 0x20000000) == 0) )
        {
          v24 = 0;
        }
        v10 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
           && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0;
        if ( v24 != v10 )
        {
LABEL_15:
          v21 = v17;
          v20 = v18;
        }
      }
    }
    TransformPointBetweenCoordinateSpaces(&v17, &v17, v3, 0);
    if ( DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v17, v18) )
    {
      v11 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 260) + 148) & 1) == 0 )
      {
        v12 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v12) + 260) + 148) & 0x20) == 0 )
        {
          v13 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184);
          if ( (((v13 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
            || ((*(_DWORD *)(*(_DWORD *)(v23 + 20) + 184) & 0xF) != 2
             || (*(_DWORD *)(*(_DWORD *)(v23 + 20) + 184) & 0x20000000) == 0
              ? (v14 = 0)
              : (v14 = 1),
                (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
             || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
              ? (v15 = 0)
              : (v15 = 1),
                v14 != v15) )
          {
            v17 = v21;
            v18 = v20;
          }
        }
      }
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      *a2 = *a2;
      a2[1] = a2[1];
      *a2 = v17;
      a2[1] = v18;
      v2 = 1;
      v19 = 1;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
