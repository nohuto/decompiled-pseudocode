/*
 * XREFs of _RtlIdnToAscii@20 @ 0x4B2E58D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNameprepAsciiWorker@24 @ 0x4B2E58F1 (_RtlpNameprepAsciiWorker@24.c)
 */

int __stdcall RtlIdnToAscii(int a1, int a2, int a3, void *a4, int a5)
{
  return RtlpNameprepAsciiWorker(a3, a4, a5, 1);
}
