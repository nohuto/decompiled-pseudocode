/*
 * XREFs of sub_180067A60 @ 0x180067A60
 * Callers:
 *     sub_180124BAD @ 0x180124BAD (sub_180124BAD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 56);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v4;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *(_QWORD *)(v4 + 56) = 0LL;
      }
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
