/*
 * XREFs of sub_180044720 @ 0x180044720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_180043B54 @ 0x180043B54 (sub_180043B54.c)
 *     sub_180043D90 @ 0x180043D90 (sub_180043D90.c)
 *     sub_180044ADC @ 0x180044ADC (sub_180044ADC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180044720(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 *v7; // rcx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  bool v10; // zf
  __int64 v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13[6]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF

  v12 = 0LL;
  sub_180044ADC(a1, &v12);
  v14 = 0LL;
  result = (__int64)sub_180029F94(v12, &v14);
  v3 = *(_QWORD **)(a1 + 552);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = (__int64 *)(v4[5] + 48LL);
    v6 = v4[5] + 144LL;
    while ( v5 != (__int64 *)v6 )
    {
      sub_180043B54(v13, v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 944LL))(v14, v13[0]);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 944LL))(v14, v13[1]);
      sub_180043D90(v13);
      v5 += 6;
    }
    result = v4[2];
    if ( *(_BYTE *)(result + 25) )
    {
      for ( result = v4[1]; !*(_BYTE *)(result + 25) && v4 == *(_QWORD **)(result + 16); result = *(_QWORD *)(result + 8) )
        v4 = (_QWORD *)result;
      v4 = (_QWORD *)result;
    }
    else
    {
      v4 = (_QWORD *)v4[2];
      v7 = *(__int64 **)result;
      if ( !*(_BYTE *)(*(_QWORD *)result + 25LL) )
      {
        do
        {
          v4 = v7;
          result = *v7;
          v7 = (__int64 *)result;
        }
        while ( !*(_BYTE *)(result + 25) );
      }
    }
  }
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((_QWORD *)&v12 + 1) )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      v11 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  return result;
}
