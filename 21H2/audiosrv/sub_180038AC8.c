/*
 * XREFs of sub_180038AC8 @ 0x180038AC8
 * Callers:
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 * Callees:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180038AC8(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  *a1 = 0LL;
  v2 = sub_18006A18C(560LL, &unk_18019F848);
  if ( v2 )
  {
    v3 = sub_180038C20(v2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
