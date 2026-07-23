/*
 * XREFs of RtlGetProcessHeaps @ 0x1800F21F0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800F2FB0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

ULONG __cdecl RtlGetProcessHeaps(ULONG NumberOfHeaps, PVOID *ProcessHeaps)
{
  __int64 v4; // rax
  ULONG v5; // ebx
  __int64 v6; // rax
  PVOID *v8; // [rsp+20h] [rbp-28h] BYREF
  PVOID *v9; // [rsp+28h] [rbp-20h]
  ULONG v10; // [rsp+30h] [rbp-18h]

  v10 = 0;
  v9 = ProcessHeaps;
  v8 = &ProcessHeaps[NumberOfHeaps];
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlGetProcessHeapsCallback, (__int64)&v8, 2);
  v4 = (char *)v9 - (char *)ProcessHeaps;
  v5 = v10;
  v6 = v4 >> 3;
  if ( dword_1801649B8 )
    v5 += ((__int64 (__fastcall *)(_QWORD))qword_180164A00)(NumberOfHeaps - (unsigned int)v6);
  return v5;
}
