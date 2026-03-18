/*
 * XREFs of ?MasterInputThreadDeactivated@CBaseProcessor@@UEAAXXZ @ 0x1C00C3E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseProcessor::MasterInputThreadDeactivated(CBaseProcessor *this)
{
  *((_DWORD *)this + 3) = 1;
}
