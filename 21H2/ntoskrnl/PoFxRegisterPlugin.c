/*
 * XREFs of PoFxRegisterPlugin @ 0x1408E4550
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x14056C138 (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
