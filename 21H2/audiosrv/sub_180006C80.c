/*
 * XREFs of sub_180006C80 @ 0x180006C80
 * Callers:
 *     sub_180005BE4 @ 0x180005BE4 (sub_180005BE4.c)
 *     sub_180006A60 @ 0x180006A60 (sub_180006A60.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 *     sub_1800D4D18 @ 0x1800D4D18 (sub_1800D4D18.c)
 * Callees:
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

volatile signed __int32 *__fastcall sub_180006C80(volatile signed __int32 *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, __int64); // rax
  volatile signed __int32 *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r9

  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1);
  if ( *((int *)a1 + 4) >= 0 && v2 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1 )
  {
    v3 = a1;
    _InterlockedIncrement(a1 + 4);
  }
  else
  {
    v5 = (**v2)(v2, *((unsigned int *)a1 + 2), 2LL);
    v3 = (volatile signed __int32 *)v5;
    if ( !v5 )
      sub_1800BABDC();
    *(_DWORD *)(v5 + 8) = *((_DWORD *)a1 + 2);
    v6 = 2LL * (*((_DWORD *)a1 + 2) + 1);
    sub_18003447C(v5 + 24, v6, a1 + 6, v6);
  }
  return v3;
}
