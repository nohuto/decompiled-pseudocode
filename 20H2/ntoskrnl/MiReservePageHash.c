/*
 * XREFs of MiReservePageHash @ 0x1403BF4A8
 * Callers:
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407B25E0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C4EDC0,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
