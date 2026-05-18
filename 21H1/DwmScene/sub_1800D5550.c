/*
 * XREFs of sub_1800D5550 @ 0x1800D5550
 * Callers:
 *     sub_1800D5398 @ 0x1800D5398 (sub_1800D5398.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D5550(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx

  if ( a4(a2, a1) )
  {
    v8 = *a2;
    *a2 = *a1;
    v9 = a1[1];
    *a1 = v8;
    v10 = a2[1];
    a2[1] = v9;
    a1[1] = v10;
  }
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v12 = *a3;
    *a3 = *a2;
    v13 = a2[1];
    *a2 = v12;
    v14 = a3[1];
    a3[1] = v13;
    a2[1] = v14;
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v15 = *a2;
      *a2 = *a1;
      result = a1[1];
      *a1 = v15;
      v16 = a2[1];
      a2[1] = result;
      a1[1] = v16;
    }
  }
  return result;
}
