/*
 * XREFs of sub_180003EB0 @ 0x180003EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180003EB0(unsigned int a1)
{
  ULONG (__stdcall *RtlNtStatusToDosErrorNoTeb)(NTSTATUS); // rax
  unsigned int v2; // ebx
  HMODULE ModuleHandleW; // rax

  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))qword_18005AD38;
  v2 = 0;
  if ( qword_18005AD38 )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))GetProcAddress(
                                                                ModuleHandleW,
                                                                "RtlNtStatusToDosErrorNoTeb");
  qword_18005AD38 = (__int64)RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  return v2;
}
