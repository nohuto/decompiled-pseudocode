/*
 * XREFs of sub_180011234 @ 0x180011234
 * Callers:
 *     unknown_libname_7 @ 0x180046099 (unknown_libname_7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180011234(unsigned int *a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    result = a1[3];
    *(_DWORD *)(*(_QWORD *)a1 + 16LL) = result;
  }
  return result;
}
