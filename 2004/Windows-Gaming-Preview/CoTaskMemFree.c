/*
 * XREFs of CoTaskMemFree @ 0x18004550E
 * Callers:
 *     sub_1800434A0 @ 0x1800434A0 (sub_1800434A0.c)
 *     sub_180043A60 @ 0x180043A60 (sub_180043A60.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CoTaskMemFree(LPVOID pv)
{
  __imp_CoTaskMemFree(pv);
}
