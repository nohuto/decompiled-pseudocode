/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x18006D970
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 */

struct COcclusionInfo *__fastcall CVisual::AllocateOcclusionInfo(CVisual *this)
{
  struct COcclusionInfo *result; // rax

  result = (struct COcclusionInfo *)operator new(0x18uLL);
  if ( result )
  {
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
    *(_QWORD *)result = &CVisualOcclusionInfo::`vftable';
  }
  return result;
}
