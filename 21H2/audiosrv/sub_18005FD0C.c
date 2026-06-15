/*
 * XREFs of sub_18005FD0C @ 0x18005FD0C
 * Callers:
 *     sub_18005F8F8 @ 0x18005F8F8 (sub_18005F8F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005FD0C(HSTRING *a1, HSTRING a2)
{
  HSTRING v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    WindowsDeleteString(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
