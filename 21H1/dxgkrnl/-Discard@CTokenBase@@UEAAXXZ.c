/*
 * XREFs of ?Discard@CTokenBase@@UEAAXXZ @ 0x1C001B210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::Discard(CTokenBase *this)
{
  *((_DWORD *)this + 6) = 6;
}
