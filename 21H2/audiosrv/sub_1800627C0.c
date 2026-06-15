/*
 * XREFs of sub_1800627C0 @ 0x1800627C0
 * Callers:
 *     sub_180062450 @ 0x180062450 (sub_180062450.c)
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 * Callees:
 *     sub_1800FFDC0 @ 0x1800FFDC0 (sub_1800FFDC0.c)
 */

void __fastcall sub_1800627C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_1800FFDC0(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
