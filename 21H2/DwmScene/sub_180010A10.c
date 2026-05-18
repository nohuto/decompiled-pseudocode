/*
 * XREFs of sub_180010A10 @ 0x180010A10
 * Callers:
 *     sub_18000F9B8 @ 0x18000F9B8 (sub_18000F9B8.c)
 *     sub_1800723C0 @ 0x1800723C0 (sub_1800723C0.c)
 *     sub_180075410 @ 0x180075410 (sub_180075410.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010A10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r15
  volatile signed __int32 *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        v10 = *(volatile signed __int32 **)(v4 + 8);
        if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        v4 += 16LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v11 = (a1[2] - v4) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v11 >= 0x1000 )
    {
      v12 = *(_QWORD *)(v4 - 8);
      v13 = v11 + 39;
      if ( (unsigned __int64)(v4 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v13);
        JUMPOUT(0x180010AE0LL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    result = j_j__o_free(v4);
  }
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  *a1 = a2;
  return result;
}
