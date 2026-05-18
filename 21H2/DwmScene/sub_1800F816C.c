/*
 * XREFs of sub_1800F816C @ 0x1800F816C
 * Callers:
 *     sub_1800F85B0 @ 0x1800F85B0 (sub_1800F85B0.c)
 *     sub_1800F8654 @ 0x1800F8654 (sub_1800F8654.c)
 * Callees:
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F816C(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx

  v2 = a2;
  if ( a2 == 1 )
  {
    v4 = (volatile signed __int32 *)a1[23];
    a1[23] = 0LL;
    a1[22] = 0LL;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  sub_1800693F8(a1 + 60);
  result = 2 * (v2 + 24);
  a1[result] = 0LL;
  v6 = (volatile signed __int32 *)a1[2 * v2 + 49];
  a1[result + 1] = 0LL;
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
