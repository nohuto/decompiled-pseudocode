/*
 * XREFs of sub_18002B300 @ 0x18002B300
 * Callers:
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_180031150 @ 0x180031150 (sub_180031150.c)
 *     sub_180036DF4 @ 0x180036DF4 (sub_180036DF4.c)
 *     sub_180038278 @ 0x180038278 (sub_180038278.c)
 *     sub_1800387CC @ 0x1800387CC (sub_1800387CC.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18002B300(void **a1, void **a2)
{
  void *v4; // rbp
  void *v5; // r14
  DWORD LastError; // ebx

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( *a1 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v4);
      SetLastError(LastError);
    }
    *a1 = v5;
    *a2 = 0LL;
  }
  return a1;
}
