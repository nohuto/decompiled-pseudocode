/*
 * XREFs of KeComplementAffinityEx2 @ 0x14056C130
 * Callers:
 *     <none>
 * Callees:
 *     KiComplementAffinityEx @ 0x1402FF270 (KiComplementAffinityEx.c)
 */

void __fastcall KeComplementAffinityEx2(__int64 a1, unsigned __int16 *a2)
{
  KiComplementAffinityEx(a1, *(_WORD *)(a1 + 2), a2);
}
