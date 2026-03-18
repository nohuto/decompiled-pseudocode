/*
 * XREFs of ?vBrushPath4_8x8Enum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A487
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRect4_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D5D4 (-vPatCpyRect4_8x8@@YGXPAU_PATBLTFRAME@@H@Z.c)
 */

void __stdcall vBrushPath4_8x8Enum(struct _RECTL *a1, unsigned int a2, char *a3)
{
  *((_DWORD *)a3 + 5) = a1;
  vPatCpyRect4_8x8((struct _RECTL *)(a3 + 4), a2);
}
