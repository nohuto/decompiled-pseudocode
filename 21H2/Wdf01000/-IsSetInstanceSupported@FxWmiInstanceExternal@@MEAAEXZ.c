/*
 * XREFs of ?IsSetInstanceSupported@FxWmiInstanceExternal@@MEAAEXZ @ 0x1C005E6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxWmiInstanceExternal::IsSetInstanceSupported(FxWmiInstanceInternal *this)
{
  return this->m_SetInstance != 0LL;
}
