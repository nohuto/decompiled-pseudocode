/*
 * XREFs of sub_1800F2648 @ 0x1800F2648
 * Callers:
 *     sub_180091F5C @ 0x180091F5C (sub_180091F5C.c)
 *     sub_18009A680 @ 0x18009A680 (sub_18009A680.c)
 *     sub_1800A7200 @ 0x1800A7200 (sub_1800A7200.c)
 *     sub_1800A9FE8 @ 0x1800A9FE8 (sub_1800A9FE8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A5C64 @ 0x1800A5C64 (sub_1800A5C64.c)
 *     sub_1800F16A4 @ 0x1800F16A4 (sub_1800F16A4.c)
 *     sub_1800F57AC @ 0x1800F57AC (sub_1800F57AC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F2648(__int128 *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // rbx
  _QWORD *v7; // rax
  __int64 *v9; // rax
  __int128 v10; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp-71h]
  __int64 v12; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v14[4]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v15[5]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+C0h] [rbp+7h] BYREF

  v11 = a2;
  if ( *((_DWORD *)a1 + 292) != 1 )
  {
    sub_18000FE28(v15);
    v9 = sub_18000FE28(v14);
    sub_18002D8C4(pExceptionObject, v9, 641, (__int64)v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_OWORD *)a2 = 0LL;
  v10 = 0LL;
  v4 = *((_QWORD *)a1 + 1);
  if ( !v4 )
  {
LABEL_15:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v13);
    throw (std::bad_weak_ptr *)v13;
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_15;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
  v10 = *a1;
  sub_1800F16A4((__int64)a2, (__int64)&v10);
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
  if ( *((_BYTE *)a1 + 1241) )
  {
    v7 = sub_1800A5C64(*((_QWORD *)a1 + 144), &v12);
    sub_1800F57AC(*a2, v7);
  }
  return a2;
}
