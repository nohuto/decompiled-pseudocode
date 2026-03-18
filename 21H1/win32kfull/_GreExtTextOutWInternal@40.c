/*
 * XREFs of _GreExtTextOutWInternal@40 @ 0x78958
 * Callers:
 *     _NtGdiExtTextOutW@36 @ 0x5684C (_NtGdiExtTextOutW@36.c)
 *     ?DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FDEE (-DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x907DA (-DrawBox@@YGHPAUHDC__@@PAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z @ 0x90C70 (-DrawIt@@YGHPAUHDC__@@PAUtagRECT@@IG@Z.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z @ 0x1A0FFC (-xxxTooltipRender@@YGXPAUtagTOOLTIPWND@@PAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z @ 0x1A9277 (-xxxDrawMenuItemText@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUHDC__@@HHPAGHH@Z.c)
 *     _xxxPSMTextOut@24 @ 0x1AF136 (_xxxPSMTextOut@24.c)
 *     ?UserTextOutWInternal@@YGHPAUHDC__@@HHPBGIK@Z @ 0x1B8170 (-UserTextOutWInternal@@YGHPAUHDC__@@HHPBGIK@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 */

int __fastcall GreExtTextOutWInternal(
        HDC a1,
        ERECTL *a2,
        struct XDCOBJ *a3,
        int a4,
        ERECTL **a5,
        unsigned __int16 *a6,
        struct tagRECT *a7,
        unsigned __int16 *a8,
        int *a9,
        unsigned int a10)
{
  int v10; // ebx
  DC *v12; // eax
  DEVLOCKOBJ *v13; // ecx
  int v14; // eax
  void *v16; // [esp+0h] [ebp-48h]
  unsigned int v17; // [esp+4h] [ebp-44h]
  DC *v18[3]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v19[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v20[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v21; // [esp+38h] [ebp-10h]

  v10 = 0;
  memset(v18, 0, sizeof(v18));
  XDCOBJ::vLock((XDCOBJ *)v18, a1);
  v12 = v18[0];
  if ( v18[0] )
  {
    if ( (*((_DWORD *)v18[0] + 6) & 0x10000) == 0 )
    {
      memset(v20, 0, sizeof(v20));
      v21 = 256;
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v19);
      if ( DEVLOCKOBJ::bLock(v13, (struct XDCOBJ *)v18, 0) )
        v14 = GreExtTextOutWLocked(
                a2,
                (struct XDCOBJ *)v18,
                (LONG)a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*((_DWORD *)v18[0] + 255) + 233),
                a9,
                a10,
                v16,
                v17);
      else
        v14 = XDCOBJ::bFullScreen(v18);
      v10 = v14;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
      if ( v20[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v20);
      v12 = v18[0];
    }
    if ( v12 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  }
  return v10;
}
