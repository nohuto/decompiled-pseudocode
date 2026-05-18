/*
 * XREFs of sub_180107740 @ 0x180107740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180018414 @ 0x180018414 (sub_180018414.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1801073B4 @ 0x1801073B4 (sub_1801073B4.c)
 *     sub_180107484 @ 0x180107484 (sub_180107484.c)
 *     sub_18010797C @ 0x18010797C (sub_18010797C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180107740(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v8; // r8
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 *v20; // rax
  char v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[5]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h] BYREF
  int v33; // [rsp+110h] [rbp+10h]

  v4 = a4;
  v24 = a2;
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(a4 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v8 = *(_QWORD *)(a4 + 56);
        v9 = *(volatile signed __int32 **)(a4 + 64);
        break;
      }
    }
  }
  v25 = v8;
  v26 = v9;
  sub_180085CD8(v8, (__int64)&v32);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v31 = 0LL;
  v30 = 0LL;
  v22 = v32;
  v23 = v33;
  sub_18010797C(a1, v4, (unsigned int)&v22, (unsigned int)&v30, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      sub_18000FE28(v28);
      v20 = sub_18000FE28(v27);
      sub_1800D1210(pExceptionObject, v20, 44LL, (__int64)v28, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1801073B4((char *)v30, *((char **)&v30 + 1), v21);
  }
  else
  {
    sub_180107484((char *)v30, *((char **)&v30 + 1), v21);
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v12 = (_QWORD *)*((_QWORD *)&v30 + 1);
  v13 = v30;
  if ( (_QWORD)v30 != *((_QWORD *)&v30 + 1) )
  {
    v14 = (_QWORD *)(v30 + 8);
    do
    {
      v15 = *(_BYTE **)(a2 + 8);
      if ( *(_BYTE **)(a2 + 16) == v15 )
      {
        sub_180018414((const void **)a2, v15, v14);
      }
      else
      {
        *(_QWORD *)v15 = *v14;
        *(_QWORD *)(a2 + 8) += 8LL;
      }
      v14 += 2;
    }
    while ( v14 - 1 != v12 );
    v13 = v30;
  }
  if ( v13 )
  {
    v16 = (v31 - v13) & 0xFFFFFFFFFFFFFFF0uLL;
    v17 = v13;
    if ( v16 >= 0x1000 )
    {
      v18 = v16 + 39;
      v13 = *(_QWORD *)(v13 - 8);
      if ( (unsigned __int64)(v17 - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v18);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return a2;
}
