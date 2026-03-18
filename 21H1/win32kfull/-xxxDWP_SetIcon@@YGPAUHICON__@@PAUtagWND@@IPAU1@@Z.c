/*
 * XREFs of ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 */

struct tagWND *__userpurge xxxDWP_SetIcon@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        HICON a5)
{
  int v6; // eax
  struct tagWND *v7; // ebx
  struct tagWND *v8; // edi
  int v9; // edi
  int v10; // eax
  struct tagWND *v11; // ecx
  struct tagCURSOR *v13; // [esp+0h] [ebp-1Ch]
  unsigned int v14; // [esp+4h] [ebp-18h]
  struct tagWND *v15; // [esp+Ch] [ebp-10h]
  unsigned int v16; // [esp+10h] [ebp-Ch]
  BOOL v17; // [esp+14h] [ebp-8h]
  struct tagWND *v18; // [esp+18h] [ebp-4h]

  v16 = a1;
  if ( a1 > 3 )
  {
    UserSetLastError(87);
    return 0;
  }
  if ( a1 == 3 )
  {
    xxxRecreateSmallIcons();
    return 0;
  }
  v6 = *(_DWORD *)(a2 + 20);
  v7 = *(struct tagWND **)(v6 + 168);
  v15 = *(struct tagWND **)(v6 + 172);
  if ( a1 )
    v8 = *(struct tagWND **)(v6 + 172);
  else
    v8 = *(struct tagWND **)(v6 + 168);
  v18 = v8;
  if ( v8 != a3 )
  {
    LOBYTE(a1) = 3;
    v17 = 1;
    v9 = 0;
    v10 = HMValidateHandleNoRip(v7, a1);
    if ( v10 && *(char *)(v10 + 44) < 0 )
    {
      v9 = 1;
      _DestroyCursor(v13, v14);
    }
    if ( v16 )
    {
      if ( v9 )
        v7 = 0;
      else
        v17 = v7 == 0;
      v11 = a3;
      v8 = v18;
    }
    else
    {
      v7 = a3;
      v11 = v15;
      v8 = v9 == 0 ? v18 : 0;
    }
    *(_DWORD *)(*(_DWORD *)(a2 + 20) + 172) = v11;
    *(_DWORD *)(*(_DWORD *)(a2 + 20) + 168) = v7;
    if ( v11 && !v7 )
      xxxCreateWindowSmIcon(a2, (int)v11, 1);
    if ( IsToplevelWindowDesktopComposed(a2) )
      SendDwmIconChange(a2);
    if ( v17 )
      xxxRedrawTitle(a2, 8204);
  }
  return v8;
}
