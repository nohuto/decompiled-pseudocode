/*
 * XREFs of ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x18026BD0C
 * Callers:
 *     ??1CFailFastInScope@@QEAA@XZ @ 0x18007CD98 (--1CFailFastInScope@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MilWerUnregisterMemoryBlock(const void *a1)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerUnregisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *))ProcAddress)(a1);
  }
}
