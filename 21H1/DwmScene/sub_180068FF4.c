/*
 * XREFs of sub_180068FF4 @ 0x180068FF4
 * Callers:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_18006A1E4 @ 0x18006A1E4 (sub_18006A1E4.c)
 *     sub_18011598C @ 0x18011598C (sub_18011598C.c)
 *     sub_1801159C0 @ 0x1801159C0 (sub_1801159C0.c)
 *     sub_180115E98 @ 0x180115E98 (sub_180115E98.c)
 *     sub_18011A90C @ 0x18011A90C (sub_18011A90C.c)
 *     sub_18011BC30 @ 0x18011BC30 (sub_18011BC30.c)
 *     sub_18011D080 @ 0x18011D080 (sub_18011D080.c)
 *     sub_18011D1B0 @ 0x18011D1B0 (sub_18011D1B0.c)
 *     sub_18011D3A0 @ 0x18011D3A0 (sub_18011D3A0.c)
 *     sub_18012B028 @ 0x18012B028 (sub_18012B028.c)
 *     sub_180133A60 @ 0x180133A60 (sub_180133A60.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068FF4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 *v8; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v7) )
  {
    sub_180068FF4(a1, a2, i[2]);
    v7 = i;
    i = (__int64 *)*i;
    v8 = (__int64 *)v7[12];
    if ( v8 )
    {
      LOBYTE(v6) = v8 != v7 + 5;
      (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 32))(v8, v6);
      v7[12] = 0LL;
    }
  }
  return result;
}
