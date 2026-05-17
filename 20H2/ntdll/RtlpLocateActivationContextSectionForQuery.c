/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x180078338
 * Callers:
 *     RtlpQueryRunLevel @ 0x180077F28 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180078018 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x180078274 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DFE38 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E00C8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800E0350 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18001D0FC (RtlpLocateActivationContextSection.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int ActivationContextSection; // eax

  if ( a7
    && (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    *a1 = ((ActivationContextSection >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
