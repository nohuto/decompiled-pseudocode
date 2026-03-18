/*
 * XREFs of KiConnectSwInterrupt @ 0x140A94A94
 * Callers:
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
