/*
 * XREFs of bDeletePalette @ 0x1C001A6A0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     GdiThreadCallout @ 0x1C0018740 (GdiThreadCallout.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C001A718 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C004D598 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 */

__int64 __fastcall bDeletePalette(HPALETTE a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HSEMAPHORE v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6[0] = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v4 = XEPALOBJ::bDeletePalette(&v7, a2);
  if ( v7 )
    HmgDecrementShareReferenceCountEx(v7, 0LL);
  SEMOBJ::vUnlock((SEMOBJ *)v6);
  return v4;
}
