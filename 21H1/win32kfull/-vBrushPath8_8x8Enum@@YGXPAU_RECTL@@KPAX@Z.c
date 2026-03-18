/*
 * XREFs of ?vBrushPath8_8x8Enum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A4C5
 * Callers:
 *     <none>
 * Callees:
 *     ?vPatCpyRect8_8x8@@YGXPAU_PATBLTFRAME@@H@Z @ 0x22D79E (-vPatCpyRect8_8x8@@YGXPAU_PATBLTFRAME@@H@Z.c)
 */

void __stdcall vBrushPath8_8x8Enum(struct _RECTL *a1, unsigned int a2, char *a3)
{
  *((_DWORD *)a3 + 5) = a1;
  vPatCpyRect8_8x8((struct _PATBLTFRAME *)(a3 + 4), a2);
}
