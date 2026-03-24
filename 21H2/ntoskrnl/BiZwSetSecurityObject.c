/*
 * XREFs of BiZwSetSecurityObject @ 0x14039B5AC
 * Callers:
 *     BiCreateKey @ 0x140783C10 (BiCreateKey.c)
 *     BiOpenKey @ 0x140784404 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078458C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403FD8C0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
