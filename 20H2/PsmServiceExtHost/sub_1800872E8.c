/*
 * XREFs of sub_1800872E8 @ 0x1800872E8
 * Callers:
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     SetLastError @ 0x18004544C (SetLastError.c)
 *     GetProcAddress @ 0x180045464 (GetProcAddress.c)
 *     FreeLibrary @ 0x180045470 (FreeLibrary.c)
 *     LoadLibraryExW @ 0x180046144 (LoadLibraryExW.c)
 *     sub_1800461E8 @ 0x1800461E8 (sub_1800461E8.c)
 *     sub_1800462C8 @ 0x1800462C8 (sub_1800462C8.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800872E8(HWND hwnd, unsigned int a2)
{
  HMODULE Library; // rdi
  DWORD v5; // ecx
  unsigned int v6; // ebx
  UINT v7; // eax
  FARPROC RegisterErrorReportingDialog; // rax

  Library = 0LL;
  if ( !hwnd || !a2 )
    goto LABEL_13;
  if ( !sub_1800462C8() || !sub_1800461E8() )
  {
    v5 = 127;
    goto LABEL_7;
  }
  Library = LoadLibraryExW(L"user32.dll", 0LL, 0x800u);
  if ( !Library )
  {
    v5 = 126;
LABEL_7:
    v6 = 0;
    SetLastError(v5);
    return v6;
  }
  v7 = RegisterWindowMessageW(L"WerHangRepMessage");
  if ( !v7 )
    goto LABEL_13;
  v6 = ChangeWindowMessageFilterEx(hwnd, v7, 1u, 0LL);
  if ( !v6 )
    goto LABEL_14;
  RegisterErrorReportingDialog = GetProcAddress(Library, "RegisterErrorReportingDialog");
  if ( RegisterErrorReportingDialog )
    v6 = ((__int64 (__fastcall *)(HWND, _QWORD))RegisterErrorReportingDialog)(hwnd, a2);
  else
LABEL_13:
    v6 = 0;
LABEL_14:
  if ( Library )
    FreeLibrary(Library);
  return v6;
}
