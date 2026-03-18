/*
 * XREFs of _xxxInternalPaintDesktop@12 @ 0xE7CB0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxDWP_EraseBkgnd@12 @ 0xA4032 (_xxxDWP_EraseBkgnd@12.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _xxxRealizeDesktop@4 @ 0x154B87 (_xxxRealizeDesktop@4.c)
 *     _NtUserPaintDesktop@4 @ 0x1673D5 (_NtUserPaintDesktop@4.c)
 * Callees:
 *     _GreOffsetClipRgn@12 @ 0xE7DDC (_GreOffsetClipRgn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxInternalPaintDesktop(int a1, HDC a2, int a3)
{
  int v3; // ebx
  HDC v4; // edi
  HDC v5; // esi
  _DWORD v7[2]; // [esp+Ch] [ebp-40h] BYREF
  _DWORD v8[2]; // [esp+14h] [ebp-38h] BYREF
  int v9; // [esp+1Ch] [ebp-30h]
  HDC v10; // [esp+20h] [ebp-2Ch]
  int v11; // [esp+24h] [ebp-28h] BYREF
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  int v14; // [esp+30h] [ebp-1Ch]
  int v15; // [esp+34h] [ebp-18h] BYREF
  int v16; // [esp+38h] [ebp-14h]
  int v17; // [esp+3Ch] [ebp-10h]
  int v18; // [esp+40h] [ebp-Ch]

  v3 = 0;
  v10 = a2;
  v9 = a1;
  if ( a3 )
  {
    v8[0] = 0;
    v8[1] = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( GreGetDCOrgEx(a2, v8, &v15) )
    {
      v13 = v17 - v15;
      v14 = v18 - v16;
      v12 = 0;
      v11 = 0;
      GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      v4 = v10;
      GreSetDCOrg(v10, v11, v12, &v11);
      GreOffsetClipRgn(v4, v16);
      GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      v7[0] = v9;
      v7[1] = v10;
      v9 = xxxEnumDisplayMonitors(v10, 0, &xxxDesktopPaintCallback, v7, 1);
      GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      v5 = v10;
      GreOffsetClipRgn(v10, -v16);
      GreSetDCOrg(v5, v15, v16, &v15);
      GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      return v9;
    }
  }
  return v3;
}
