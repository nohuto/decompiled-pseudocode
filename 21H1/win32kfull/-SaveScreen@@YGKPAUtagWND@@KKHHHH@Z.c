/*
 * XREFs of ?SaveScreen@@YGKPAUtagWND@@KKHHHH@Z @ 0x19DB0A
 * Callers:
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreSaveScreenBits@16 @ 0x1FD449 (_GreSaveScreenBits@16.c)
 */

unsigned int __userpurge SaveScreen@<eax>(
        int a1@<ecx>,
        struct tagWND *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int *ScreenRect; // eax
  _DWORD v14[5]; // [esp+10h] [ebp-3Ch] BYREF
  int v15[4]; // [esp+24h] [ebp-28h] BYREF
  int v16[4]; // [esp+34h] [ebp-18h] BYREF

  v8 = *(_DWORD *)(a1 + 20);
  if ( (*(_WORD *)(v8 + 30) & 0x3FFF) == 0x29D )
  {
    v9 = 1;
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 52);
    v10 = 0;
    v9 = 0;
  }
  v16[0] = a3 + v11;
  v16[2] = a3 + a5;
  if ( !v9 )
    v10 = *(_DWORD *)(v8 + 56);
  v16[1] = v10 + a4;
  v16[3] = a4 + a6;
  ScreenRect = GetScreenRect(v14);
  v15[0] = *ScreenRect;
  v15[1] = ScreenRect[1];
  v15[2] = ScreenRect[2];
  v15[3] = ScreenRect[3];
  if ( IntersectRect(v16, v16, v15) )
    return GreSaveScreenBits(a2, v16);
  else
    return 0;
}
