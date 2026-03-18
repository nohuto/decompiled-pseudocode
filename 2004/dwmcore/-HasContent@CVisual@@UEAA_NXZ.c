/*
 * XREFs of ?HasContent@CVisual@@UEAA_NXZ @ 0x1800BC010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 31) != 0LL;
}
