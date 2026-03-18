/*
 * XREFs of GreGetObjectOwner @ 0x1C001F270
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0056B00 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngCombineRgn @ 0x1C014CAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014CB40 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C014CC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014CCB0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014CD60 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014CDC0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014CE30 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014CED0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014CF40 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014CFA0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014D030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014D0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014D170 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
