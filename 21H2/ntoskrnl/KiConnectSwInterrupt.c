/*
 * XREFs of KiConnectSwInterrupt @ 0x140B50ED4
 * Callers:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
