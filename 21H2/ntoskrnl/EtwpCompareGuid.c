/*
 * XREFs of EtwpCompareGuid @ 0x140941620
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
