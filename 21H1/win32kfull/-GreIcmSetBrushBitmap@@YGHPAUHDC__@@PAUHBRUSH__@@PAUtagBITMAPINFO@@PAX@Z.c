/*
 * XREFs of ?GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z @ 0x21BA5A
 * Callers:
 *     _NtGdiIcmBrushInfo@32 @ 0x21C455 (_NtGdiIcmBrushInfo@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IAEXXZ @ 0xA9338 (-RestoreAttributes@XEBRUSHOBJ@@IAEXXZ.c)
 *     ??0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z @ 0xA9368 (--0BRUSHSELOBJ@@QAE@PAUHBRUSH__@@@Z.c)
 */

int __userpurge GreIcmSetBrushBitmap@<eax>(
        HBRUSH a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        HBRUSH a4,
        struct tagBITMAPINFO *a5,
        void *a6)
{
  int v7; // esi
  BRUSH *v9; // edi
  HBITMAP DIBitmapReal; // eax
  _DWORD v12[2]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  v7 = 0;
  v13[1] = 0;
  v13[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v13, a2);
  if ( v13[0] )
  {
    if ( (*(_BYTE *)(v13[0] + 80) & 1) != 0 )
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v12, a1);
      v9 = (BRUSH *)v12[0];
      if ( v12[0] )
      {
        if ( *(char *)(v12[0] + 24) < 0 )
        {
          DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(a2, a4, (int)a3, 0, 0x428u, 0x7FFFFFu, 0, 0, 0, 1, 0, 0);
          if ( DIBitmapReal )
            v7 = BRUSH::bAddIcmDIB(v9, *(void **)(*(_DWORD *)(v13[0] + 1020) + 264), DIBitmapReal);
        }
        XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v12);
        DEC_SHARE_REF_CNT(v12[0]);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v7;
}
