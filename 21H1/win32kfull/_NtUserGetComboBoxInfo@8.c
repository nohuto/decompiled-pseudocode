/*
 * XREFs of _NtUserGetComboBoxInfo@8 @ 0x1625B6
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxGetComboBoxInfo@8 @ 0x1A6E35 (_xxxGetComboBoxInfo@8.c)
 */

int __stdcall NtUserGetComboBoxInfo(int a1, _BYTE *a2)
{
  int v2; // edi
  int ComboBoxInfo; // ebx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v5; // eax
  unsigned int v6; // esi
  int v7; // esi
  int v8; // eax
  int v10; // [esp+18h] [ebp-68h] BYREF
  int v11; // [esp+1Ch] [ebp-64h]
  int v12; // [esp+20h] [ebp-60h]
  void *v13; // [esp+2Ch] [ebp-54h]
  _DWORD v14[14]; // [esp+30h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v13 = a2;
  memset(v14, 0, 0x34u);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v10 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v10;
    v11 = v2;
    HMLockObject(v2);
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *a2 = *a2;
    a2[51] = a2[51];
    v14[0] = *(_DWORD *)a2;
    ms_exc.registration.TryLevel = -2;
    ComboBoxInfo = xxxGetComboBoxInfo(v2, v14);
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
    {
      v5 = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v5) + 260) + 148) & 0x20) == 0 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v2 + 20) + 184);
        if ( (((v6 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
          || ((*(_DWORD *)(*(_DWORD *)(v2 + 20) + 184) & 0xF) != 2
           || (*(_DWORD *)(*(_DWORD *)(v2 + 20) + 184) & 0x20000000) == 0
            ? (v7 = 0)
            : (v7 = 1),
              (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
            ? (v8 = 0)
            : (v8 = 1),
              v7 != v8) )
        {
          TransformRectBetweenCoordinateSpaces(&v14[5], &v14[5], 0, v2);
          TransformRectBetweenCoordinateSpaces(&v14[1], &v14[1], 0, v2);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      qmemcpy(v13, v14, 0x34u);
      ms_exc.registration.TryLevel = -2;
    }
    ThreadUnlock1();
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit();
  return ComboBoxInfo;
}
