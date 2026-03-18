/*
 * XREFs of ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270
 * Callers:
 *     _GreNotifyDirtySprite@4 @ 0x20098 (_GreNotifyDirtySprite@4.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z @ 0x25234 (-vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z.c)
 *     _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6 (_GreAddBitmapD3DDirtyRgn@12.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ @ 0x25308 (-bDeviceBitmap@SFMLOGICALSURFACE@@QAEHXZ.c)
 *     _DwmAsyncDirtySprite@24 @ 0x2531C (_DwmAsyncDirtySprite@24.c)
 *     _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E (_GreAddLogicalSurfaceToDirtyQueue@16.c)
 *     ?bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z @ 0xCA2FE (-bShouldUseSfmTokenArray@@YGEU_LOGSURF_FLAGS@@@Z.c)
 */

int __userpurge bSpDwmNotifyDirty@<eax>(
        SFMLOGICALSURFACE *a1@<edx>,
        unsigned int a2,
        struct SFMLOGICALSURFACE *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v12; // eax
  int v13; // [esp-10h] [ebp-28h]

  v8 = a2;
  if ( SFMLOGICALSURFACE::bDeviceBitmap(a1) )
    v8 = a2 & 0xFFFFFFFE;
  v9 = 1;
  if ( (v8 & 1) == 0 )
    goto LABEL_4;
  if ( !(unsigned __int8)bShouldUseSfmTokenArray(*((_DWORD *)a1 + 41)) )
  {
    v6 = 0;
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  v12 = GreAddLogicalSurfaceToDirtyQueue(a3, a4);
  v6 = 0;
  v10 = v12;
  v8 &= ~1u;
LABEL_5:
  if ( v8 )
  {
    v13 = v7;
    UserReferenceDwmApiPort();
    v6 = DwmAsyncDirtySprite(v13, v8, a3, a4);
  }
  if ( v10 < 0 || v6 < 0 )
    return 0;
  return v9;
}
