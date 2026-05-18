/*
 * XREFs of sub_18001E51C @ 0x18001E51C
 * Callers:
 *     sub_180023EB0 @ 0x180023EB0 (sub_180023EB0.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_180018074 @ 0x180018074 (sub_180018074.c)
 *     sub_180021438 @ 0x180021438 (sub_180021438.c)
 *     sub_18006149C @ 0x18006149C (sub_18006149C.c)
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_18006B2BC @ 0x18006B2BC (sub_18006B2BC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18001E51C(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rdx
  __int128 v20; // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h]
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h] BYREF
  char v26; // [rsp+78h] [rbp+Fh]
  __int128 v27; // [rsp+80h] [rbp+17h]
  _BYTE pExceptionObject[24]; // [rsp+90h] [rbp+27h] BYREF

  sub_180061808(a1 + 3);
  v20 = 0LL;
  BYTE8(v20) = 0;
  if ( sub_18006AB04(a1) )
  {
    v9 = sub_18006B2BC(a1, &v25);
    if ( &v20 != (__int128 *)v9 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)v9;
      BYTE8(v20) = *(_BYTE *)(v9 + 8);
      *(_QWORD *)v9 = 0LL;
      *(_BYTE *)(v9 + 8) = 0;
    }
    if ( v26 )
      sub_180061A34(v25);
  }
  *(_OWORD *)a2 = 0LL;
  sub_180021438(a2, a3, a4, a5, 0);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, *(_QWORD *)(a3 + 8));
  v10 = a2[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a2[1];
  }
  v11 = *a2;
  v21 = *a2;
  v22 = v10;
  v12 = (_QWORD *)a1[32];
  if ( (_QWORD *)a1[33] == v12 )
  {
    sub_180018074(a1 + 31, v12, &v21);
    v13 = v22;
  }
  else
  {
    *v12 = v11;
    v12[1] = v10;
    v13 = 0LL;
    v22 = 0LL;
    a1[32] += 16LL;
  }
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    {
      v14 = v22;
      (**(void (__fastcall ***)(__int64))v22)(v22);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  v23 = 0LL;
  v15 = a2[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 12));
    v15 = a2[1];
  }
  *(_QWORD *)&v23 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
  *((_QWORD *)&v23 + 1) = v15;
  v27 = 0LL;
  v16 = a1[2];
  if ( !v16 )
  {
LABEL_25:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
      goto LABEL_25;
  }
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) );
  v18 = a1[2];
  v24[0] = (a1[1] + 24LL) & -(__int64)(a1[1] != 0LL);
  v24[1] = v18;
  v27 = 0LL;
  sub_18006149C(v24, &v23);
  if ( BYTE8(v20) )
    sub_180061A34(v20);
  return a2;
}
