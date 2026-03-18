/*
 * XREFs of bDeletePalette @ 0x1C00C0ED0
 * Callers:
 *     GreDeleteObject @ 0x1C007EEA0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C00BD690 (GdiThreadCallout.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C00C0F48 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // r8d
  PERESOURCE v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = ghsemPalette;
  EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a1);
  v5 = XEPALOBJ::bDeletePalette(&v9, a2);
  if ( v9 )
    HmgDecrementShareReferenceCountEx(v9, 0LL);
  SEMOBJ::vUnlock((SEMOBJ *)v8, v4, v6);
  return v5;
}
