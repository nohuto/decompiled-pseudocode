/*
 * XREFs of sub_180118CDC @ 0x180118CDC
 * Callers:
 *     unknown_libname_263 @ 0x18007C0D9 (unknown_libname_263.c)
 * Callees:
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 */

__int64 __fastcall sub_180118CDC(__int64 a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = 2;
    v2 = *(_DWORD **)(a1 + 8);
    v3 = *(_QWORD *)a1;
    if ( *v2 != 3 )
      v1 = 0;
    return sub_180047FDC(v3, v1);
  }
  return result;
}
