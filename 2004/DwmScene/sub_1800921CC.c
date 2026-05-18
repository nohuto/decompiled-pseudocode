/*
 * XREFs of sub_1800921CC @ 0x1800921CC
 * Callers:
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 * Callees:
 *     sub_18009265C @ 0x18009265C (sub_18009265C.c)
 *     sub_18009268C @ 0x18009268C (sub_18009268C.c)
 *     sub_1800926BC @ 0x1800926BC (sub_1800926BC.c)
 *     sub_1800926EC @ 0x1800926EC (sub_1800926EC.c)
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800921CC(_DWORD *a1, __int64 a2, char a3)
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
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  volatile signed __int32 *v20; // rbx
  char v21; // [rsp+60h] [rbp-A0h]
  char v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-90h]
  char v25; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v26; // [rsp+80h] [rbp-80h]
  __int128 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v30; // [rsp+C0h] [rbp-40h]
  __int128 *v31; // [rsp+C8h] [rbp-38h]
  _BYTE *v32; // [rsp+D0h] [rbp-30h]
  _BYTE *v33; // [rsp+D8h] [rbp-28h]
  _BYTE v34[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v35; // [rsp+E8h] [rbp-18h]
  _BYTE v36[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v37; // [rsp+F8h] [rbp-8h]
  _BYTE v38[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v39[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v40[16]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v41[8]; // [rsp+130h] [rbp+30h] BYREF

  result = (unsigned int)a1[75];
  v6 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v7 = result == 3;
    v8 = a1[72] == 1;
    v27 = 0LL;
    if ( v8 )
    {
      v9 = (__int64 *)sub_18009265C(a1, v36, 0LL);
      v10 = *v9;
      v23 = *v9;
      v24 = (volatile signed __int32 *)v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v11 = &v23;
    }
    else
    {
      v12 = (__int64 *)sub_18009265C(a1, v34, 0LL);
      v10 = *v12;
      v26 = (volatile signed __int32 *)v12[1];
      *v12 = 0LL;
      v12[1] = 0LL;
      v11 = (__int64 *)&v25;
      v6 = 12;
    }
    *(_QWORD *)&v27 = v10;
    *((_QWORD *)&v27 + 1) = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    if ( (v6 & 8) != 0 )
    {
      v6 &= ~8u;
      v21 = v6;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          v13 = v26;
          (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        }
        v6 = v21;
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v6 &= ~4u;
      v14 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
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
      v22 = v6;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          v15 = v24;
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
        v6 = v22;
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v16 = v37;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    v29 = 0LL;
    v30 = v41;
    v31 = &v28;
    v32 = v38;
    v33 = v39;
    v41[0] = &std::_Func_impl_no_alloc<_lambda_81f9fd889de0c970efd4c19b57749111_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
    v41[1] = a1;
    v41[7] = v41;
    v28 = v27;
    v27 = 0LL;
    v17 = sub_18009268C(a1, v38, 0LL);
    v18 = sub_1800926EC(a1, v39, 0LL);
    v19 = sub_1800926BC(a1, v40, 0LL);
    result = sub_1801104AC(v19, v18, v17, a1[30], (__int64)&v28, a1[28], v8, v7, a3, (__int64)v41, 0LL, (__int64)&v29);
    v20 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        result = (unsigned int)_InterlockedDecrement(v20 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  return result;
}
