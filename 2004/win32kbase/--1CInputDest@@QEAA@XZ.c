/*
 * XREFs of ??1CInputDest@@QEAA@XZ @ 0x1C0007AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::~CInputDest(CInputDest *this)
{
  CInputDest::SetEmpty(this);
}
