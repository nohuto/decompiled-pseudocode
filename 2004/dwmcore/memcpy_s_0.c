/*
 * XREFs of memcpy_s_0 @ 0x18019FF94
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019F2B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800E39DE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v5; // rax
  errno_t v6; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && SourceSize <= 0x28 )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  DestinationSize = 0LL;
  *(_OWORD *)Destination = 0LL;
  *((_OWORD *)Destination + 1) = 0LL;
  *((_QWORD *)Destination + 4) = 0LL;
  if ( !Source )
  {
LABEL_4:
    v5 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v6 = 22;
LABEL_5:
    *v5 = v6;
    invalid_parameter_noinfo();
    return v6;
  }
  if ( SourceSize > 0x28 )
  {
    v5 = (errno_t *)_o__errno(Destination, 0LL, Source, SourceSize);
    v6 = 34;
    goto LABEL_5;
  }
  return 22;
}
