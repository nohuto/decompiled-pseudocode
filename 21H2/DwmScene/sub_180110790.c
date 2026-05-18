/*
 * XREFs of sub_180110790 @ 0x180110790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_18009B484 @ 0x18009B484 (sub_18009B484.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180110790(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  signed __int32 v3; // eax
  volatile signed __int32 *v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v2 = sub_18009B484(a2, &v6);
  LOBYTE(v3) = sub_180097958(*v2, 0);
  v4 = v7;
  if ( v7 )
  {
    v3 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( v3 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      v3 = _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( v3 == 1 )
        LOBYTE(v3) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return v3;
}
