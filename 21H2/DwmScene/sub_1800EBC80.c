/*
 * XREFs of sub_1800EBC80 @ 0x1800EBC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008556C @ 0x18008556C (sub_18008556C.c)
 *     sub_18009B484 @ 0x18009B484 (sub_18009B484.c)
 *     sub_18009B4B0 @ 0x18009B4B0 (sub_18009B4B0.c)
 *     sub_1800B2630 @ 0x1800B2630 (sub_1800B2630.c)
 *     sub_1800F5898 @ 0x1800F5898 (sub_1800F5898.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EBC80(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int128 v12; // [rsp+30h] [rbp-69h] BYREF
  __int128 v13; // [rsp+40h] [rbp-59h] BYREF
  int v14; // [rsp+50h] [rbp-49h] BYREF
  __int128 v15; // [rsp+54h] [rbp-45h]
  int v16; // [rsp+64h] [rbp-35h]
  __int128 v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+78h] [rbp-21h]
  __int128 v19; // [rsp+7Ch] [rbp-1Dh]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __m128 v21[4]; // [rsp+90h] [rbp-9h] BYREF

  v13 = 0LL;
  sub_18009B484(a2, &v13);
  v12 = 0LL;
  result = (__int64)sub_18009B4B0(a2, &v12, a3, 0);
  if ( (_QWORD)v12 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(a2 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(a2 + 56);
          v7 = *(volatile signed __int32 **)(a2 + 64);
          break;
        }
      }
    }
    sub_18008556C(v6, (__int64)v21);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v14 = 1065353216;
    v15 = 0LL;
    v16 = 1065353216;
    v17 = 0LL;
    v18 = 1065353216;
    v19 = 0LL;
    v20 = 1065353216;
    sub_1800B2630(v21, &v14);
    result = sub_1800F5898(v12);
  }
  v10 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
  if ( *((_QWORD *)&v12 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
