/*
 * XREFs of sub_18000A890 @ 0x18000A890
 * Callers:
 *     unknown_libname_39 @ 0x180045FEF (unknown_libname_39.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18000A890(void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
