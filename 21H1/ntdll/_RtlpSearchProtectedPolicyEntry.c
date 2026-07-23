/*
 * XREFs of _RtlpSearchProtectedPolicyEntry @ 0x4B2AB5C0
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __cdecl RtlpSearchProtectedPolicyEntry(void *Buf1, void *Buf2)
{
  size_t _FFFFFFFC; // [esp-4h] [ebp-4h]

  LODWORD(_FFFFFFFC) = 16;
  return memcmp(Buf1, Buf2, _FFFFFFFC);
}
