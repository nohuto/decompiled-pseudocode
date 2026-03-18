/*
 * XREFs of ?vPaintPathEnum@@YGXPAU_RECTL@@KPAX@Z @ 0x23A552
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vPaintPathEnum(struct _RECTL *a1, unsigned int a2, _DWORD *a3)
{
  ((void (__stdcall *)(struct _RECTL *, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD))*a3)(
    a1,
    a2,
    a3[5],
    a3[2],
    a3[4],
    a3[3]);
}
