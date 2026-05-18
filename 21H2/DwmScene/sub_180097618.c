/*
 * XREFs of sub_180097618 @ 0x180097618
 * Callers:
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 * Callees:
 *     sub_180097F2C @ 0x180097F2C (sub_180097F2C.c)
 *     sub_180097F8C @ 0x180097F8C (sub_180097F8C.c)
 *     sub_180097FBC @ 0x180097FBC (sub_180097FBC.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180097618(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v6; // bl
  BOOL v7; // r14d
  char v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  int v17; // ebx
  int v18; // eax
  volatile signed __int32 *v19; // rbx
  char v20; // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-90h]
  char v24; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v25; // [rsp+80h] [rbp-80h]
  __int128 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v29; // [rsp+C0h] [rbp-40h]
  __int128 *v30; // [rsp+C8h] [rbp-38h]
  _BYTE *v31; // [rsp+D0h] [rbp-30h]
  _BYTE v32[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v33; // [rsp+E0h] [rbp-20h]
  _BYTE v34[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v35; // [rsp+F0h] [rbp-10h]
  _BYTE v36[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v37[16]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v38[8]; // [rsp+118h] [rbp+18h] BYREF

  result = (unsigned int)a1[75];
  v6 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v7 = result == 3;
    v8 = a1[72] == 1;
    v26 = 0LL;
    if ( v8 )
    {
      v9 = (__int64 *)sub_180097F2C(a1, v34, 0LL);
      v10 = *v9;
      v22 = *v9;
      v23 = (volatile signed __int32 *)v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = &v22;
    }
    else
    {
      v12 = (__int64 *)sub_180097F2C(a1, v32, 0LL);
      v10 = *v12;
      v25 = (volatile signed __int32 *)v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      v11 = (__int64 *)&v24;
      v6 = 12;
    }
    *(_QWORD *)&v26 = v10;
    *((_QWORD *)&v26 + 1) = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v6 & 8) != 0 )
    {
      v6 &= ~8u;
      v20 = v6;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          v13 = v25;
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
        v6 = v20;
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v6 &= ~4u;
      v14 = v33;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      v21 = v6;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          v15 = v23;
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v6 = v21;
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v16 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    v28 = 0LL;
    v29 = v38;
    v30 = &v27;
    v31 = v36;
    v38[0] = &std::_Func_impl_no_alloc<_lambda_45b66ec44b62ffcddc0dc72232532323_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v38[1] = a1;
    v38[7] = v38;
    v27 = v26;
    v26 = 0LL;
    v17 = sub_180097FBC(a1, v36, 0LL);
    v18 = sub_180097F8C(a1, v37, 0LL);
    result = sub_180116498(v18, v17, a1[30], (unsigned int)&v27, a1[28], v8, v7, a3, (__int64)v38, 0LL, (__int64)&v28);
    v19 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
    if ( *((_QWORD *)&v28 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        result = (unsigned int)_InterlockedDecrement(v19 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  return result;
}
