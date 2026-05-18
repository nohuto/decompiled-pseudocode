/*
 * XREFs of sub_18008E204 @ 0x18008E204
 * Callers:
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008709C @ 0x18008709C (sub_18008709C.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     sub_1800AF9D4 @ 0x1800AF9D4 (sub_1800AF9D4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008E204(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  __int64 *v7; // r13
  volatile signed __int32 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r12
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rsi
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // r12
  __int64 *v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  __int128 v28; // [rsp+30h] [rbp-99h] BYREF
  volatile signed __int32 *v29; // [rsp+40h] [rbp-89h]
  _QWORD *v30; // [rsp+48h] [rbp-81h]
  __int64 v31; // [rsp+50h] [rbp-79h]
  __int64 *v32; // [rsp+58h] [rbp-71h]
  __int64 v33[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v34; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v35; // [rsp+88h] [rbp-41h]
  __int64 v36; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v37; // [rsp+98h] [rbp-31h]
  __int64 *v38; // [rsp+A0h] [rbp-29h]
  __int128 v39; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-11h]

  v31 = a3;
  v7 = a2;
  v32 = a2;
  v38 = a2;
  v30 = a5;
  sub_1800670E0(a1 + 16);
  v28 = 0LL;
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18001277C(v33, (__int64)v7);
  sub_18008CDE8(a1, (__int64 *)&v28, v33);
  v9 = (volatile signed __int32 *)(v28 + 76);
  v29 = (volatile signed __int32 *)(v28 + 76);
  while ( _interlockedbittestandset(v9, 0) )
    v9 = v29;
  v10 = v28;
  if ( !*(_BYTE *)(v28 + 80) )
  {
    *v29 = 0;
    v11 = *((_QWORD *)&v28 + 1);
    if ( !*((_QWORD *)&v28 + 1) )
      return unknown_libname_103(v7);
    goto LABEL_29;
  }
  v12 = *(_QWORD *)(v28 + 96);
  v13 = a6 | v12 | sub_1800AF9D4(*a4);
  v14 = *sub_18008D440(v10, &v34);
  v15 = v35;
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    v10 = v28;
  }
  if ( v14 )
  {
    v16 = *sub_18008D440(v10, &v36);
    v17 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v39 = 0LL;
    v40 = 0LL;
    (**(void (__fastcall ***)(_QWORD, __int128 *, __int64, _QWORD))*v30)(*v30, &v39, v16, *a4);
    v19 = (__int64 *)*((_QWORD *)&v39 + 1);
    v20 = (__int64 *)v39;
    if ( (_QWORD)v39 != *((_QWORD *)&v39 + 1) )
    {
      v21 = v31;
      do
      {
        v22 = *v20;
        sub_180089274(*v20);
        v18 = *a4;
        if ( (*(_QWORD *)(v22 + 448) & *(_QWORD *)(*a4 + 512LL)) == *(_QWORD *)(*a4 + 504LL) )
          sub_18008709C(*v20, v13, v21, (__int64)a4);
        ++v20;
      }
      while ( v20 != v19 );
      v20 = (__int64 *)v39;
      v7 = v32;
    }
    if ( v20 )
    {
      v23 = (v40 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL;
      v24 = v20;
      if ( v23 >= 0x1000 )
      {
        v25 = v23 + 39;
        v20 = (__int64 *)*(v20 - 1);
        if ( (unsigned __int64)((char *)v24 - (char *)v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v18, v25);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
      v39 = 0LL;
      v40 = 0LL;
    }
  }
  *v29 = 0;
  v11 = *((_QWORD *)&v28 + 1);
  if ( *((_QWORD *)&v28 + 1) )
  {
LABEL_29:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      v26 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  return unknown_libname_103(v7);
}
