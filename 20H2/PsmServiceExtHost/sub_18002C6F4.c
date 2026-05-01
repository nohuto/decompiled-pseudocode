/*
 * XREFs of sub_18002C6F4 @ 0x18002C6F4
 * Callers:
 *     sub_18002C668 @ 0x18002C668 (sub_18002C668.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

void *__fastcall sub_18002C6F4(void *a1, void *Src)
{
  ULONG v4; // eax

  memset(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  return memcpy(a1, Src, v4);
}
