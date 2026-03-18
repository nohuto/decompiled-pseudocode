/*
 * XREFs of GreGetObjectOwner @ 0x1C0023750
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00953E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     EngCombineRgn @ 0x1C014EF30 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014EFD0 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C014F0D0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014F140 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014F1F0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014F250 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014F2C0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014F360 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014F3D0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014F430 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014F4C0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014F560 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014F600 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(unsigned int a1, int a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // esi^2
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = -2147483614;
  v6 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}
