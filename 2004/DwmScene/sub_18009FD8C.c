/*
 * XREFs of sub_18009FD8C @ 0x18009FD8C
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_180090154 @ 0x180090154 (sub_180090154.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800A1930 @ 0x1800A1930 (sub_1800A1930.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18009E96C @ 0x18009E96C (sub_18009E96C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_18009FD8C(__int128 *a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v9[1] = HIDWORD(a2);
  v9[0] = a3;
  v10 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
  if ( !v4 )
  {
LABEL_11:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_11;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v10 = *a1;
  *a2 = 0LL;
  sub_18009E96C((__int64)a2, (__int64)&v10, v9);
  v6 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
