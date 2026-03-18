/*
 * XREFs of ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392
 * Callers:
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B3D4 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8C20A (-CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xF8A50 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B09A (-CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B270 (-CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B4E8 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B5B0 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge FontDriverDdiRequest::PrepareUsermodeFontObj(
        int a1@<edx>,
        int a2@<ecx>,
        struct UmfdTls *a3,
        struct _FONTOBJ *a4,
        struct _FONTOBJ *a5)
{
  int v5; // eax

  *(_DWORD *)a3 = *(_DWORD *)a1;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(a1 + 4);
  *((_DWORD *)a3 + 2) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)a3 + 3) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)a3 + 4) = *(_DWORD *)(a1 + 16);
  *((_DWORD *)a3 + 5) = **(_DWORD **)(a1 + 20);
  *((_DWORD *)a3 + 6) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)a3 + 7) = *(_DWORD *)(a1 + 28);
  v5 = *(_DWORD *)(a1 + 32);
  *((_DWORD *)a3 + 9) = 0;
  *((_DWORD *)a3 + 8) = v5;
  *((_DWORD *)a3 + 10) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a2 + 20) = a1;
}
