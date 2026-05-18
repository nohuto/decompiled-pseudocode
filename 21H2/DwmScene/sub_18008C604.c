/*
 * XREFs of sub_18008C604 @ 0x18008C604
 * Callers:
 *     sub_18008BBC4 @ 0x18008BBC4 (sub_18008BBC4.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_1800834AC @ 0x1800834AC (sub_1800834AC.c)
 *     sub_18008AE6C @ 0x18008AE6C (sub_18008AE6C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18008C604(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rsi
  void *v10; // rax
  __int64 v11; // r14
  __int128 v13; // [rsp+20h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  sub_18006714C((__int64)(a1 + 2), (__int64)a2);
  v6 = a1[1];
  if ( !v6 )
  {
LABEL_15:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_15;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  *(_QWORD *)&v13 = *a1;
  v8 = (volatile signed __int32 *)a1[1];
  v9 = v8;
  *((_QWORD *)&v13 + 1) = v8;
  v10 = operator new(0x250uLL);
  v11 = (__int64)v10;
  if ( v10 )
  {
    memset(v10, 0, 0x250uLL);
    v14 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v9 = v8;
    }
    v14 = v13;
    v10 = (void *)sub_1800834AC(v11, &v14, *a3);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_18008AE6C(a2, (__int64)v10);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a2;
}
