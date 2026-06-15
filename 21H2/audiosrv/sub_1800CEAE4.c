/*
 * XREFs of sub_1800CEAE4 @ 0x1800CEAE4
 * Callers:
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 * Callees:
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CECB0 @ 0x1800CECB0 (sub_1800CECB0.c)
 *     sub_1800CF544 @ 0x1800CF544 (sub_1800CF544.c)
 */

__int64 __fastcall sub_1800CEAE4(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v6 = a1 + 56;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v10 = sub_18002C4D0(v6);
  if ( v10 )
  {
    do
    {
      v8 = *(_QWORD *)sub_1800CF544(v9, v10);
      if ( v8 && *(_DWORD *)(v8 + 716) == a2 )
      {
        v11 = *(_QWORD *)(v8 + 680) - 0x455E4240A9EF3FD9LL;
        if ( *(_QWORD *)(v8 + 680) == 0x455E4240A9EF3FD9LL )
          v11 = *(_QWORD *)(v8 + 688) + 0x4D78E7CF4C0D2A5CLL;
        if ( !v11 )
          break;
      }
      v8 = 0LL;
      v10 = sub_1800CECB0(v6, v10);
    }
    while ( v10 );
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *a4 = v8;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8 == 0 ? 0x80070002 : 0;
}
