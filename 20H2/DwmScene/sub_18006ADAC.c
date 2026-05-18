/*
 * XREFs of sub_18006ADAC @ 0x18006ADAC
 * Callers:
 *     sub_180102C80 @ 0x180102C80 (sub_180102C80.c)
 *     sub_180102EB8 @ 0x180102EB8 (sub_180102EB8.c)
 *     sub_18010344C @ 0x18010344C (sub_18010344C.c)
 *     sub_180103630 @ 0x180103630 (sub_180103630.c)
 *     sub_1801040E0 @ 0x1801040E0 (sub_1801040E0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800DB87C @ 0x1800DB87C (sub_1800DB87C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006ADAC(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
LABEL_13:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_13;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v6;
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v7 = v9;
  }
  *(_QWORD *)&v10 = a1 + 4096;
  *((_QWORD *)&v10 + 1) = v7;
  sub_1800DB87C(a2, &v10);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(__int64))v9)(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return a2;
}
