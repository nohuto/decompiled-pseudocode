/*
 * XREFs of sub_18001BD14 @ 0x18001BD14
 * Callers:
 *     sub_18001BB18 @ 0x18001BB18 (sub_18001BB18.c)
 * Callees:
 *     sub_180012258 @ 0x180012258 (sub_180012258.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18001BD14(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r14d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22[4]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  unsigned int v24; // [rsp+48h] [rbp-28h] BYREF
  int *v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+58h] [rbp-18h]
  _QWORD v27[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v29; // [rsp+B0h] [rbp+40h] BYREF
  int v30; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+50h]

  v31 = a3;
  v29 = a1;
  if ( !a2 )
    goto LABEL_37;
  v23 = a2;
  v25 = &v30;
  v26 = 0;
  v27[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v24);
  *v25 = v6;
  if ( v6 >= 0 && v24 )
  {
    v7 = v27[0];
    if ( v27[0] )
    {
      v27[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v23 + 48LL))(v23, 0LL, v27);
    *v25 = v8;
  }
  v9 = 0;
  v10 = v24;
  while ( *v25 >= 0 && v9 != v10 )
  {
    v11 = v27[0];
    v22[1] = v27[0];
    if ( v27[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 8LL))(v27[0]);
    v22[2] = 0LL;
    LOBYTE(v29) = 0;
    v22[0] = 0LL;
    if ( a4 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, v22);
      v13 = retaddr;
      if ( v12 < 0 )
      {
        v14 = 333;
LABEL_22:
        sub_180012300(v13, v14, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v12);
        goto LABEL_23;
      }
      if ( !v22[0] )
        goto LABEL_23;
      v12 = sub_180012258(v22[0], &v29);
      v13 = retaddr;
      if ( v12 < 0 )
      {
        v14 = 335;
        goto LABEL_22;
      }
      if ( !(_BYTE)v29 )
        goto LABEL_23;
    }
    v22[3] = v11;
    v15 = *(_QWORD *)(a3 + 56);
    if ( !v15 )
    {
      std::_Xbad_function_call();
      break;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v15 + 8))(
            *(_QWORD *)(v15 + 32) + _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v15 + 8), 8)),
            v11);
    v13 = retaddr;
    if ( v12 < 0 )
    {
      v14 = 338;
      goto LABEL_22;
    }
LABEL_23:
    v16 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ++v9;
    if ( *v25 >= 0 && v9 < v24 )
    {
      v17 = v27[0];
      if ( v27[0] )
      {
        v27[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v23 + 48LL))(v23, v9, v27);
      *v25 = v18;
    }
  }
  v19 = v27[0];
  if ( v27[0] )
  {
    v27[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v30 < 0 )
    sub_180012300(retaddr, 342, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v30);
LABEL_37:
  v20 = *(_QWORD *)(a3 + 56);
  if ( v20 )
  {
    if ( v20 != a3 )
      j_j__o_free(v20, 40LL);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return 0LL;
}
