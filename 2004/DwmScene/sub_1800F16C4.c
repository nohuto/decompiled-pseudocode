/*
 * XREFs of sub_1800F16C4 @ 0x1800F16C4
 * Callers:
 *     sub_18008C298 @ 0x18008C298 (sub_18008C298.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800687EC @ 0x1800687EC (sub_1800687EC.c)
 *     sub_180068898 @ 0x180068898 (sub_180068898.c)
 *     sub_1800689B8 @ 0x1800689B8 (sub_1800689B8.c)
 *     sub_1800A3BE4 @ 0x1800A3BE4 (sub_1800A3BE4.c)
 *     sub_1800F184C @ 0x1800F184C (sub_1800F184C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F16C4(__int128 *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r10
  __int64 v8; // r9
  signed __int32 v9; // eax
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  v7 = *a2;
  v16 = 0LL;
  v8 = *(_QWORD *)(v7 + 80);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        break;
      if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
      {
        v16 = *(_OWORD *)(v7 + 72);
        break;
      }
    }
  }
  sub_1800F184C(a1, &v16);
  sub_1800A3BE4(*((_QWORD *)a1 + 2), (__int64)a2, a4);
  sub_1800687EC(*a2);
  sub_1800689B8(*a2, (_QWORD *)a1 + 22);
  v17 = 0LL;
  v10 = *((_QWORD *)a1 + 1);
  if ( !v10 )
  {
LABEL_17:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( !v11 )
      goto LABEL_17;
  }
  while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
  v17 = *a1;
  result = (__int64)sub_180068898(*a2, &v17);
  v13 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
