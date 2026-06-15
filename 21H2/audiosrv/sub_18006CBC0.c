/*
 * XREFs of sub_18006CBC0 @ 0x18006CBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006CC20 @ 0x18006CC20 (sub_18006CC20.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006CBC0(unsigned int a1)
{
  ULONG (__stdcall *RtlNtStatusToDosErrorNoTeb)(NTSTATUS); // rax
  unsigned int v2; // ebx
  HMODULE v4; // rax

  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))qword_18019E408;
  v2 = 0;
  if ( qword_18019E408 )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  v4 = (HMODULE)sub_18006CC20();
  RtlNtStatusToDosErrorNoTeb = (ULONG (__stdcall *)(NTSTATUS))GetProcAddress(v4, "RtlNtStatusToDosErrorNoTeb");
  qword_18019E408 = (__int64)RtlNtStatusToDosErrorNoTeb;
  if ( RtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))RtlNtStatusToDosErrorNoTeb)(a1);
  return v2;
}
