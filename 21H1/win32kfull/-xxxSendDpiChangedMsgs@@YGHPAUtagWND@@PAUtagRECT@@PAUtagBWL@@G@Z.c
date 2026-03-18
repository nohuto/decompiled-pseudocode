/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0
 * Callers:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YGHPAUtagWND@@PAUtagRECT@@@Z @ 0xABB6A (-xxxSendDpiChangedMessageToTopLevelWindow@@YGHPAUtagWND@@PAUtagRECT@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YGHPAUHWND__@@H@Z @ 0x1503E5 (-xxxSendDpiChangedMessageToChildWindow@@YGHPAUHWND__@@H@Z.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 */

int __userpurge xxxSendDpiChangedMsgs@<eax>(
        int *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct tagBWL *a5,
        unsigned __int16 a6)
{
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  char v11; // cl
  int v12; // edx
  int v13; // edx
  struct tagWND *v14; // edi
  int v15; // eax
  char *i; // esi
  unsigned int v17; // esi
  struct tagWND *v18; // [esp+0h] [ebp-48h]
  HWND v19; // [esp+0h] [ebp-48h]
  HWND v20; // [esp+0h] [ebp-48h]
  struct tagRECT *v21; // [esp+4h] [ebp-44h]
  int v22; // [esp+4h] [ebp-44h]
  int v23; // [esp+4h] [ebp-44h]
  char v24; // [esp+Fh] [ebp-39h]
  int v26; // [esp+10h] [ebp-38h]
  struct tagWND *v27; // [esp+14h] [ebp-34h]
  int v28; // [esp+18h] [ebp-30h]
  int v30; // [esp+20h] [ebp-28h]
  _DWORD v31[4]; // [esp+24h] [ebp-24h] BYREF
  int v32; // [esp+34h] [ebp-14h] BYREF
  int v33; // [esp+38h] [ebp-10h]
  int v34; // [esp+3Ch] [ebp-Ch]
  int v35; // [esp+40h] [ebp-8h]

  v6 = a2;
  v27 = a3;
  v7 = 0;
  v8 = *(_DWORD *)(a2 + 20);
  v30 = 0;
  if ( *(_WORD *)(v8 + 182) )
    return 0;
  v9 = *(_DWORD *)(v8 + 144);
  if ( (v9 & 0x4000000) == 0 )
    return 0;
  *(_DWORD *)(v8 + 144) = v9 & 0xFBFFFFFF;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( !_IsTopLevelWindow(v6) )
  {
    v11 = 0;
    v24 = 0;
    goto LABEL_10;
  }
  v11 = 1;
  v24 = 1;
  if ( (*(_BYTE *)(*(_DWORD *)(v6 + 20) + 23) & 1) != 0 )
  {
    GetRect(66);
  }
  else
  {
    if ( a1 )
    {
      v32 = *a1;
      v33 = a1[1];
      v34 = a1[2];
      v35 = a1[3];
      v6 = a2;
      goto LABEL_10;
    }
    GetRect(66);
    if ( (_WORD)a4 )
    {
      v12 = *(unsigned __int16 *)(*(_DWORD *)(v6 + 20) + 180);
      if ( (_WORD)a4 != (_WORD)v12 )
      {
        v28 = v32;
        v31[0] = v32;
        v31[2] = v34;
        v31[3] = v35;
        v26 = v33;
        v31[1] = v33;
        if ( !xxxAppAdjustDpiCandidateRect(v6, v12, v31, &v32) )
          ScaleDPIRect(&v32, &v32, *(_WORD *)(*(_DWORD *)(v6 + 20) + 180), (unsigned __int16)a4, v28, v26, v32, v33);
      }
    }
  }
  v11 = 1;
LABEL_10:
  v13 = *(_DWORD *)(v6 + 20);
  if ( (*(_DWORD *)(v13 + 184) & 0xF) == 2 )
  {
    if ( (*(_DWORD *)(v13 + 144) & 0x20000000) != 0 )
    {
      v14 = a3;
      if ( a3 || (v14 = (struct tagWND *)BuildHwndList(v6, 1, 0), v30 = 1, (v27 = v14) != 0) )
      {
        if ( *((_DWORD *)v14 + 1) - 4 > (unsigned int)v14 + 16 )
        {
          v17 = *((_DWORD *)v14 + 1) - 4;
          do
          {
            v17 -= 4;
            v7 |= xxxSendDpiChangedMessageToChildWindow((HWND)v18, (int)v21);
          }
          while ( v17 > (unsigned int)v14 + 16 );
          v14 = v27;
        }
        if ( v24 )
        {
          v15 = xxxSendDpiChangedMessageToTopLevelWindow(v18, v21);
        }
        else
        {
          v7 |= xxxSendDpiChangedMessageToChildWindow((HWND)v18, (int)v21);
          v15 = xxxSendDpiChangedMessageToChildWindow(v20, v23);
        }
        v7 |= v15;
        for ( i = (char *)v14 + 20; (unsigned int)i < *((_DWORD *)v14 + 1); i += 4 )
          v7 |= xxxSendDpiChangedMessageToChildWindow(v19, v22);
        if ( v30 )
          FreeHwndList(v14);
      }
    }
    else if ( v11 )
    {
      return xxxSendDpiChangedMessageToTopLevelWindow(v18, v21);
    }
  }
  return v7;
}
