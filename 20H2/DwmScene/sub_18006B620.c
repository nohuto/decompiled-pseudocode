/*
 * XREFs of sub_18006B620 @ 0x18006B620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018074 @ 0x180018074 (sub_180018074.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180069610 @ 0x180069610 (sub_180069610.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006B620(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  _QWORD *v6; // rdx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  v4 = a1 + 8;
  v10 = a1 + 8;
  sub_1800619A8(a1 + 8);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_180069610((__int64 **)(a1 + 24), (__int64)&v8, &v9);
  v5 = v8;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v6 = (_QWORD *)v5[6];
  if ( (_QWORD *)v5[7] == v6 )
  {
    sub_180018074(v5 + 5, v6, a2);
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
  return sub_180061A34(v4);
}
