/*
 * XREFs of sub_18006CDDC @ 0x18006CDDC
 * Callers:
 *     unknown_libname_267 @ 0x18007C920 (unknown_libname_267.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006CDDC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(v1 + 16) = result;
  }
  return result;
}
