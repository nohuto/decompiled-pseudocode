/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _DestroyThreadsHotKeys@0 @ 0x830BA (_DestroyThreadsHotKeys@0.c)
 *     __UnregisterHotKey@8 @ 0xCA2CC (__UnregisterHotKey@8.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z @ 0xC8F5A (-HKRemoveHotkeyOrMakePlaceholder@@YG_NPAPAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 *     ??$IsHotkeyQueryMatch@PAUtagCHILDHOTKEY@@@@YG_NPAUtagCHILDHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x155CB4 (--$IsHotkeyQueryMatch@PAUtagCHILDHOTKEY@@@@YG_NPAUtagCHILDHOTKEY@@PAUtagTHREADINFO@@PAUtagWND@@H.c)
 */

char __fastcall HKRemoveMatchingHotkeys(struct tagHOTKEY *a1, struct tagHOTKEY *a2, struct tagHOTKEY *a3, int a4)
{
  struct tagHOTKEY *v4; // esi
  char v5; // dl
  struct tagHOTKEY ***v6; // ecx
  void (__stdcall *v7)(int); // edi
  unsigned int v8; // eax
  int v9; // ebx
  struct tagHOTKEY **v10; // ecx
  int v11; // edx
  bool v12; // zf
  struct tagHOTKEY **v13; // esi
  char v14; // al
  struct tagHOTKEY **v15; // ebx
  struct tagHOTKEY *v16; // ecx
  struct tagHOTKEY ***v17; // eax
  int v18; // ecx
  struct tagHOTKEY **v20; // [esp+0h] [ebp-30h]
  bool v21; // [esp+4h] [ebp-2Ch]
  char v22; // [esp+12h] [ebp-1Eh]
  char v23; // [esp+13h] [ebp-1Dh]
  int v25; // [esp+18h] [ebp-18h]
  unsigned int v27; // [esp+24h] [ebp-Ch]
  struct tagHOTKEY ***v28; // [esp+28h] [ebp-8h]
  struct tagHOTKEY **v29; // [esp+2Ch] [ebp-4h]

  v4 = a1;
  v5 = 0;
  v6 = &gphkHashTable;
  v22 = 0;
  v7 = (void (__stdcall *)(int))Win32FreePool;
  v8 = 0;
  v28 = &gphkHashTable;
  v27 = 0;
  do
  {
    v9 = (int)v6;
    v10 = *v6;
    v25 = v9;
    if ( !v10 )
      goto LABEL_29;
    do
    {
      v11 = a4;
      if ( a4 )
      {
        switch ( a4 )
        {
          case 1:
            v12 = v10[2] == a2;
            goto LABEL_10;
          case 2:
            break;
          case 3:
            if ( *v10 != v4 )
              goto LABEL_14;
            break;
          case 4:
            goto LABEL_11;
          default:
            goto LABEL_14;
        }
        if ( v10[2] != a2 )
          goto LABEL_14;
        v12 = v10[5] == a3;
      }
      else
      {
        v12 = *v10 == v4;
      }
LABEL_10:
      if ( v12 )
      {
LABEL_11:
        if ( !HKRemoveHotkeyOrMakePlaceholder(v20) )
        {
          v9 = *(_DWORD *)v9 + 24;
          v25 = v9;
        }
        v5 = 1;
        v22 = 1;
        goto LABEL_27;
      }
LABEL_14:
      v13 = (struct tagHOTKEY **)v10[7];
      v14 = 0;
      v29 = v10 + 7;
      v23 = 0;
      if ( v13 != v10 + 7 )
      {
        do
        {
          v15 = (struct tagHOTKEY **)*v13;
          if ( (unsigned __int8)IsHotkeyQueryMatch<tagCHILDHOTKEY *>(a2, a3, v11) )
          {
            NotifyHotKeyRegistrationChanged(0, (struct tagCHILDHOTKEY *const)v20, v21);
            HMAssignmentUnlock(v13 - 3);
            v16 = *v13;
            if ( *((struct tagHOTKEY ***)*v13 + 1) != v13 || (v17 = (struct tagHOTKEY ***)v13[1], *v17 != v13) )
              __fastfail(3u);
            *v17 = (struct tagHOTKEY **)v16;
            v7 = (void (__stdcall *)(int))Win32FreePool;
            *((_DWORD *)v16 + 1) = v17;
            Win32FreePool(v13 - 4);
            v14 = 1;
            v23 = 1;
          }
          else
          {
            v14 = v23;
            v7 = (void (__stdcall *)(int))Win32FreePool;
          }
          v13 = v15;
          v11 = a4;
        }
        while ( v15 != v29 );
        v9 = v25;
      }
      v18 = *(_DWORD *)v9;
      v5 = v14 | v22;
      v22 |= v14;
      if ( (*(_WORD *)(*(_DWORD *)v9 + 14) & 0x100) != 0 && *(_DWORD *)(v18 + 28) == v18 + 28 )
      {
        *(_DWORD *)v9 = *(_DWORD *)(v18 + 24);
        v7(v18);
        v5 = v22;
      }
      else
      {
        v9 = v18 + 24;
        v25 = v18 + 24;
      }
      v4 = a1;
LABEL_27:
      v10 = *(struct tagHOTKEY ***)v9;
    }
    while ( *(_DWORD *)v9 );
    v8 = v27;
LABEL_29:
    v8 += 4;
    v6 = v28 + 1;
    v27 = v8;
    ++v28;
  }
  while ( v8 < 0x200 );
  return v5;
}
