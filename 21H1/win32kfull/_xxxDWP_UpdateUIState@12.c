/*
 * XREFs of _xxxDWP_UpdateUIState@12 @ 0xA50F8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 */

int __fastcall xxxDWP_UpdateUIState(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // si
  int v6; // eax
  PKTHREAD v7; // eax
  int v8; // eax
  int v9; // eax
  struct tagWND *v10; // ebx
  int v11; // ecx
  int v13; // eax
  struct tagBWL *v14; // esi
  unsigned int *v15; // edi
  unsigned int v16; // ecx
  BOOL v17; // esi
  PKTHREAD v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v24; // eax
  int v25; // esi
  int v26; // [esp+Ch] [ebp-10h] BYREF
  void *v27; // [esp+10h] [ebp-Ch]
  int v28; // [esp+14h] [ebp-8h]
  int v29; // [esp+18h] [ebp-4h]
  BOOL v30; // [esp+24h] [ebp+8h]
  void *v31; // [esp+24h] [ebp+8h]

  v29 = a2;
  v3 = HIWORD(a2);
  v4 = a2;
  if ( (HIWORD(a2) & 0xFFFFFFF8) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0;
  if ( (_WORD)a2 == 3 )
  {
    if ( (char)*_gpsi < 0 )
      return 0;
    v21 = *(_DWORD *)(_gpsi + 6248);
    if ( (v21 & 0x20) != 0 || v21 >= 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
      v24 = *(_DWORD *)(ThreadWin32Thread + 352);
    else
      LOBYTE(v24) = 0;
    if ( (v24 & 2) != 0 )
      return 0;
    v4 = ((*_gpsi & 0x40) != 0) + 1;
    LOBYTE(v3) = 3;
    v29 = v4 | 0x30000;
LABEL_12:
    switch ( v4 )
    {
      case 1u:
        if ( (v3 & 2) != 0 )
          SetOrClrWF(1, a1, 0xB40u, 1);
        if ( (v3 & 1) != 0 )
          SetOrClrWF(1, a1, 0xB80u, 1);
        if ( (v3 & 4) == 0 )
          goto LABEL_18;
        v20 = 1;
        break;
      case 2u:
        if ( (v3 & 2) != 0 )
          SetOrClrWF(0, a1, 0xB40u, 1);
        if ( (v3 & 1) != 0 )
          SetOrClrWF(0, a1, 0xB80u, 1);
        if ( (v3 & 4) == 0 )
          goto LABEL_18;
        v20 = 0;
        break;
      case 3u:
        v25 = *_gpsi & 0x40;
        SetOrClrWF(v25 == 0, a1, 0xB80u, 1);
        SetOrClrWF(v25 == 0, a1, 0xB40u, 1);
        v10 = (struct tagWND *)((char *)&loc_30001 + (v25 != 0));
        goto LABEL_19;
      default:
LABEL_18:
        v10 = (struct tagWND *)v29;
LABEL_19:
        v11 = *(_DWORD *)(a1 + 60);
        if ( v11 )
        {
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v30 = _gptiCurrent == _gTermIO[2] || _gptiCurrent == dword_273C3C;
          v13 = BuildHwndList(v11, 2, 0);
          v14 = (struct tagBWL *)v13;
          v29 = v13;
          if ( v13 )
          {
            v15 = (unsigned int *)(v13 + 16);
            v16 = *(_DWORD *)(v13 + 16);
            if ( v16 != 1 )
            {
              v17 = v30;
              do
              {
                v31 = (void *)HMValidateHandleNoSecure(v16, 1);
                if ( v31 )
                {
                  v18 = KeGetCurrentThread();
                  v19 = W32GetThreadWin32Thread(v18);
                  v26 = *(_DWORD *)(v19 + 228);
                  *(_DWORD *)(v19 + 228) = &v26;
                  v27 = v31;
                  HMLockObject(v31);
                  if ( v17 )
                    xxxSendNotifyMessage((int)v31, 0x128u, v10, 0, 1u);
                  else
                    xxxSendMessage(v31, (unsigned int)v10, 0);
                  ThreadUnlock1();
                }
                v16 = *++v15;
              }
              while ( *v15 != 1 );
              v14 = (struct tagBWL *)v29;
            }
            FreeHwndList(v14);
          }
        }
        return 0;
    }
    SetOrClrWF(v20, a1, 0xB04u, 1);
    goto LABEL_18;
  }
  if ( (char)*_gpsi < 0
    || (v6 = *(_DWORD *)(_gpsi + 6248), (v6 & 0x20) != 0)
    || v6 >= 0
    || ((v7 = KeGetCurrentThread(), v8 = W32GetThreadWin32Thread(v7), *(_DWORD *)(v8 + 340) <= 0x400u)
      ? (v9 = *(_DWORD *)(v8 + 352))
      : (LOBYTE(v9) = 0),
        (v9 & 2) != 0) )
  {
    LOWORD(v3) = v3 & 0xFFFC;
  }
  if ( (_WORD)v3 )
    goto LABEL_12;
  return 0;
}
