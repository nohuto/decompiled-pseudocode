/*
 * XREFs of _xxxShowOwnedWindows@12 @ 0xB4B0A
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxShowOwnedPopups@@YGHPAUtagWND@@H@Z @ 0xF50DE (-xxxShowOwnedPopups@@YGHPAUtagWND@@H@Z.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

char __fastcall xxxShowOwnedWindows(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v4; // esi
  struct tagBWL *v5; // eax
  int DesktopWindow; // eax
  unsigned int *i; // eax
  unsigned int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // ecx
  char v12; // al
  int v13; // eax
  int RectRgnIndirect; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v18; // [esp+Ch] [ebp-20h] BYREF
  _DWORD *v19; // [esp+10h] [ebp-1Ch]
  int v20; // [esp+14h] [ebp-18h]
  struct tagBWL *v21; // [esp+18h] [ebp-14h]
  unsigned int v22; // [esp+1Ch] [ebp-10h]
  _DWORD *v23; // [esp+20h] [ebp-Ch]
  unsigned int *v24; // [esp+24h] [ebp-8h]
  int v25; // [esp+28h] [ebp-4h]

  v4 = a1;
  v18 = 0;
  v23 = a1;
  v19 = 0;
  v20 = 0;
  LOBYTE(v5) = *(_BYTE *)(a1[5] + 23) & 0xC0;
  if ( (_BYTE)v5 != 64 )
  {
    DesktopWindow = _GetDesktopWindow(a1);
    v5 = (struct tagBWL *)BuildHwndList(*(_DWORD *)(DesktopWindow + 60), 2, 0);
    v21 = v5;
    if ( v5 )
    {
      v25 = 0;
      v22 = a2 >= 3;
      if ( a2 == 2 )
        v25 = 4;
      if ( a2 == 4 )
        v25 = 3;
      for ( i = (unsigned int *)((char *)v5 + 16); ; i = v24 + 1 )
      {
        v24 = i;
        v8 = *i;
        if ( v8 == 1 )
        {
          LOBYTE(v5) = (unsigned __int8)FreeHwndList(v21);
          return (char)v5;
        }
        v9 = HMValidateHandleNoSecure(v8, 1);
        v10 = (_DWORD *)v9;
        if ( v9 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 76) + 4) + 8) & 4) == 0 && (_DWORD *)v9 != v4 )
        {
          v11 = *(_DWORD **)(v9 + 64);
          if ( v11 )
          {
            while ( 1 )
            {
              v12 = *(_BYTE *)(v11[5] + 23) & 0xC0;
              if ( !v12 || v11 == v4 || v12 == -64 || !v11[16] )
                break;
              v11 = (_DWORD *)v11[16];
            }
          }
          if ( v25 )
          {
            if ( !v11 || v11 == v4 || a2 == 4 && (*(_BYTE *)(v11[5] + 23) & 0x28) == 0x20 )
              continue;
          }
          else if ( v11 != v4 )
          {
            continue;
          }
          v13 = v10[5];
          if ( a2 >= 3 )
          {
            if ( (*(_BYTE *)(v13 + 9) & 0x40) == 0 )
              continue;
          }
          else if ( (*(_BYTE *)(v13 + 23) & 0x10) == 0 )
          {
            continue;
          }
          if ( a3 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect(v10[5] + 52);
            GreCombineRgn(a3, a3, RectRgnIndirect, 2);
            GreDeleteObject(RectRgnIndirect);
            SetOrClrWF(1, (int)v10, 0x140u, 1);
            SetVisible(v10, 0);
            v4 = v23;
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v18 = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = &v18;
            v19 = v10;
            HMLockObject(v10);
            xxxSendMessage(v10, v22, a2);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  return (char)v5;
}
