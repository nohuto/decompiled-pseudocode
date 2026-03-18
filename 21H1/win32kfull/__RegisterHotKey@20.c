/*
 * XREFs of __RegisterHotKey@20 @ 0xC5F06
 * Callers:
 *     _NtUserRegisterHotKey@16 @ 0xC5E5E (_NtUserRegisterHotKey@16.c)
 *     _SetDebugHotKeys@0 @ 0xD4EF6 (_SetDebugHotKeys@0.c)
 *     ?SetWinlogonHotKeys@@YGXXZ @ 0xD4F54 (-SetWinlogonHotKeys@@YGXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YGXXZ @ 0xD511E (-SetWindowArrangementHotKeys@@YGXXZ.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 *     ?SetPenHotKeys@@YGXXZ @ 0xF0526 (-SetPenHotKeys@@YGXXZ.c)
 * Callees:
 *     _IsShellProcess@4 @ 0x1B0F4 (_IsShellProcess@4.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0xB550A (-HKRemoveMatchingChildHotkeys@@YG_NPAUtagHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType.c)
 *     ?FindHotKey@@YGHPAUtagTHREADINFO@@PAUtagWND@@HIIPAPAUtagHOTKEY@@@Z @ 0xC623E (-FindHotKey@@YGHPAUtagTHREADINFO@@PAUtagWND@@HIIPAPAUtagHOTKEY@@@Z.c)
 *     ?AddSasKey@@YGHII@Z @ 0xEC4F4 (-AddSasKey@@YGHII@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 *     ?HKAddChildHotkey@@YG_NPAUtagTHREADINFO@@PAUtagHOTKEY@@PAUtagWND@@HG@Z @ 0x155D4E (-HKAddChildHotkey@@YG_NPAUtagTHREADINFO@@PAUtagHOTKEY@@PAUtagWND@@HG@Z.c)
 */

BOOL __fastcall _RegisterHotKey(
        struct tagTHREADINFO *a1,
        int a2,
        struct tagTHREADINFO *a3,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2)
{
  struct tagTHREADINFO *v5; // edi
  BOOL v6; // edx
  struct tagWND *v7; // eax
  ULONG_PTR v8; // ebx
  _DWORD *v9; // ecx
  int v10; // ecx
  ULONG_PTR v12; // edx
  struct tagHOTKEY **v13; // esi
  struct tagHOTKEY **v14; // eax
  struct tagHOTKEY **v15; // edi
  int v16; // esi
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  __int16 v20; // ax
  int v21; // ecx
  struct tagCHILDHOTKEY *v22; // [esp-8h] [ebp-30h]
  struct tagCHILDHOTKEY *v23; // [esp-8h] [ebp-30h]
  bool v24; // [esp-4h] [ebp-2Ch]
  bool v25; // [esp-4h] [ebp-2Ch]
  unsigned int v26; // [esp+0h] [ebp-28h]
  unsigned int v27; // [esp+0h] [ebp-28h]
  struct tagHOTKEY **v28; // [esp+4h] [ebp-24h]
  unsigned int v29; // [esp+4h] [ebp-24h]
  struct tagHOTKEY *v30; // [esp+8h] [ebp-20h]
  int v31; // [esp+Ch] [ebp-1Ch]
  BOOL v32; // [esp+14h] [ebp-14h]
  struct tagHOTKEY **v34; // [esp+18h] [ebp-10h]
  bool v35[4]; // [esp+1Ch] [ebp-Ch] BYREF
  int v36; // [esp+20h] [ebp-8h]
  struct tagTHREADINFO *v37; // [esp+24h] [ebp-4h]
  ULONG_PTR BugCheckParameter3a; // [esp+34h] [ebp+Ch]

  *(_DWORD *)v35 = 0;
  v5 = a1;
  v37 = a1;
  if ( PsGetCurrentProcess() != _gpepCSRSS && _grpWinStaList && !CheckWinstaAttributeAccess(0x10u)
    || BugCheckParameter2 == 231 )
  {
    return 0;
  }
  v6 = (BugCheckParameter3 & 0x8000) != 0 && PsGetCurrentProcess() == _gpepCSRSS;
  v7 = (struct tagWND *)(BugCheckParameter3 & 0xF);
  v32 = v6;
  v8 = BugCheckParameter3 & 0x7A00;
  BugCheckParameter3a = (ULONG_PTR)v7;
  v9 = *(_DWORD **)(_gptiCurrent + 232);
  if ( (int)v9[2] >= 0 )
  {
    if ( (v8 & 0x2000) != 0 )
    {
      if ( !IsShellProcess(v9) && !a2 )
      {
        v10 = 5;
LABEL_15:
        UserSetLastError((struct _NT_TIB *)v10);
        return 0;
      }
      v7 = (struct tagWND *)BugCheckParameter3a;
    }
  }
  else
  {
    v8 |= 0x2000u;
  }
  if ( (unsigned int)v5 >= 2 && *((_DWORD *)v5 + 2) != _gptiCurrent )
  {
    v10 = 1408;
    goto LABEL_15;
  }
  v36 = v8 & 0x200;
  if ( (v8 & 0x200) != 0 && (v6 || v5 == (struct tagTHREADINFO *)1) )
    return 0;
  if ( !FindHotKey(a3, v7, BugCheckParameter2, (unsigned int)v35, v26, v28) )
  {
    v16 = *(_DWORD *)v35;
    if ( *(_DWORD *)v35 )
    {
      if ( *(__int16 *)(*(_DWORD *)v35 + 14) < 0 || v32 )
        KeBugCheckEx(
          0x164u,
          0x10u,
          *(_DWORD *)(*(_DWORD *)v35 + 16) | 0x80000000,
          *(unsigned __int16 *)(*(_DWORD *)v35 + 12),
          *(unsigned __int16 *)(*(_DWORD *)v35 + 14));
      *(_WORD *)(*(_DWORD *)v35 + 14) = v8;
      if ( *(_WORD *)(v16 + 12) != (_WORD)BugCheckParameter3a
        || *(_DWORD *)(v16 + 16) != BugCheckParameter2
        || !(_WORD)v36 )
      {
        HKRemoveMatchingChildHotkeys((_DWORD *)v16, 0, 0, 4);
      }
      *(_WORD *)(v16 + 12) = BugCheckParameter3a;
      *(_DWORD *)(v16 + 16) = BugCheckParameter2;
    }
    else
    {
      v19 = Win32AllocPool(36, 1802007381);
      if ( !v19 )
        return 0;
      if ( v32 && !AddSasKey(v27, v29) )
      {
        Win32FreePool(v19);
        KeBugCheckEx(0x164u, 0x10u, BugCheckParameter2, BugCheckParameter3a, (unsigned __int16)v8);
      }
      *(_DWORD *)v19 = _gptiCurrent;
      if ( (unsigned int)v5 < 2 )
      {
        *(_DWORD *)(v19 + 8) = v5;
      }
      else
      {
        *(_DWORD *)(v19 + 8) = 0;
        v25 = (char)v5;
        v23 = (struct tagCHILDHOTKEY *)(v19 + 8);
        HMAssignmentLock(v18, v17);
      }
      *(_DWORD *)(v19 + 20) = a3;
      if ( v31 )
      {
        v20 = 0x8000;
        *(_WORD *)(v19 + 14) = 0x8000;
      }
      else
      {
        v20 = 0;
        *(_WORD *)(v19 + 14) = 0;
      }
      *(_WORD *)(v19 + 14) = v8 | v20;
      *(_WORD *)(v19 + 12) = BugCheckParameter3a;
      *(_DWORD *)(v19 + 16) = BugCheckParameter2;
      *(_DWORD *)(v19 + 4) = _gptiCurrent;
      *(_DWORD *)(v19 + 32) = v19 + 28;
      *(_DWORD *)(v19 + 28) = v19 + 28;
      v21 = *(_BYTE *)(v19 + 16) & 0x7F;
      *(_DWORD *)(v19 + 24) = (&gphkHashTable)[v21];
      (&gphkHashTable)[v21] = (struct tagHOTKEY **)v19;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)1, v23, v25);
    }
    dword_273864 = 0;
    return 1;
  }
  if ( a2 || v32 || v5 == (struct tagTHREADINFO *)1 )
    return 0;
  v13 = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
  v14 = v13;
  if ( v13 )
  {
    v12 = BugCheckParameter3a;
    v15 = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
    do
    {
      if ( *((unsigned __int16 *)v13 + 6) == BugCheckParameter3a )
      {
        v34 = v15;
        if ( v13[4] == (struct tagHOTKEY *)BugCheckParameter2 )
          break;
      }
      v13 = (struct tagHOTKEY **)v13[6];
      v15 = v13;
      v34 = v13;
    }
    while ( v13 );
    v5 = v37;
    v14 = v34;
  }
  if ( !v14 || (*((_WORD *)v13 + 7) & 0x200) == 0 )
  {
    v10 = 1409;
    goto LABEL_15;
  }
  if ( (_WORD)v36 )
  {
    if ( (*((_WORD *)v13 + 7) & 0x100) == 0 )
      return 0;
    v13[2] = 0;
    if ( v5 )
    {
      v24 = (char)v5;
      v22 = (struct tagCHILDHOTKEY *)(v13 + 2);
      HMAssignmentLock(BugCheckParameter2, v12);
    }
    *((_WORD *)v13 + 7) = v8;
    *v13 = v30;
    v13[1] = 0;
    v13[5] = a3;
    NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)1, v22, v24);
    return 1;
  }
  return HKAddChildHotkey(v5, a3, (struct tagWND *)v8, v27, v29);
}
