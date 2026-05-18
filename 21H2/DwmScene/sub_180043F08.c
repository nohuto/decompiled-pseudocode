/*
 * XREFs of sub_180043F08 @ 0x180043F08
 * Callers:
 *     sub_180043FF0 @ 0x180043FF0 (sub_180043FF0.c)
 * Callees:
 *     sub_1800258BC @ 0x1800258BC (sub_1800258BC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043F08(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  sub_1800258BC(a1 + 69, (__int64)(a1 + 69));
  v2 = (volatile signed __int32 *)a1[68];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = a1[66];
  if ( v3 )
  {
    a1[66] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[65];
  if ( v4 )
  {
    a1[65] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[64];
  if ( v5 )
  {
    a1[64] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_18006B074(a1);
}
