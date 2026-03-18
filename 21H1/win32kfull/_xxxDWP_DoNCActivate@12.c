/*
 * XREFs of _xxxDWP_DoNCActivate@12 @ 0x8F25E
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsModelessMenuNotificationWindow@4 @ 0x8F356 (_IsModelessMenuNotificationWindow@4.c)
 *     _DwmAsyncActivationChange@12 @ 0x8F37A (_DwmAsyncActivationChange@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?AreNonClientAreasToBePainted@@YGIPAUtagWND@@@Z @ 0x8FDB4 (-AreNonClientAreasToBePainted@@YGIPAUtagWND@@@Z.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 */

struct tagVWPL *__fastcall xxxDWP_DoNCActivate(struct tagVWPL **a1, char a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  struct tagVWPL *result; // eax
  struct tagVWPL *v7; // eax
  int v8; // ebx
  int DCEx; // edi
  struct tagVWPL *v10; // eax
  int v11; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // ecx
  int WindowBordersForDpiWithCompatFlags2; // eax
  struct tagWND *v16; // [esp+0h] [ebp-1Ch]
  unsigned __int16 v17; // [esp+Ch] [ebp-10h]
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  int v20; // [esp+18h] [ebp-4h]
  INT DpiForSystem; // [esp+24h] [ebp+8h]

  v20 = 4108;
  v3 = a2 & 1;
  v19 = v3;
  if ( (a2 & 1) != 0 || (a2 & 2) == 0 && IsModelessMenuNotificationWindow() )
  {
    v20 = 4109;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  SetOrClrWF(v5, (int)a1, 0x40u, 1);
  if ( a3 != -1 )
  {
    v7 = a1[5];
    if ( (*((_BYTE *)v7 + 23) & 0x10) != 0 && (*((_BYTE *)v7 + 9) & 1) == 0 )
    {
      v17 = AreNonClientAreasToBePainted(v16);
      if ( v17 )
      {
        v8 = UserValidateCopyRgn(a3);
        DCEx = _GetDCEx(a1, v8, 65537);
        if ( DCEx )
        {
          v10 = a1[5];
          if ( (*((_BYTE *)v10 + 8) & 1) != 0 )
          {
            v11 = *((_DWORD *)v10 + 4);
            v18 = *((_DWORD *)v10 + 5);
            DpiForSystem = GetDpiForSystem();
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
              v14 = *(_DWORD *)(ThreadWin32Thread + 352);
            else
              v14 = 0;
            WindowBordersForDpiWithCompatFlags2 = GetWindowBordersForDpiWithCompatFlags2(
                                                    v18,
                                                    v11,
                                                    v14,
                                                    0,
                                                    DpiForSystem,
                                                    v14);
            xxxMenuBarDraw(a1, DCEx, WindowBordersForDpiWithCompatFlags2, WindowBordersForDpiWithCompatFlags2);
          }
          xxxDrawCaptionBar(a1, v20 | v17);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v8);
        }
        v3 = v19;
      }
    }
  }
  result = (struct tagVWPL *)IsToplevelWindowDesktopComposed(a1);
  if ( result )
  {
    result = a1[5];
    if ( (*((_BYTE *)result + 18) & 8) != 0 )
    {
      ReferenceDwmApiPort();
      return (struct tagVWPL *)DwmAsyncActivationChange(v3);
    }
  }
  return result;
}
