/*
 * XREFs of MiReservePageHash @ 0x1403BD028
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C4ED40,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0),
             a3,
             a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
