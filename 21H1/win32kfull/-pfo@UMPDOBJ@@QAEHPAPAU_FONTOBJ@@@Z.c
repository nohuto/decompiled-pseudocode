/*
 * XREFs of ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429
 * Callers:
 *     ?UMPDDrvDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x20B40E (-UMPDDrvDestroyFont@@YGXPAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z @ 0x20C60A (-UMPDDrvFontManagement@@YGKPAU_SURFOBJ@@PAU_FONTOBJ@@KKPAXK2@Z.c)
 *     ?UMPDDrvGetGlyphMode@@YGKPAUDHPDEV__@@PAU_FONTOBJ@@@Z @ 0x20C8C7 (-UMPDDrvGetGlyphMode@@YGKPAUDHPDEV__@@PAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x20D7AC (-UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YGJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x20DD7A (-UMPDDrvQueryFontData@@YGJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 *     ?UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x20F625 (-UMPDDrvTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z @ 0x1F3E44 (-LookUp@-$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z @ 0x1F3EFC (-ThunkDDIOBJ@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAXKPAX@Z.c)
 */

int __thiscall UMPDOBJ::pfo(UMPDOBJ *this, struct _FONTOBJ **a2)
{
  void **v2; // ebx
  UMPDOBJ *v3; // edx
  int v5; // esi
  _DWORD v6[11]; // [esp+8h] [ebp-30h] BYREF
  UMPDOBJ *v7; // [esp+34h] [ebp-4h]

  v2 = (void **)a2;
  v3 = this;
  v7 = this;
  if ( !*a2 )
    return 1;
  qmemcpy(v6, *a2, sizeof(v6));
  v5 = v6[5];
  if ( v6[5] >= (unsigned int)_MmSystemRangeStart )
  {
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdLookupPushLock);
    a2 = 0;
    v6[5] = NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LookUp(&v6[5], &a2) == 0 ? v5 : 0;
    GreReleasePushLockShared(&UmfdLookupPushLock);
    KeLeaveCriticalRegion();
    v3 = v7;
  }
  return UMPDOBJ::ThunkDDIOBJ(v3, (UMPDOBJ *)((char *)v3 + 96), v2, 0x2Cu, v6);
}
