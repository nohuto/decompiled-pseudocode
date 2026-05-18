/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18000AB24
 * Callers:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x18000A7B8 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
