/*
 * XREFs of NtGdiSetLayout @ 0x1C011AAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiSetLayout(__int64 a1, __int64 a2, __int64 a3)
{
  return GreSetLayout(a1, a2, a3);
}
