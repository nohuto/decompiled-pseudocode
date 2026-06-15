/*
 * XREFs of sub_180140B5C @ 0x180140B5C
 * Callers:
 *     sub_180140C80 @ 0x180140C80 (sub_180140C80.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1801402F8 @ 0x1801402F8 (sub_1801402F8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180140B5C(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = 0LL;
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 48));
    v3 = *(_QWORD *)(a1 + 104);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( !v4 )
        sub_1800B8610(-2147467259);
      v2 = *(void (__fastcall ****)(_QWORD, __int64))(v4 + 16);
    }
    if ( v6 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v6 = 0;
    }
    if ( !v3 )
      break;
    (**v2)(v2, a1);
    sub_180066980((__int64)&v7, (struct _RTL_CRITICAL_SECTION *)(a1 + 48));
    sub_1801402F8((__int64 *)(a1 + 88), &v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
    v9 = 0LL;
    if ( v8 )
    {
      LeaveCriticalSection(v7);
      v8 = 0;
    }
  }
}
