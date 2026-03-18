/*
 * XREFs of ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontTreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B0CC (-CreateUsermodeParameters@QueryFontTreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B2C2 (-CreateUsermodeParameters@QueryTrueTypeTableRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B3D4 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z @ 0x8B4F2 (-TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z @ 0x8C424 (-TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xDBF9C (-CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE0700 (-CreateUsermodeParameters@QueryFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE29FC (-CreateUsermodeParameters@QueryFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xF8A50 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B09A (-CreateUsermodeParameters@DestroyFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B15C (-CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B270 (-CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B431 (-CreateUsermodeParameters@GetTrueTypeFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B4E8 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B5B0 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall UmfdTls::TryGetAlignedFieldSize(unsigned int a1, unsigned int *a2)
{
  if ( a1 + 3 < a1 )
    return 0;
  *a2 = (a1 + 3) & 0xFFFFFFFC;
  return 1;
}
