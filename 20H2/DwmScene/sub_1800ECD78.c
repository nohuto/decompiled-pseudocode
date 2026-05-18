/*
 * XREFs of sub_1800ECD78 @ 0x1800ECD78
 * Callers:
 *     sub_18008C68C @ 0x18008C68C (sub_18008C68C.c)
 *     sub_180094DB0 @ 0x180094DB0 (sub_180094DB0.c)
 *     sub_1800A1930 @ 0x1800A1930 (sub_1800A1930.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800EBDD4 @ 0x1800EBDD4 (sub_1800EBDD4.c)
 *     sub_1800EFEDC @ 0x1800EFEDC (sub_1800EFEDC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800ECD78(__int128 *a1, _QWORD *a2)
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
    sub_18000FD48(v15);
    v9 = sub_18000FD48(v14);
    sub_180027FF4(pExceptionObject, v9, 641, (__int64)v15, 0);
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
  sub_1800EBDD4((__int64)a2, (__int64)&v10);
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
    v7 = sub_1800A0394(*((_QWORD *)a1 + 144), &v12);
    sub_1800EFEDC(*a2, v7);
  }
  return a2;
}
