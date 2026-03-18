/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C00A8F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00A8DDC (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyChannel(__int64 a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
