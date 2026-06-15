/*
 * XREFs of sub_1800B5FF8 @ 0x1800B5FF8
 * Callers:
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 * Callees:
 *     sub_180068E94 @ 0x180068E94 (sub_180068E94.c)
 */

void __fastcall sub_1800B5FF8(void **a1, void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180068E94(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
