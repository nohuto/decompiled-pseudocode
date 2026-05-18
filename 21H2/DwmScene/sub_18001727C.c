/*
 * XREFs of sub_18001727C @ 0x18001727C
 * Callers:
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x180010000 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18001851C @ 0x18001851C (sub_18001851C.c)
 *     sub_1800189EC @ 0x1800189EC (sub_1800189EC.c)
 *     sub_180066D6C @ 0x180066D6C (sub_180066D6C.c)
 *     sub_1800670D8 @ 0x1800670D8 (sub_1800670D8.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_180070B8C @ 0x180070B8C (sub_180070B8C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall sub_18001727C(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  __int64 v22; // rdx
  __int128 v24; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  __int128 v27; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v29; // [rsp+90h] [rbp-19h] BYREF
  char v30; // [rsp+98h] [rbp-11h]
  __int128 v31; // [rsp+A0h] [rbp-9h]
  _BYTE pExceptionObject[24]; // [rsp+B0h] [rbp+7h] BYREF

  sub_1800670D8(a1 + 3);
  v24 = 0LL;
  BYTE8(v24) = 0;
  if ( sub_1800703D4(a1) )
  {
    v13 = sub_180070B8C(a1, &v29);
    if ( &v24 != (__int128 *)v13 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)v13;
      BYTE8(v24) = *(_BYTE *)(v13 + 8);
      *(_QWORD *)v13 = 0LL;
      *(_BYTE *)(v13 + 8) = 0;
    }
    if ( v30 )
      sub_180067304(v29);
  }
  *(_OWORD *)a2 = 0LL;
  sub_1800189EC((_DWORD)a2, a3, a4, a5, a6, a7, a8, a9);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v14 = a2[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a2[1];
  }
  v15 = *a2;
  v25 = *a2;
  v26 = v14;
  v16 = (_QWORD *)a1[32];
  if ( (_QWORD *)a1[33] == v16 )
  {
    sub_18001851C(a1 + 31, v16, &v25);
    v17 = v26;
  }
  else
  {
    *v16 = v15;
    v16[1] = v14;
    v17 = 0LL;
    v26 = 0LL;
    a1[32] += 16LL;
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
    {
      v18 = v26;
      (**(void (__fastcall ***)(__int64))v26)(v26);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  v27 = 0LL;
  v19 = a2[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 12));
    v19 = a2[1];
  }
  *(_QWORD *)&v27 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
  *((_QWORD *)&v27 + 1) = v19;
  v31 = 0LL;
  v20 = a1[2];
  if ( !v20 )
  {
LABEL_25:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v21 = *(_DWORD *)(v20 + 8);
    if ( !v21 )
      goto LABEL_25;
  }
  while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
  v22 = a1[2];
  v28[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v28[1] = v22;
  v31 = 0LL;
  sub_180066D6C(v28, &v27);
  if ( BYTE8(v24) )
    sub_180067304(v24);
  return a2;
}
