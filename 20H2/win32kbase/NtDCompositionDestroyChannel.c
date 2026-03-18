/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C0067C90
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0067B5C (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyChannel(__int64 a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
