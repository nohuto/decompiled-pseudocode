/*
 * XREFs of MiReservePageHash @ 0x1403BFCFC
 * Callers:
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407B7250 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140C4EF40,
             (unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0),
             a3,
             a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
