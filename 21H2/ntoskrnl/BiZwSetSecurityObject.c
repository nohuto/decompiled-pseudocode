/*
 * XREFs of BiZwSetSecurityObject @ 0x14039B6FC
 * Callers:
 *     BiCreateKey @ 0x140783DD0 (BiCreateKey.c)
 *     BiOpenKey @ 0x1407845C4 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078474C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403FDAA0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
