/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00F3834
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00657CC (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C00F3500 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C00F3640 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C00F36D0 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C00F3780 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00F3908 (UmfdUnloadFontFileInternal.c)
 *     UmfdDestroyFont @ 0x1C0100390 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0145ED0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02DD520 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02DD580 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02DD630 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02DD6F0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02DD770 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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
