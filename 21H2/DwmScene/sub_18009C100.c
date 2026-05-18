/*
 * XREFs of sub_18009C100 @ 0x18009C100
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_180092408 @ 0x180092408 (sub_180092408.c)
 *     sub_18009B3BC @ 0x18009B3BC (sub_18009B3BC.c)
 *     sub_1800AA300 @ 0x1800AA300 (sub_1800AA300.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18009C100(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int8 v15; // di
  unsigned __int8 v16; // si
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  signed __int32 v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h]
  volatile signed __int32 *v27; // [rsp+48h] [rbp-38h]
  _BYTE v28[8]; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v29; // [rsp+58h] [rbp-28h]
  __int128 v30; // [rsp+60h] [rbp-20h]

  v4 = 0LL;
  v5 = a1[13];
  v6 = 1;
  if ( (a1[14] - v5) / 88 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v5 + v7);
      if ( v8 && *(_BYTE *)(v5 + v7 + 16) )
      {
        v9 = *(volatile signed __int32 **)(v8 + 144);
        if ( v9 )
        {
          _InterlockedAdd(v9 + 2, 1u);
          v9 = *(volatile signed __int32 **)(v8 + 144);
        }
        v26 = *(_QWORD *)(v8 + 136);
        v27 = v9;
        v10 = (_QWORD *)sub_1800AA300(v26, v28);
        (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, a1, v4, a2);
        v11 = v29;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        if ( v9 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
            if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          }
        }
      }
      ++v4;
      v7 += 88LL;
      v5 = a1[13];
    }
    while ( v4 < (a1[14] - v5) / 88 );
  }
  v25 = 0LL;
  result = (__int64)sub_18009B3BC((__int64)a1, &v25, 0LL);
  if ( (_QWORD)v25 )
  {
    v30 = 0LL;
    v13 = a1[8];
    if ( v13 )
    {
      while ( 1 )
      {
        v19 = *(_DWORD *)(v13 + 8);
        if ( !v19 )
          break;
        if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v19 + 1, v19) )
        {
          v14 = a1[7];
          v30 = *(_OWORD *)(a1 + 7);
          goto LABEL_19;
        }
      }
    }
    v14 = v30;
LABEL_19:
    v15 = sub_180092408(v25, 9u);
    v16 = sub_180092408(v25, 8u);
    sub_18008933C(v14);
    v17 = *(_QWORD *)(v14 + 448);
    if ( v16 )
      v18 = v17 | 0x100;
    else
      v18 = v17 & 0xFFFFFFFFFFFFFEFFuLL;
    *(_QWORD *)(v14 + 448) = v18;
    sub_18008933C(v14);
    v20 = *(_QWORD *)(v14 + 448);
    if ( v15 )
      v21 = v20 | 0x200;
    else
      v21 = v20 & 0xFFFFFFFFFFFFFDFFuLL;
    *(_QWORD *)(v14 + 448) = v21;
    if ( !v15 && v16 )
      v6 = 0;
    sub_18008933C(v14);
    result = *(_QWORD *)(v14 + 448) & 0xFFFFFFFFFFFEFFFFuLL;
    v22 = *(_QWORD *)(v14 + 448) | 0x10000LL;
    if ( !v6 )
      v22 = *(_QWORD *)(v14 + 448) & 0xFFFFFFFFFFFEFFFFuLL;
    *(_QWORD *)(v14 + 448) = v22;
    if ( *((_QWORD *)&v30 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v23 = *((_QWORD *)&v30 + 1);
        (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v25 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v24 = *((_QWORD *)&v25 + 1);
      (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
    }
  }
  return result;
}
