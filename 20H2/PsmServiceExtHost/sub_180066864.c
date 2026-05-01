/*
 * XREFs of sub_180066864 @ 0x180066864
 * Callers:
 *     sub_180065BE0 @ 0x180065BE0 (sub_180065BE0.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 * Callees:
 *     sub_1800384E8 @ 0x1800384E8 (sub_1800384E8.c)
 */

void __fastcall sub_180066864(void **a1, void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_1800384E8(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
