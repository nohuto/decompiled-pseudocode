/*
 * XREFs of ?vBrushPathEnumRow@@YGXJPAU_ROW@@KPAX@Z @ 0x23A533
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vBrushPathEnumRow(int a1, struct _ROW *a2, unsigned int a3, char *a4)
{
  *((_DWORD *)a4 + 6) = a2;
  (*((void (__stdcall **)(char *, int, unsigned int))a4 + 1))(a4 + 8, a1, a3);
}
