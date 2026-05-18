/*
 * XREFs of sub_180070EF0 @ 0x180070EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001851C @ 0x18001851C (sub_18001851C.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006EEE0 @ 0x18006EEE0 (sub_18006EEE0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180070EF0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  _QWORD *v6; // rdx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v10 = a1 + 8;
  sub_180067278(a1 + 8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18006EEE0((__int64 **)(a1 + 24), (__int64)&v8, &v9);
  v5 = v8;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = (_QWORD *)v5[6];
  if ( (_QWORD *)v5[7] == v6 )
  {
    sub_18001851C(v5 + 5, v6, a2);
  }
  else
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *v6 = *a2;
    v6[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[6] += 16LL;
  }
  return sub_180067304(v4);
}
