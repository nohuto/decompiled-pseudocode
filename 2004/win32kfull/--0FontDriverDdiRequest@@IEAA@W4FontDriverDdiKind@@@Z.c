/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00E15B4
 * Callers:
 *     UmfdDestroyFont @ 0x1C00DC9A0 (UmfdDestroyFont.c)
 *     UmfdQueryFontTree @ 0x1C00E1500 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00E1648 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFont @ 0x1C00E2200 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C00E22F0 (UmfdQueryFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00E2380 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00E26D0 (UmfdLoadFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C01438A0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DE9C0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DEA20 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DEAD0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DEB90 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DEC10 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int128 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
