/*
 * XREFs of sub_1800D75C8 @ 0x1800D75C8
 * Callers:
 *     sub_1800047A4 @ 0x1800047A4 (sub_1800047A4.c)
 * Callees:
 *     <none>
 */

char sub_1800D75C8()
{
  HMODULE Library; // rax

  if ( hLibModule && NtDeleteKey )
  {
    LOBYTE(Library) = 1;
  }
  else
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    hLibModule = Library;
    if ( Library )
    {
      NtDeleteKey = (NTSTATUS (__stdcall *)(HANDLE))GetProcAddress(Library, "NtDeleteKey");
      LOBYTE(Library) = NtDeleteKey != 0LL;
    }
  }
  return (char)Library;
}
