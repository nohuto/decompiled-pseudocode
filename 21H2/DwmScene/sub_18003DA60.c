/*
 * XREFs of sub_18003DA60 @ 0x18003DA60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038328 @ 0x180038328 (sub_180038328.c)
 *     sub_1800D2594 @ 0x1800D2594 (sub_1800D2594.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003DA60(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  char v4; // di
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-18h]
  _BYTE v17[8]; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+20h]

  LODWORD(v19) = 0;
  v13 = 0LL;
  if ( *a2 )
  {
    v3 = (__int64 *)sub_1800D2594(*a2, v17, *(unsigned int *)(a1 + 88));
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v16 = 0LL;
    v3 = (__int64 *)&v15;
    v4 = 2;
    v5 = 0LL;
  }
  *(_QWORD *)&v13 = v5;
  *((_QWORD *)&v13 + 1) = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v6 = v16;
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    v7 = v18;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  v14 = 0LL;
  sub_180038328((__int64 *)&v14, &v13);
  if ( (_QWORD)v14 )
  {
    v8 = *(_QWORD *)(v14 + 144);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v4 |= 0xCu;
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
    v8 = v19;
  }
  if ( (v4 & 4) != 0 && v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v9);
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v12 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  return result;
}
