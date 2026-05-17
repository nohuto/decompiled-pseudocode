/*
 * XREFs of _RtlCopyExtendedContext@12 @ 0x4B35B760
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCopyExtendedContext@24 @ 0x4B35BC77 (_RtlpCopyExtendedContext@24.c)
 */

int __thiscall RtlCopyExtendedContext(void *this, int a2, int a3, int a4)
{
  return RtlpCopyExtendedContext(this, a3, a4, this);
}
