/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01D7CA4
 * Callers:
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
