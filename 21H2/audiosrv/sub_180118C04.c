/*
 * XREFs of sub_180118C04 @ 0x180118C04
 * Callers:
 *     unknown_libname_262 @ 0x18007C07F (unknown_libname_262.c)
 * Callees:
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 */

__int64 __fastcall sub_180118C04(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_180047FDC(*(_QWORD *)a1, 0);
  }
  return result;
}
