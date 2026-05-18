/*
 * XREFs of sub_1800A1030 @ 0x1800A1030
 * Callers:
 *     sub_180022A10 @ 0x180022A10 (sub_180022A10.c)
 *     sub_1800ADA20 @ 0x1800ADA20 (sub_1800ADA20.c)
 *     sub_1800B9190 @ 0x1800B9190 (sub_1800B9190.c)
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800D0ED4 @ 0x1800D0ED4 (sub_1800D0ED4.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800FA540 @ 0x1800FA540 (sub_1800FA540.c)
 *     sub_1800FAC40 @ 0x1800FAC40 (sub_1800FAC40.c)
 *     sub_180100950 @ 0x180100950 (sub_180100950.c)
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 *     sub_18010F1F4 @ 0x18010F1F4 (sub_18010F1F4.c)
 *     sub_1801128F0 @ 0x1801128F0 (sub_1801128F0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_1800A0D20 @ 0x1800A0D20 (sub_1800A0D20.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800A1030(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v5; // rcx
  char result; // al
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int128 v17; // [rsp+20h] [rbp-60h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]

  v5 = (_DWORD *)a1[14];
  *v5 = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  v5[3] = a2[3];
  v5[4] = a2[4];
  v5[5] = a2[5];
  v5[6] = a2[6];
  v5[7] = a2[7];
  v5[8] = a2[8];
  v5[9] = a2[9];
  v5[10] = a2[10];
  v5[11] = a2[11];
  v5[12] = a2[12];
  if ( a3 )
    sub_18006821C((__int64)a1, 1, 1);
  result = sub_180067F88((__int64)a1, 1);
  if ( result )
  {
    if ( a3 )
    {
      v17 = 0LL;
      v7 = *(_QWORD *)(a3 + 16);
      if ( !v7 )
      {
LABEL_26:
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      do
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          goto LABEL_26;
      }
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) );
      v17 = *(_OWORD *)(a3 + 8);
      sub_1800A0D20(a1, (__int64 *)&v17);
      if ( *((_QWORD *)&v17 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
      sub_18006821C((__int64)a1, 2, 0);
      return sub_18006821C((__int64)a1, 4, 0);
    }
    else
    {
      v10 = sub_180067F50((__int64)a1);
      v20 = 0LL;
      v21 = 0LL;
      sub_18007E228(v10, &v20);
      v11 = 0;
      v12 = v20;
      if ( (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4 )
      {
        v13 = 0LL;
        do
        {
          v18 = 0LL;
          v14 = 2 * v13;
          v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
            v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
          }
          *(_QWORD *)&v18 = *(_QWORD *)(v12 + 8 * v14);
          *((_QWORD *)&v18 + 1) = v15;
          sub_1800A0D20(a1, (__int64 *)&v18);
          if ( *((_QWORD *)&v18 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v16 = *((_QWORD *)&v18 + 1);
              (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
            }
          }
          ++v11;
          v12 = v20;
          v13 = v11;
        }
        while ( v11 < (unsigned __int64)((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4) );
      }
      return sub_180012A18((__int64 *)&v20);
    }
  }
  return result;
}
