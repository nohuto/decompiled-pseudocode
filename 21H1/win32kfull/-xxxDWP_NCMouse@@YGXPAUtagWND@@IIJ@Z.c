/*
 * XREFs of ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     __GetMenuState@12 @ 0xBFC42 (__GetMenuState@12.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _xxxHandleNCMouseGuys@16 @ 0x18587E (_xxxHandleNCMouseGuys@16.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 */

void __userpurge xxxDWP_NCMouse(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  int v9; // eax
  _DWORD *SysMenu; // eax
  int v11; // [esp-4h] [ebp-14h]

  if ( a1 == 161 )
  {
    if ( (unsigned int)a3 < 8 || (unsigned int)a3 > 9 && (unsigned int)a3 - 20 > 1 )
    {
      if ( (unsigned int)a3 - 10 > 7 )
        goto LABEL_4;
      v8 = (unsigned int)a3 + 61431;
    }
    else
    {
      if ( IsToplevelWindowDesktopComposed(a2) && (*(_BYTE *)(a2[5] + 18) & 8) != 0 )
        v7 = xxxDCETrackCaptionButton((int)a2, (int)a3);
      else
        v7 = xxxTrackCaptionButton(a2, a3);
      a1 = 161;
      v8 = v7;
    }
    if ( v8 )
    {
      if ( v8 == 61824
        || (v9 = a2[5], (*(_BYTE *)(v9 + 22) & 8) == 0)
        || (*(_BYTE *)(v9 + 23) & 0xC0) == 0x40
        || (v11 = (int)a2, SysMenu = xxxGetSysMenu(a2, 1), (_GetMenuState((int)SysMenu, v8 & 0xFFF0, v11) & 3) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((int)a2, 0x112u, v8, a4, 0, 0, 0, 1u, 1);
      }
      return;
    }
LABEL_4:
    xxxHandleNCMouseGuys(a2, a1, (int)a3, a4);
    return;
  }
  if ( a1 > 0xA1 && a1 <= 0xA3 )
    goto LABEL_4;
}
