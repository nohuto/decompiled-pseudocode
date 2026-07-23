/*
 * XREFs of _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA
 * Callers:
 *     _RtlpQueryInformationActivationContextDetailedInformation@20 @ 0x4B2A9A59 (_RtlpQueryInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryInformationActivationContextCompatibilityInformation@16 @ 0x4B2B7E6D (_RtlpQueryInformationActivationContextCompatibilityInformation@16.c)
 *     _RtlpQueryAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DB86 (_RtlpQueryAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DD92 (_RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryInformationActivationContextManifestResourceName@16 @ 0x4B33DFBA (_RtlpQueryInformationActivationContextManifestResourceName@16.c)
 *     _RtlpQueryRunLevel@12 @ 0x4B33E03F (_RtlpQueryRunLevel@12.c)
 * Callees:
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        size_t Size,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int ActivationContextSection; // eax
  size_t v13; // [esp-4h] [ebp-10h]

  if ( HIDWORD(Size)
    && (ActivationContextSection = RtlpLocateActivationContextSection(SHIDWORD(Size), a8, a9, a10),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    *a1 = ((ActivationContextSection >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( (unsigned int)Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      LODWORD(v13) = Size;
      memset(a3, 0, v13);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
