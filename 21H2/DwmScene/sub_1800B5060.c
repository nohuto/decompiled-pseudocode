/*
 * XREFs of sub_1800B5060 @ 0x1800B5060
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 * Callees:
 *     sub_1800714AC @ 0x1800714AC (sub_1800714AC.c)
 *     sub_1800B5DF8 @ 0x1800B5DF8 (sub_1800B5DF8.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800B5060(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // r8
  volatile signed __int32 *v7; // rdi
  int result; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
  {
LABEL_13:
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v6 = *(_QWORD **)(a1 + 40);
  if ( v6 != *(_QWORD **)(a1 + 48) )
  {
    do
    {
      if ( *v6 == *a2 )
        break;
      v6 += 2;
    }
    while ( v6 != *(_QWORD **)(a1 + 48) );
    if ( v6 != *(_QWORD **)(a1 + 48) )
    {
      sub_1800714AC(a1 + 40, v10, (__int64)v6);
      v7 = (volatile signed __int32 *)a2[1];
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 3);
        v7 = (volatile signed __int32 *)a2[1];
      }
      v9[0] = *a2;
      v9[1] = v7;
      sub_1800B5DF8(a1 + 88, v9);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  result = Mtx_unlock(v4);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_13;
  }
  return result;
}
