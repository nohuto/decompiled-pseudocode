/*
 * XREFs of BiZwSetSecurityObject @ 0x1403A7848
 * Callers:
 *     BiCreateKey @ 0x1408036C8 (BiCreateKey.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041EDA0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
