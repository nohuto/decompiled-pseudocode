/*
 * XREFs of ?IsImplicit@CompositionInputObject@@QEBAHXZ @ 0x1C00A70A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::IsImplicit(CompositionInputObject *this)
{
  return *((_DWORD *)this + 48) & 1;
}
