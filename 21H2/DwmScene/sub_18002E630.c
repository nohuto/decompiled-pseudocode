/*
 * XREFs of sub_18002E630 @ 0x18002E630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D6A0 @ 0x18002D6A0 (sub_18002D6A0.c)
 *     sub_18002F7A0 @ 0x18002F7A0 (sub_18002F7A0.c)
 *     sub_180038A7C @ 0x180038A7C (sub_180038A7C.c)
 *     sub_1800391CC @ 0x1800391CC (sub_1800391CC.c)
 *     sub_18006C578 @ 0x18006C578 (sub_18006C578.c)
 *     sub_18006C6B0 @ 0x18006C6B0 (sub_18006C6B0.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002E630(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  __int128 v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h]
  __int64 v16; // [rsp+B0h] [rbp+40h] BYREF

  v11 = 0LL;
  result = sub_18002F7A0(a1, &v11);
  if ( (_QWORD)v11 )
  {
    v3 = 0LL;
    v15 = 0LL;
    v12 = 0LL;
    v4 = (_QWORD *)sub_180070328();
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
      v3 = 0LL;
    }
    *(_QWORD *)&v12 = *v4;
    *((_QWORD *)&v12 + 1) = v5;
    if ( (_QWORD)v12 )
    {
      v10 = 0LL;
      sub_18002D6A0((__int64 *)&v10, &v12);
      v6 = (__int64 *)sub_1800391CC(v10, &v16);
      v3 = *v6;
      *v6 = 0LL;
      v15 = v3;
      v7 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      sub_180038A7C(v10);
      if ( *((_QWORD *)&v10 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v8 = *((_QWORD *)&v10 + 1);
          (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
        }
        v3 = v15;
      }
    }
    v13 = 0LL;
    sub_18006C6B0(a1, &v13);
    v14 = 0LL;
    result = sub_18006C578(a1, &v14);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    }
    if ( v5 )
    {
      result = (unsigned int)_InterlockedDecrement(v5 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        result = (unsigned int)_InterlockedDecrement(v5 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v3 = v15;
    }
    if ( v3 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return result;
}
