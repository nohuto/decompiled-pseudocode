/*
 * XREFs of sub_180038F20 @ 0x180038F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010534 @ 0x180010534 (sub_180010534.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 *     sub_180038198 @ 0x180038198 (sub_180038198.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     sub_180067F58 @ 0x180067F58 (sub_180067F58.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180038F20(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // r14d
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-39h] BYREF
  __int128 v16; // [rsp+28h] [rbp-31h] BYREF
  __int128 v17; // [rsp+38h] [rbp-21h] BYREF
  __int128 v18; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-1h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+17h]
  __int64 *v21; // [rsp+78h] [rbp+1Fh] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  if ( !(_BYTE)result )
  {
    v18 = 0LL;
    sub_18002D6A0((__int64 *)&v18, a2);
    v15 = 0LL;
    sub_1800391CC(v18, &v15);
    v21 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v15 + 912LL))(v15, 0LL, &v21);
    v17 = 0LL;
    v16 = 0LL;
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v16 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180038198((__int64 *)&v17, &v16);
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v8 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
    v9 = v17;
    sub_18002BE74(v17, v5);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = sub_180067F58(*a2, v19);
      if ( *(_QWORD *)(v10 + 24) >= 0x10uLL )
        v10 = *(_QWORD *)v10;
      sub_180010534(v21, (const char *)v10);
      if ( v20 >= 0x10 )
      {
        v11 = v19[0];
        if ( v20 + 1 >= 0x1000 )
        {
          v11 = *(_QWORD *)(v19[0] - 8LL);
          if ( (unsigned __int64)(v19[0] - v11 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v11, v20 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v11);
      }
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 144) + 464LL))(
        *(_QWORD *)(a1 + 144),
        v21,
        0LL);
    }
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
    }
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    }
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( *((_QWORD *)&v18 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v14 = *((_QWORD *)&v18 + 1);
        (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
      }
    }
  }
  return result;
}
