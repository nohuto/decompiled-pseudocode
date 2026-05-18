/*
 * XREFs of sub_1800836DC @ 0x1800836DC
 * Callers:
 *     sub_18007DBDC @ 0x18007DBDC (sub_18007DBDC.c)
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 * Callees:
 *     sub_18007FCE4 @ 0x18007FCE4 (sub_18007FCE4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800836DC(__int64 a1)
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

  result = sub_180083A6C(a1);
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
        sub_1800839A4(v5);
        v6 = *(_QWORD **)(v5 + 384);
        for ( i = *(_QWORD **)(v5 + 376); i != v6; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v5 + 104) = 1;
        result = sub_18007FCE4(a1, v5);
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
