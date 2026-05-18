/*
 * XREFs of sub_180088FAC @ 0x180088FAC
 * Callers:
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 * Callees:
 *     sub_1800855B4 @ 0x1800855B4 (sub_1800855B4.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180088FAC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *i; // r14
  signed __int32 v8; // eax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-38h]

  result = sub_18008933C(a1);
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v3 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), result + 1, result) )
      {
        result = *(_QWORD *)(a1 + 72);
        *(_QWORD *)&v10 = result;
        v4 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v10 + 1) = v4;
        goto LABEL_3;
      }
    }
  }
  v4 = 0LL;
LABEL_3:
  if ( (_QWORD)v10 )
  {
    v5 = a1;
    if ( a1 )
    {
      do
      {
        sub_180089274(v5);
        v6 = *(_QWORD **)(v5 + 384);
        for ( i = *(_QWORD **)(v5 + 376); i != v6; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v5 + 104) = 1;
        result = sub_1800855B4(a1, v5);
        v5 = result;
      }
      while ( result );
    }
  }
  if ( v4 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  return result;
}
