/*
 * XREFs of ?IsImplicit@CompositionInputObject@@QEBAHXZ @ 0x1C0045DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionInputObject::IsImplicit(CompositionInputObject *this)
{
  return *((_DWORD *)this + 48) & 1;
}
