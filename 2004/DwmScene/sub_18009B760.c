/*
 * XREFs of sub_18009B760 @ 0x18009B760
 * Callers:
 *     sub_18001D210 @ 0x18001D210 (sub_18001D210.c)
 *     sub_1800A8150 @ 0x1800A8150 (sub_1800A8150.c)
 *     sub_1800B38C0 @ 0x1800B38C0 (sub_1800B38C0.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800CB604 @ 0x1800CB604 (sub_1800CB604.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800F4C70 @ 0x1800F4C70 (sub_1800F4C70.c)
 *     sub_1800F5370 @ 0x1800F5370 (sub_1800F5370.c)
 *     sub_1800FB080 @ 0x1800FB080 (sub_1800FB080.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     sub_180109924 @ 0x180109924 (sub_180109924.c)
 *     sub_18010D020 @ 0x18010D020 (sub_18010D020.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_18009B450 @ 0x18009B450 (sub_18009B450.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009B760(_QWORD *a1, _DWORD *a2, __int64 a3)
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
    sub_18006294C((__int64)a1, 1, 1);
  result = sub_1800626B8((__int64)a1, 1);
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
      sub_18009B450(a1, (__int64 *)&v17);
      if ( *((_QWORD *)&v17 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
      sub_18006294C((__int64)a1, 2, 0);
      return sub_18006294C((__int64)a1, 4, 0);
    }
    else
    {
      v10 = sub_180062680((__int64)a1);
      v20 = 0LL;
      v21 = 0LL;
      sub_180078958(v10, &v20);
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
          sub_18009B450(a1, (__int64 *)&v18);
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
      return sub_180012938((__int64 *)&v20);
    }
  }
  return result;
}
