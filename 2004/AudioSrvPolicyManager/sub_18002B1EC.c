/*
 * XREFs of sub_18002B1EC @ 0x18002B1EC
 * Callers:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18002B1EC(__int64 *a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r14
  volatile signed __int32 *v7; // rdx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *a1;
  if ( v3 )
  {
    v4 = 0;
    if ( *((int *)a1 + 4) > 0 )
    {
      v5 = 0LL;
      v6 = 0LL;
      do
      {
        v7 = (volatile signed __int32 *)(*(_QWORD *)(v6 + *a1) - 24LL);
        if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
        v8 = *(volatile signed __int32 **)(a1[1] + v5 + 8);
        if ( v8 )
        {
          if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
            if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
          }
        }
        ++v4;
        v6 += 8LL;
        v5 += 16LL;
      }
      while ( v4 < *((_DWORD *)a1 + 4) );
      v3 = *a1;
    }
    result = (_UNKNOWN **)_o_free(v3);
    *a1 = 0LL;
  }
  v9 = a1[1];
  if ( v9 )
  {
    result = (_UNKNOWN **)_o_free(v9);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 4) = 0;
  return result;
}
