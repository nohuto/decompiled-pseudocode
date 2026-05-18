/*
 * XREFs of sub_18007D180 @ 0x18007D180
 * Callers:
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_1800816F0 @ 0x1800816F0 (sub_1800816F0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007D180(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // r14
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 *j; // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  volatile signed __int32 *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h]
  _BYTE v14[32]; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(__int64 **)(a1 + 896);
  v2 = a1 + 888;
  for ( i = *(__int64 **)(a1 + 888); i != v1; i += 2 )
  {
    v5 = i[1];
    if ( !(v5 ? *(_DWORD *)(v5 + 8) : 0) )
      break;
  }
  if ( i != v1 )
  {
    for ( j = i + 2; j != v1; j += 2 )
    {
      v8 = j[1];
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 8);
      else
        v9 = 0;
      if ( v9 )
      {
        j[1] = 0LL;
        v10 = *j;
        *j = 0LL;
        v11 = (volatile signed __int32 *)i[1];
        *i = v10;
        v13 = v8;
        i[1] = v8;
        if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        i += 2;
      }
    }
  }
  return sub_1800816F0(v2, v14, i, *(_QWORD *)(a1 + 896), v13);
}
