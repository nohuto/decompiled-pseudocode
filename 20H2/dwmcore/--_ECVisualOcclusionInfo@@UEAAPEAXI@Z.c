/*
 * XREFs of ??_ECVisualOcclusionInfo@@UEAAPEAXI@Z @ 0x1800C7280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CVisualOcclusionInfo *__fastcall CVisualOcclusionInfo::`vector deleting destructor'(
        CVisualOcclusionInfo *this,
        char a2)
{
  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
