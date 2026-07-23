/*
 * XREFs of IopLoadCrashdmpImage @ 0x14078EBF0
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 */

__int64 __fastcall IopLoadCrashdmpImage(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, unsigned __int64 *a6)
{
  return MmLoadSystemImageEx(a1, a2, a3, a4 | 0x20u, a5, a6);
}
