/*
 * XREFs of _NtUserGetMenuBarInfo@16 @ 0xB7FC8
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserGetMenuBarInfo(int a1, int a2, int a3, _BYTE *a4)
{
  int v4; // edi
  int MenuBarInfo; // ebx
  int v6; // esi
  int *ThreadWin32Thread; // eax
  int v8; // esi
  int *v9; // eax
  unsigned int v10; // esi
  int v11; // esi
  int v12; // eax
  int v14; // [esp+18h] [ebp-58h] BYREF
  int v15; // [esp+1Ch] [ebp-54h]
  int v16; // [esp+20h] [ebp-50h]
  void *v17; // [esp+2Ch] [ebp-44h]
  PKTHREAD CurrentThread; // [esp+30h] [ebp-40h]
  _DWORD v19[9]; // [esp+34h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v17 = a4;
  memset(v19, 0, 0x20u);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v14 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v14;
    v15 = v4;
    HMLockObject(v4);
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a4 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a4 = *a4;
    a4[31] = a4[31];
    v19[0] = *(_DWORD *)a4;
    ms_exc.registration.TryLevel = -2;
    MenuBarInfo = xxxGetMenuBarInfo(a3, v19);
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v6 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(v6 + 260) + 148) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v9 = (int *)PsGetThreadWin32Thread(CurrentThread);
        if ( v9 )
          v8 = *v9;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(v8 + 260) + 148) & 0x20) == 0 )
      {
        v10 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 184);
        if ( (((v10 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
          || ((*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0xF) != 2
           || (*(_DWORD *)(*(_DWORD *)(v4 + 20) + 184) & 0x20000000) == 0
            ? (v11 = 0)
            : (v11 = 1),
              (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
            ? (v12 = 0)
            : (v12 = 1),
              v11 != v12) )
        {
          TransformRectBetweenCoordinateSpaces(&v19[1], &v19[1], 0, v4);
        }
      }
    }
    if ( MenuBarInfo )
    {
      qmemcpy(v17, v19, 0x20u);
      ms_exc.registration.TryLevel = -2;
    }
    ThreadUnlock1();
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit();
  return MenuBarInfo;
}
