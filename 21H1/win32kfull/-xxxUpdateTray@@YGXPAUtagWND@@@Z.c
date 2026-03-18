/*
 * XREFs of ?xxxUpdateTray@@YGXPAUtagWND@@@Z @ 0x19ED6
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     _xxxSetTrayWindow@8 @ 0x13758 (_xxxSetTrayWindow@8.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _Is31TrayWindow@4 @ 0x19C56C (_Is31TrayWindow@4.c)
 */

void __fastcall xxxUpdateTray(int *a1)
{
  int *v1; // esi
  int *v2; // ebx
  int v3; // edi
  int *i; // ecx
  int v5; // edx
  _BYTE *v6; // eax
  int v7; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // ecx
  char v11; // cl
  int v12; // [esp+10h] [ebp-10h] BYREF
  int *v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int *v15; // [esp+1Ch] [ebp-4h]

  v1 = a1;
  v15 = a1;
  v2 = a1;
  v3 = a1[5];
  if ( (*(_BYTE *)(v3 + 23) & 0x10) != 0 )
  {
    for ( i = (int *)a1[16]; i; i = (int *)i[16] )
    {
      if ( (*(_BYTE *)(i[5] + 23) & 0x10) != 0 )
        v2 = i;
    }
    if ( *(_DWORD *)(v2[2] + 236) == _gpqForeground
      && (*(_BYTE *)(_gpsi + 1720) & 8) != 0
      && (((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0
       || *(_DWORD *)(*(_DWORD *)(v2[3] + 4) + 96))
      && _IsTopLevelWindow(v2)
      && ((*(_BYTE *)(v2[5] + 23) & 0x10) != 0 || (*(_BYTE *)(v3 + 18) & 4) != 0) )
    {
      v12 = 0;
      v5 = 1;
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v6 = (_BYTE *)v2[5];
        if ( (v6[13] & 2) != 0 )
          break;
        if ( (char)v6[16] < 0 )
        {
          v1 = 0;
          goto LABEL_16;
        }
        if ( (v6[12] & 0x40) != 0 || (v11 = v6[22], (v11 & 0xA) != 0) && ((v11 & 0xC0) != 0 || (v6[23] & 0x20) != 0) )
        {
          v7 = Is31TrayWindow(v2);
          goto LABEL_15;
        }
        if ( !v5 )
          return;
        v2 = (int *)v2[27];
        if ( !v2 )
          return;
        v5 = 0;
      }
      if ( (*(_BYTE *)(v1[5] + 13) & 2) == 0 || !IsTrayWindow(v1) )
      {
        v7 = IsTrayWindow(v2);
LABEL_15:
        v1 = v7 != 0 ? v2 : 0;
      }
LABEL_16:
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v12 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v12;
      v13 = v1;
      if ( v1 )
      {
        HMLockObject(v1);
        v10 = v1[3];
      }
      else
      {
        v10 = v2[3];
      }
      xxxSetTrayWindow(v10, v1);
      ThreadUnlock1();
      v1 = v15;
    }
    if ( !v1[16] || (*(_BYTE *)(v1[5] + 18) & 4) != 0 )
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 19, *v1);
    else
      PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 23, *v1);
  }
}
