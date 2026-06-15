/*
 * XREFs of sub_1800FB8A4 @ 0x1800FB8A4
 * Callers:
 *     sub_1800FC860 @ 0x1800FC860 (sub_1800FC860.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800FB8A4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v10 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    for ( i = 0LL; i < 0x50; i += 16LL )
    {
      v7 = *(__int64 *)((char *)&off_18019C550 + i);
      v8 = *(_QWORD *)a3 - *(_QWORD *)v7;
      if ( *(_QWORD *)a3 == *(_QWORD *)v7 )
      {
        v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v7 + 8);
        if ( !v8 )
          v8 = *(unsigned int *)(a3 + 16) - (unsigned __int64)*(unsigned int *)(v7 + 16);
      }
      if ( !v8 )
        (*(void (__fastcall **)(__int64, __int64, __int64))((char *)&off_18019C550 + i + 8))(a1, a2, a3);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
}
