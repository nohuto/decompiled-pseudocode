/*
 * XREFs of sub_180086D34 @ 0x180086D34
 * Callers:
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 * Callees:
 *     sub_1800714AC @ 0x1800714AC (sub_1800714AC.c)
 *     sub_180087A58 @ 0x180087A58 (sub_180087A58.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180086D34(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v18[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  sub_18008933C(a1);
  for ( i = *(_QWORD **)(a1 + 32); i != *(_QWORD **)(a1 + 40); i += 2 )
  {
    if ( *i == *a2 )
      break;
  }
  sub_1800714AC(a1 + 32, &v17, (__int64)i);
  v5 = *a2;
  sub_180089274(*a2);
  v19 = 0LL;
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v19 = *(_OWORD *)(v5 + 112);
        break;
      }
    }
  }
  v8 = *a2;
  result = sub_180089274(*a2);
  v20 = 0LL;
  v10 = *(_QWORD *)(v8 + 136);
  if ( v10 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v10 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), result + 1, result) )
      {
        *(_QWORD *)&v20 = *(_QWORD *)(v8 + 128);
        result = *(_QWORD *)(v8 + 136);
        *((_QWORD *)&v20 + 1) = result;
        break;
      }
    }
  }
  if ( (_QWORD)v19 )
  {
    sub_180087A58(v19, &v20);
    v18[1] = 0LL;
    v11 = *a2;
    result = sub_18008933C(*a2);
    *(_QWORD *)(v11 + 112) = 0LL;
    v12 = *(volatile signed __int32 **)(v11 + 120);
    *(_QWORD *)(v11 + 120) = 0LL;
    if ( v12 )
    {
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v13 = v20;
  if ( (_QWORD)v20 )
  {
    sub_18008933C(v20);
    if ( *((_QWORD *)&v19 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 12LL));
    *(_QWORD *)(v13 + 112) = v19;
    v14 = *(volatile signed __int32 **)(v13 + 120);
    *(_QWORD *)(v13 + 120) = *((_QWORD *)&v19 + 1);
    if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    v18[0] = 0LL;
    result = sub_180087A58(*a2, v18);
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v15 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD))&v20 + 1))(*((_QWORD *)&v20 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  if ( *((_QWORD *)&v19 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v16 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  return result;
}
