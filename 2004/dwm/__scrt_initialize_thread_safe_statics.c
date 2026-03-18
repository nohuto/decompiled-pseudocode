/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x140003640
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x140003410 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x14000361C (atexit.c)
 *     __scrt_fastfail @ 0x140003B00 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionAndSpinCount(&CriticalSection, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_12;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  v2 = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v3 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  v4 = v3;
  if ( ProcAddress && v2 && v3 )
  {
    hHandle = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_140015900);
    qword_140015910 = __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    qword_140015918 = __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_12:
    _scrt_fastfail(7LL);
    JUMPOUT(0x140003792LL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
  {
    _scrt_fastfail(7LL);
    goto LABEL_12;
  }
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
