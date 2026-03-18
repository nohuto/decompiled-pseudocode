/*
 * XREFs of MiVaToSoftwareWsle @ 0x140556988
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToSoftwareWsle(__int64 a1, unsigned __int64 a2)
{
  return qword_140C4E260[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
