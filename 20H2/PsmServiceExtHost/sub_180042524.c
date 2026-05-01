/*
 * XREFs of sub_180042524 @ 0x180042524
 * Callers:
 *     sub_1800422A4 @ 0x1800422A4 (sub_1800422A4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180042524(__int64 a1, const WCHAR *a2)
{
  HMODULE LibraryW; // rax
  HMODULE v4; // rbx
  FARPROC ProcAddress; // rax

  LibraryW = LoadLibraryW(a2);
  v4 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "Register");
    if ( ProcAddress )
      ((void (__fastcall *)(__int64))ProcAddress)(a1);
    LODWORD(LibraryW) = FreeLibrary(v4);
  }
  return (int)LibraryW;
}
