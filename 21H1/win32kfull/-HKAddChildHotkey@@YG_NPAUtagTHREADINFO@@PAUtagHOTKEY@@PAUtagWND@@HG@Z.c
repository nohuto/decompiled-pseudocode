/*
 * XREFs of ?HKAddChildHotkey@@YG_NPAUtagTHREADINFO@@PAUtagHOTKEY@@PAUtagWND@@HG@Z @ 0x155D4E
 * Callers:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z @ 0xF1B4A (-NotifyHotKeyRegistrationChanged@@YGXQAUtagHOTKEY@@QAUtagCHILDHOTKEY@@_N@Z.c)
 */

char __userpurge HKAddChildHotkey@<al>(
        int *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagHOTKEY *a4,
        struct tagWND *a5,
        int a6,
        unsigned __int16 a7)
{
  int *v7; // esi
  int *v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ebx
  int **v13; // eax
  int **v14; // ecx
  struct tagCHILDHOTKEY *v16; // [esp-8h] [ebp-1Ch]

  if ( ((unsigned __int16)a5 & 0xBFFF) == 0 )
  {
    v7 = a1 + 7;
    v8 = (int *)a1[7];
    if ( v8 == v7 )
    {
LABEL_6:
      v10 = Win32AllocPoolZInit(24, 1802007381);
      v12 = v10;
      if ( v10 )
      {
        v16 = (struct tagCHILDHOTKEY *)(v10 + 4);
        HMAssignmentLock(v10 + 4, v11);
        *(_DWORD *)v12 = a2;
        *(_DWORD *)(v12 + 12) = a4;
        v13 = (int **)(v12 + 16);
        *(_WORD *)(v12 + 8) = (_WORD)a5;
        v14 = (int **)v7[1];
        if ( *v14 != v7 )
          __fastfail(3u);
        *(_DWORD *)(v12 + 20) = v14;
        *v13 = v7;
        *v14 = (int *)v13;
        v7[1] = (int)v13;
        NotifyHotKeyRegistrationChanged(a1, (struct tagHOTKEY *const)1, v16, (bool)a3);
        return 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v9 = *(v8 - 4);
        if ( (struct tagTHREADINFO *)*(v8 - 3) == a3 )
          break;
        if ( v9 == a2 )
          return 0;
        v8 = (int *)*v8;
        if ( v8 == v7 )
          goto LABEL_6;
      }
      if ( v9 == a2 && (struct tagHOTKEY *)*(v8 - 1) == a4 && *((_WORD *)v8 - 4) != (_WORD)a5 )
      {
        *((_WORD *)v8 - 4) = (_WORD)a5;
        return 1;
      }
    }
  }
  return 0;
}
