/*
 * XREFs of sub_1800683A8 @ 0x1800683A8
 * Callers:
 *     sub_18010529C @ 0x18010529C (sub_18010529C.c)
 * Callees:
 *     sub_1800DA06C @ 0x1800DA06C (sub_1800DA06C.c)
 *     sub_1800DA59C @ 0x1800DA59C (sub_1800DA59C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800683A8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int128 v10; // rcx
  volatile signed __int32 *v11; // rbx
  unsigned int i; // esi
  unsigned int v13; // eax
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  signed __int32 v16; // eax
  __int128 v17; // [rsp+20h] [rbp-48h]
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int128 v19; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-18h] BYREF

  v17 = 0LL;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v8 + 8);
      if ( !v16 )
        break;
      if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v16 + 1, v16) )
      {
        v10 = *(_OWORD *)(a1 + 72);
        *((_QWORD *)&v17 + 1) = *((_QWORD *)&v10 + 1);
        goto LABEL_3;
      }
    }
  }
  v10 = 0LL;
LABEL_3:
  (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v10 + 200LL))(v10, &v20);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL)) )
    {
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 12LL)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  v18 = 0LL;
  sub_1800DA59C(*(_QWORD *)(a1 + 96) + 9256LL, &v18, 0LL);
  v11 = (volatile signed __int32 *)*((_QWORD *)&v18 + 1);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  for ( i = 0; i < 6; ++i )
  {
    v13 = v20;
    if ( _bittest((const int *)&v13, i) )
    {
      v19 = 0LL;
      sub_1800DA06C(*(_QWORD *)(a1 + 96) + 4632LL, i, &v19, 0LL);
      v14 = (volatile signed __int32 *)*((_QWORD *)&v19 + 1);
      if ( *((_QWORD *)&v19 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 8LL))(*(_QWORD *)(a1 + 96), a1);
  result = sub_1800DA59C(*(_QWORD *)(a1 + 96) + 9256LL, a2, 0LL);
  if ( a4 != -1 )
  {
    do
    {
      result = v20;
      if ( _bittest((const int *)&result, v9) )
        result = sub_1800DA06C(*(_QWORD *)(a1 + 96) + 4632LL, v9, a3, a4);
      ++v9;
    }
    while ( v9 < 6 );
  }
  return result;
}
