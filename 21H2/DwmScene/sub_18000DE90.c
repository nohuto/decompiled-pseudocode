/*
 * XREFs of sub_18000DE90 @ 0x18000DE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000DE90(unsigned int a1)
{
  FARPROC RtlNtStatusToDosErrorNoTeb; // rax
  unsigned int v2; // ebx
  HMODULE ModuleHandleW; // rax

  RtlNtStatusToDosErrorNoTeb = (FARPROC)qword_18021F620;
  v2 = 0;
  if ( qword_18021F620 )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlNtStatusToDosErrorNoTeb = GetProcAddress(ModuleHandleW, "RtlNtStatusToDosErrorNoTeb");
  qword_18021F620 = (__int64)RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  return v2;
}
