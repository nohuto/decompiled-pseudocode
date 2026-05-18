/*
 * XREFs of sub_180038680 @ 0x180038680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_1800392B0 @ 0x1800392B0 (sub_1800392B0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180038680(__int64 a1, _QWORD *a2, unsigned __int8 a3, char a4)
{
  unsigned int v5; // r15d
  __int64 *v7; // rcx
  char v8; // di
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rbx
  __int128 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v18; // [rsp+48h] [rbp-38h]
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  char v20; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-18h]
  __int128 v22; // [rsp+70h] [rbp-10h] BYREF

  v5 = a3;
  if ( *a2 )
  {
    sub_1800392B0(*a2 + 256LL, &v17, *(unsigned int *)(a1 + 88));
    v7 = &v17;
    v8 = 1;
    v9 = v17;
  }
  else
  {
    v21 = 0LL;
    v7 = (__int64 *)&v20;
    v8 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)&v16 = v9;
  *((_QWORD *)&v16 + 1) = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = v18;
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
  }
  v19 = 0LL;
  if ( *((_QWORD *)&v16 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
  v22 = v16;
  sub_180018B88(&v19, (__int64 *)&v22);
  v12 = *(_QWORD *)(v19 + 112);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = v5 | 2;
  if ( !a4 )
    v13 = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v12, v13);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( *((_QWORD *)&v19 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v15 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  if ( *((_QWORD *)&v16 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  return result;
}
