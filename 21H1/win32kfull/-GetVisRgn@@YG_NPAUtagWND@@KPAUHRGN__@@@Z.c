/*
 * XREFs of ?GetVisRgn@@YG_NPAUtagWND@@KPAUHRGN__@@@Z @ 0xF46F8
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z @ 0xF49FC (-UpdateTrackerRegion@CVisRgnTrackerProp@@AAEXKI@Z.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z @ 0xF479E (-GetWindowRgn@@YGHPAUtagWND@@PAUHRGN__@@K@Z.c)
 */

char __userpurge GetVisRgn@<al>(struct tagWND *a1@<edx>, int a2@<ecx>, struct tagWND *a3, unsigned int a4, HRGN a5)
{
  char v6; // bl
  void *TopLevelWindow; // eax
  HRGN v9; // [esp+0h] [ebp-4Ch]
  unsigned int v10; // [esp+4h] [ebp-48h]
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  int v12; // [esp+14h] [ebp-38h]
  int v13; // [esp+18h] [ebp-34h]
  int v14; // [esp+1Ch] [ebp-30h]
  struct tagWND *v15; // [esp+20h] [ebp-2Ch]
  _BYTE v16[16]; // [esp+24h] [ebp-28h] BYREF
  _DWORD v17[4]; // [esp+34h] [ebp-18h] BYREF

  v15 = a3;
  v6 = 0;
  if ( !GetWindowRgn(a1, v9, v10) )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    _GetClientRect(a2, &v11);
    v17[2] = v13 - v11;
    v17[3] = v14 - v12;
    v17[0] = 0;
    v17[1] = 0;
    SetRectRgnIndirect(v15, v17);
  }
  memset(v16, 0, sizeof(v16));
  if ( GreGetRgnBox(v15, v16) == 1 )
  {
    TopLevelWindow = (void *)_GetTopLevelWindow(a2);
    if ( TopLevelWindow )
    {
      if ( _GhostWindowFromHungWindow(TopLevelWindow) )
        return 1;
    }
  }
  return v6;
}
