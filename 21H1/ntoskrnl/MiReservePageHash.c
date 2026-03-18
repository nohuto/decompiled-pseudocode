/*
 * XREFs of MiReservePageHash @ 0x1403BBD08
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C4EE80,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
