/*
 * XREFs of sub_1800918B0 @ 0x1800918B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092424 @ 0x180092424 (sub_180092424.c)
 *     sub_180121E6C @ 0x180121E6C (sub_180121E6C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800918B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  volatile signed __int32 *v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+48h] [rbp-18h]

  v5 = a1;
  v15 = a3;
  v16 = 0LL;
  v6 = *a3;
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)a3[1];
  }
  *(_QWORD *)&v16 = v6;
  *((_QWORD *)&v16 + 1) = v7;
  if ( v6 )
    v8 = *(_QWORD *)(v6 + 152);
  else
    v8 = *(_QWORD *)(a1 + 32);
  if ( *(_WORD *)(a1 + 24) != 511 )
  {
    v17 = 0LL;
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v17 = *(_OWORD *)(a1 + 8);
          break;
        }
      }
    }
    if ( (_QWORD)v17 )
    {
      v14 = 0LL;
      if ( v7 )
        _InterlockedIncrement(v7 + 2);
      *(_QWORD *)&v14 = v6;
      *((_QWORD *)&v14 + 1) = v7;
      ((void (__fastcall *)(_QWORD, __int128 *, _QWORD, __int64))sub_180092424)(
        v17,
        &v14,
        *(unsigned __int16 *)(a1 + 24),
        v8);
    }
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL)) )
      {
        v11 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v17 + 1))(*((_QWORD *)&v17 + 1), v5);
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
    }
  }
  sub_180121E6C(a2, v5);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a2;
}
