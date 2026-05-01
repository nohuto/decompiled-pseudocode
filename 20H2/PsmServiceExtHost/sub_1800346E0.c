/*
 * XREFs of sub_1800346E0 @ 0x1800346E0
 * Callers:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 * Callees:
 *     memcmp @ 0x180046816 (memcmp.c)
 */

int __fastcall sub_1800346E0(void *Buf1, __int64 a2)
{
  ULONG v4; // edi
  ULONG v5; // eax

  v4 = RtlLengthSid(Buf1);
  v5 = RtlLengthSid((PSID)(a2 + 88));
  if ( v4 < v5 )
    return -1;
  if ( v4 > v5 )
    return 1;
  return memcmp(Buf1, (const void *)(a2 + 88), v4);
}
