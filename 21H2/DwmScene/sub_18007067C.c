/*
 * XREFs of sub_18007067C @ 0x18007067C
 * Callers:
 *     sub_180108550 @ 0x180108550 (sub_180108550.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_180108D1C @ 0x180108D1C (sub_180108D1C.c)
 *     sub_180108F00 @ 0x180108F00 (sub_180108F00.c)
 *     sub_1801099B0 @ 0x1801099B0 (sub_1801099B0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800E114C @ 0x1800E114C (sub_1800E114C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007067C(__int64 a1, __int64 a2)
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
  sub_1800E114C(a2, &v10);
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
