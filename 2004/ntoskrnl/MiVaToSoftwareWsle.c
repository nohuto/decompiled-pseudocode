/*
 * XREFs of MiVaToSoftwareWsle @ 0x140556FD8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToSoftwareWsle(__int64 a1, unsigned __int64 a2)
{
  return qword_140C4E120[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
