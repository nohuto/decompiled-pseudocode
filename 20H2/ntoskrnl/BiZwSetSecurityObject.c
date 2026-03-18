/*
 * XREFs of BiZwSetSecurityObject @ 0x14039ACE0
 * Callers:
 *     BiCreateKey @ 0x14077FE30 (BiCreateKey.c)
 *     BiOpenKey @ 0x140780624 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407807AC (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403FB670 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
