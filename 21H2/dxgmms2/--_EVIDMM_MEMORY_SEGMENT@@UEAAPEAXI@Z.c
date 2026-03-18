/*
 * XREFs of ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x1C00329A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00E8968 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_MEMORY_SEGMENT *__fastcall VIDMM_MEMORY_SEGMENT::`vector deleting destructor'(VIDMM_MEMORY_SEGMENT *P, char a2)
{
  VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
