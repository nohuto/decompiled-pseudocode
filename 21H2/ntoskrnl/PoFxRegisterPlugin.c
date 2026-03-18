/*
 * XREFs of PoFxRegisterPlugin @ 0x14098CDA0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x1405CD5BC (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
