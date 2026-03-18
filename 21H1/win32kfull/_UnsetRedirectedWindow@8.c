/*
 * XREFs of _UnsetRedirectedWindow@8 @ 0x1BE12
 * Callers:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int __fastcall UnsetRedirectedWindow(int a1, int a2)
{
  int v3; // edi
  int v5; // ecx
  int RedirectionBitmap; // ebx
  HBITMAP v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+4h] [ebp-Ch]
  int Prop; // [esp+Ch] [ebp-4h]

  v3 = 1;
  Prop = _GetProp(1);
  v5 = *(_DWORD *)(Prop + 24) & ~a2;
  *(_DWORD *)(Prop + 24) = v5;
  if ( (a2 & 1) != 0 && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 0x20) == 0 )
  {
    v3 = HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), a1, 0, 0);
    v5 = *(_DWORD *)(Prop + 24);
  }
  if ( !v5 )
  {
    SetOrClrWF(0, a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap(a1);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v3 = SetRedirectionBitmap((struct tagWND *)1, v8, v9);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0);
    }
  }
  return v3;
}
