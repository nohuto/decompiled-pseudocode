/*
 * XREFs of ?vPaintPathEnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A572
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vPaintPathEnumRow(int a1, struct _ROW *a2, unsigned int a3, void *a4)
{
  (*((void (__stdcall **)(struct _ROW *, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD))a4 + 1))(
    a2,
    a3,
    a1,
    *((_DWORD *)a4 + 5),
    *((_DWORD *)a4 + 4),
    *((_DWORD *)a4 + 2),
    *((_DWORD *)a4 + 3));
}
