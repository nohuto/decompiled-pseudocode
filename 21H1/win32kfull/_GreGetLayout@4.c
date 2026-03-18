/*
 * XREFs of _GreGetLayout@4 @ 0x566A8
 * Callers:
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     ?FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z @ 0x91098 (-FlipUserTextOutW@@YGHPAUHDC__@@HHPBGH@Z.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 *     ?DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z @ 0x1B7CFE (-DT_DrawStr@@YGHPAUHDC__@@HHPBGHHIPAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 */

int __thiscall GreGetLayout(HDC this)
{
  int v1; // esi
  DC *v2; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v4; // edi
  DC *v6; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h] BYREF

  v1 = -1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v6, this);
  v2 = v6;
  if ( v6 )
  {
    v1 = *(_DWORD *)(*((_DWORD *)v6 + 255) + 148);
    if ( v7 && (*((_BYTE *)v6 + 32) & 2) != 0 )
    {
      if ( !v8 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v6);
        v2 = v6;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v6, UserAttr);
          v2 = v6;
        }
      }
      *((_DWORD *)v2 + 8) &= ~2u;
      v2 = v6;
      v7 = 0;
    }
    v9 = 0;
    v4 = *(_DWORD *)v2;
    HmgDecrementExclusiveReferenceCountEx(v2, v8, &v9);
    if ( v9 )
      bDeleteDCInternalEx(v4, 0);
  }
  return v1;
}
