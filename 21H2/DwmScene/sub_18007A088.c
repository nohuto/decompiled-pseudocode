/*
 * XREFs of sub_18007A088 @ 0x18007A088
 * Callers:
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_180081AC8 @ 0x180081AC8 (sub_180081AC8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007A088(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v3; // rax
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v3 = (volatile signed __int32 *)a2[1];
  a2[1] = 0LL;
  v7 = v3;
  result = sub_180081AC8(a1 + 168, &v6);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v5 = v7;
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
