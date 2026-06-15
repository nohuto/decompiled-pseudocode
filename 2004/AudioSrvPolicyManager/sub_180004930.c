/*
 * XREFs of sub_180004930 @ 0x180004930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004930(unsigned int a1)
{
  ULONG (__stdcall *RtlNtStatusToDosErrorNoTeb)(NTSTATUS); // rax
  unsigned int v2; // ebx
  HMODULE ModuleHandleW; // rax

  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))qword_18004FE08;
  v2 = 0;
  if ( qword_18004FE08 )
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
  qword_18004FE08 = (__int64)RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  return v2;
}
