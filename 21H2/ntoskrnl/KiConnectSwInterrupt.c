/*
 * XREFs of KiConnectSwInterrupt @ 0x140A928F4
 * Callers:
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 */

__int64 __fastcall KiConnectSwInterrupt(struct _MDL *a1, unsigned int a2)
{
  return VslConnectSwInterrupt(a1, (unsigned __int64)a2 << 6);
}
