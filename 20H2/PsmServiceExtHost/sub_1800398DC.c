/*
 * XREFs of sub_1800398DC @ 0x1800398DC
 * Callers:
 *     sub_18003911C @ 0x18003911C (sub_18003911C.c)
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 *     sub_180039810 @ 0x180039810 (sub_180039810.c)
 * Callees:
 *     memcmp @ 0x180046816 (memcmp.c)
 */

__int64 __fastcall sub_1800398DC(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax

  v3 = *(unsigned __int16 *)(a1 + 8);
  if ( a3 == v3 )
    return (unsigned int)memcmp(a2, *(const void **)(a1 + 24), a3);
  else
    return (unsigned int)(a3 - v3);
}
