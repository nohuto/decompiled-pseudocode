/*
 * XREFs of BiZwSetSecurityObject @ 0x140398820
 * Callers:
 *     BiCreateKey @ 0x140771830 (BiCreateKey.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403F6AA0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
