/*
 * XREFs of sub_18006FD70 @ 0x18006FD70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007044C @ 0x18007044C (sub_18007044C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006FD70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-18h]
  _BYTE v18[8]; // [rsp+60h] [rbp-10h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-8h]

  v15 = 0LL;
  sub_18007044C(a1, &v15, a3);
  v5 = *(_QWORD *)(a1 + 272);
  v6 = v15;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v16);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 88LL))(v5, v7, a2);
  v8 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    v6 = v15;
  }
  v9 = *(_QWORD *)(a1 + 272);
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v18);
  LOBYTE(v11) = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 104LL))(v9, v10, v11);
  v13 = v19;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *((_QWORD *)&v15 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v14 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  return result;
}
