/*
 * XREFs of ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EAFE4
 * Callers:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003DA4C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __fastcall HKRemoveMatchingChildHotkeys(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD *v5; // r14
  char v6; // r10
  _QWORD *v7; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  bool v14; // al
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != (_QWORD *)(a1 + 48) )
  {
    while ( 1 )
    {
      v12 = v7 - 3;
      v13 = (_QWORD *)*v7;
      if ( !a5 )
        break;
      if ( a5 == 1 )
      {
        v14 = v12[1] == a3;
        goto LABEL_15;
      }
      if ( a5 != 2 )
      {
        if ( a5 != 3 )
        {
          if ( a5 == 4 )
            goto LABEL_16;
          goto LABEL_19;
        }
        if ( *v12 != a2 )
          goto LABEL_19;
      }
      if ( v12[1] == a3 && *((_DWORD *)v12 + 5) == a4 )
      {
LABEL_16:
        NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)a1, (struct tagCHILDHOTKEY *const)(v7 - 3), 0);
        HMAssignmentUnlock(v12 + 1);
        v15 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v16 = (_QWORD *)v7[1], (_QWORD *)*v16 != v7) )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        Win32FreePool(v7 - 3);
        v6 = 1;
      }
LABEL_19:
      v7 = v13;
      if ( v13 == v5 )
        return v6;
    }
    if ( *v12 == a2 )
      goto LABEL_16;
    v14 = 0;
LABEL_15:
    if ( v14 )
      goto LABEL_16;
    goto LABEL_19;
  }
  return v6;
}
