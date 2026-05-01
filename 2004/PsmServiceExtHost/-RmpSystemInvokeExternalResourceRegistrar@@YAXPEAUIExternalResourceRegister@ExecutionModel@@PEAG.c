/*
 * XREFs of ?RmpSystemInvokeExternalResourceRegistrar@@YAXPEAUIExternalResourceRegister@ExecutionModel@@PEAG@Z @ 0x180042078
 * Callers:
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800420E4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemInvokeExternalResourceRegistrar(
        struct ExecutionModel::IExternalResourceRegister *a1,
        unsigned __int16 *a2)
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
      ((void (__fastcall *)(struct ExecutionModel::IExternalResourceRegister *))ProcAddress)(a1);
    FreeLibrary(v4);
  }
}
