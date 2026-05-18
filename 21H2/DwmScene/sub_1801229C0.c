/*
 * XREFs of sub_1801229C0 @ 0x1801229C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801229C0(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 v4; // rax
  void **v6; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+38h] [rbp-40h]
  void ***v8; // [rsp+68h] [rbp-10h]

  v2 = (volatile signed __int32 *)a2[1];
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)a2[1];
  }
  v8 = 0LL;
  v4 = *a2;
  v6 = &std::_Func_impl_no_alloc<_lambda_6b30083816be8ce536ed8143da6c63b4_,void,>::`vftable';
  v7 = 0LL;
  if ( v2 )
    _InterlockedIncrement(v2 + 2);
  *(_QWORD *)&v7 = v4;
  v8 = &v6;
  *((_QWORD *)&v7 + 1) = v2;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)a1 + 48LL))(a1, &v6);
}
