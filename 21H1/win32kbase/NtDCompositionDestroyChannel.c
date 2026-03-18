/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C00B3830
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00B3848 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyChannel(unsigned int a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
