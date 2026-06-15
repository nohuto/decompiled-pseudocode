/*
 * XREFs of sub_180066884 @ 0x180066884
 * Callers:
 *     sub_1800667A8 @ 0x1800667A8 (sub_1800667A8.c)
 *     sub_18010F750 @ 0x18010F750 (sub_18010F750.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066884(__int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = 0;
  sub_180066980(&lpCriticalSection, a1 + 80);
  if ( !*(_DWORD *)(a1 + 64) )
  {
    v3 = (__int64 *)(a1 + 40);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48), a1 + 40);
    if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 120LL))(a1 + 8), v4 < 0) )
      v2 = v4;
    else
      *(_DWORD *)(a1 + 64) = 1;
    if ( v2 < 0 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
