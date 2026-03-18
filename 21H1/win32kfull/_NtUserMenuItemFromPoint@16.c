/*
 * XREFs of _NtUserMenuItemFromPoint@16 @ 0x166E46
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _xxxMenuItemFromPoint@16 @ 0x1ABB72 (_xxxMenuItemFromPoint@16.c)
 */

int __stdcall NtUserMenuItemFromPoint(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  unsigned int v12; // esi
  int v13; // esi
  int v14; // ecx
  int v16; // [esp+Ch] [ebp-24h] BYREF
  int v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h] BYREF
  int v20; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h]
  _DWORD v22[2]; // [esp+24h] [ebp-Ch] BYREF
  int v23; // [esp+2Ch] [ebp-4h]

  v16 = 0;
  v4 = 1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
    {
      v6 = -1;
      goto LABEL_27;
    }
  }
  else
  {
    v5 = 0;
  }
  v7 = _gptiCurrent;
  v19 = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = &v19;
  v20 = v5;
  if ( v5 )
    HMLockObject(v5);
  SmartObjStackRefBase<tagMENU>::Init(v22, 0);
  v8 = ValidateHmenu(a2);
  v23 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v22, v8);
  if ( SmartObjStackRef<tagMENU>::operator==(v22, v9) )
  {
    v6 = -1;
  }
  else
  {
    if ( v5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0 )
      {
        v11 = KeGetCurrentThread();
        if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 260) + 148) & 0x20) == 0 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 184);
          if ( (((v12 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v13 = (*(_DWORD *)(*(_DWORD *)(v5 + 20) + 184) & 0xF) == 2
             && (*(_DWORD *)(*(_DWORD *)(v5 + 20) + 184) & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0 )
          {
            v4 = 0;
          }
          if ( v13 != v4 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&a3, &a3, v5, 0);
          v7 = _gptiCurrent;
        }
      }
    }
    v14 = v23;
    if ( !v23 )
      v14 = *(_DWORD *)v22[0];
    v16 = *(_DWORD *)(v7 + 228);
    *(_DWORD *)(v7 + 228) = &v16;
    v17 = v14;
    HMLockObject(v14);
    v6 = xxxMenuItemFromPoint(a3, a4);
    ThreadUnlock1();
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v22);
  ThreadUnlock1();
LABEL_27:
  UserSessionSwitchLeaveCrit();
  return v6;
}
