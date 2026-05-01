/*
 * XREFs of sub_18001F210 @ 0x18001F210
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     sub_18001F89C @ 0x18001F89C (sub_18001F89C.c)
 *     sub_18001F930 @ 0x18001F930 (sub_18001F930.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18001F210(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = (volatile signed __int32 *)a1[28];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = a1[26];
  if ( v5 )
  {
    a1[26] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_18001F89C(a1 + 24);
  sub_18001F89C(a1 + 22);
  sub_18001F89C(a1 + 20);
  sub_18001F89C(a1 + 18);
  sub_18001F930(a1 + 15);
  v6 = a1[14];
  if ( v6 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void *)a1[11];
  if ( v7 )
  {
    CoTaskMemFree(v7);
    a1[11] = 0LL;
  }
  a1[12] = 0LL;
  a1[13] = 0LL;
  v8 = (void *)a1[8];
  if ( v8 )
  {
    CoTaskMemFree(v8);
    a1[8] = 0LL;
  }
  a1[9] = 0LL;
  a1[10] = 0LL;
  sub_18000E744((__int64)a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 232LL);
  return a1;
}
