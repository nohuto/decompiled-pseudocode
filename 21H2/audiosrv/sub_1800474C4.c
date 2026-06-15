/*
 * XREFs of sub_1800474C4 @ 0x1800474C4
 * Callers:
 *     unknown_libname_11 @ 0x180073603 (unknown_libname_11.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800474C4(void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
