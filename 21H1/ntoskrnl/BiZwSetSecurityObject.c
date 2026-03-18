/*
 * XREFs of BiZwSetSecurityObject @ 0x14039808C
 * Callers:
 *     BiCreateKey @ 0x14076F420 (BiCreateKey.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 *     BiCloseKey @ 0x14076FD9C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403F5810 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
