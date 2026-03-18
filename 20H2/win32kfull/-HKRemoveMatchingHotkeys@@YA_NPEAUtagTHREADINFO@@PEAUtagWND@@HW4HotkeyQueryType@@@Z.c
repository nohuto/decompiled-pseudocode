/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C002EB80
 * Callers:
 *     _UnregisterHotKey @ 0x1C002E9F0 (_UnregisterHotKey.c)
 *     DestroyThreadsHotKeys @ 0x1C002EB50 (DestroyThreadsHotKeys.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C002F158 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C002F23C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

__int64 __fastcall HKRemoveMatchingHotkeys(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // r10d
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int8 v8; // dl
  __int64 v9; // rbx
  struct tagHOTKEY *v10; // rdi
  struct tagHOTKEY **v11; // rsi
  _QWORD *v13; // r15
  char v14; // al
  struct tagHOTKEY *v15; // rcx
  _QWORD *v16; // r12
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // [rsp+20h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  v19 = 0;
  v9 = 0LL;
  do
  {
    v10 = (struct tagHOTKEY *)(&gphkHashTable)[v9];
    v11 = (struct tagHOTKEY **)&(&gphkHashTable)[v9];
    if ( !v10 )
      goto LABEL_3;
    do
    {
      if ( a4 )
      {
        switch ( a4 )
        {
          case 1:
            if ( *((_QWORD *)v10 + 2) == v6 )
              goto LABEL_8;
            break;
          case 2:
            goto LABEL_20;
          case 3:
            if ( *(_QWORD *)v10 == v7 )
            {
LABEL_20:
              if ( *((_QWORD *)v10 + 2) == v6 && *((_DWORD *)v10 + 8) == v5 )
              {
LABEL_8:
                if ( !HKRemoveHotkeyOrMakePlaceholder(v11) )
                  v11 = (struct tagHOTKEY **)((char *)*v11 + 40);
                v8 = 1;
                v19 = 1;
                goto LABEL_15;
              }
            }
            break;
          case 4:
            goto LABEL_8;
        }
      }
      else if ( *(_QWORD *)v10 == v7 )
      {
        goto LABEL_8;
      }
      v13 = (_QWORD *)*((_QWORD *)v10 + 6);
      v14 = 0;
      if ( v13 == (_QWORD *)((char *)v10 + 48) )
        goto LABEL_13;
      do
      {
        v16 = (_QWORD *)*v13;
        if ( a4 )
        {
          if ( a4 == 1 )
          {
            if ( *(v13 - 2) != v6 )
              goto LABEL_28;
          }
          else if ( a4 != 2 && (a4 != 3 || *(v13 - 3) != v7) || *(v13 - 2) != v6 || *((_DWORD *)v13 - 1) != v5 )
          {
            goto LABEL_28;
          }
        }
        else if ( *(v13 - 3) != v7 )
        {
          goto LABEL_28;
        }
        NotifyHotKeyRegistrationChanged(v10, (struct tagCHILDHOTKEY *const)(v13 - 3), 0);
        HMAssignmentUnlock(v13 - 2);
        v17 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v18 = (_QWORD *)v13[1], (_QWORD *)*v18 != v13) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        Win32FreePool(v13 - 3);
        v7 = a1;
        v14 = 1;
        v6 = a2;
        v5 = a3;
LABEL_28:
        v13 = v16;
      }
      while ( v16 != (_QWORD *)((char *)v10 + 48) );
      v8 = v19;
LABEL_13:
      v15 = *v11;
      v8 |= v14;
      v19 = v8;
      if ( (*((_WORD *)*v11 + 13) & 0x100) != 0
        && *((struct tagHOTKEY **)v15 + 6) == (struct tagHOTKEY *)((char *)v15 + 48) )
      {
        *v11 = (struct tagHOTKEY *)*((_QWORD *)v15 + 5);
        Win32FreePool(v15);
        v8 = v19;
      }
      else
      {
        v11 = (struct tagHOTKEY **)((char *)v15 + 40);
      }
LABEL_15:
      v10 = *v11;
      v7 = a1;
      v6 = a2;
      v5 = a3;
    }
    while ( *v11 );
LABEL_3:
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < 0x80 );
  return v8;
}
