/*
 * XREFs of sub_18007FF4C @ 0x18007FF4C
 * Callers:
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18007FCE4 @ 0x18007FCE4 (sub_18007FCE4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18007FF4C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int128 *v10; // rcx
  __int64 v11; // rdx
  char v12; // di
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rbx
  __int128 v17; // [rsp+28h] [rbp-38h] BYREF
  char v18; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-20h]
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-18h] BYREF

  sub_1800839A4(a1);
  v6 = sub_18007FCE4(a1, *a3);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    v17 = 0LL;
    if ( !v8 )
    {
LABEL_20:
      std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
      throw (std::bad_weak_ptr *)pExceptionObject;
    }
    do
    {
      v9 = *(_DWORD *)(v8 + 8);
      if ( !v9 )
        goto LABEL_20;
    }
    while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) );
    v10 = &v17;
    v11 = *(_QWORD *)(v7 + 8);
    v12 = 13;
    *((_QWORD *)&v17 + 1) = *(_QWORD *)(v7 + 16);
  }
  else
  {
    v19 = 0LL;
    v10 = (__int128 *)&v18;
    v11 = 0LL;
    v12 = 6;
  }
  v13 = *((_QWORD *)v10 + 1);
  *((_QWORD *)v10 + 1) = 0LL;
  *(_QWORD *)v10 = 0LL;
  *a2 = v11;
  a2[1] = v13;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  if ( (v12 & 1) != 0 )
  {
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v15 = *((_QWORD *)&v17 + 1);
        (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
      }
    }
  }
  return a2;
}
