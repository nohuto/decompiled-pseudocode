/*
 * XREFs of sub_1800A31A4 @ 0x1800A31A4
 * Callers:
 *     sub_18009BC10 @ 0x18009BC10 (sub_18009BC10.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800A2EB8 @ 0x1800A2EB8 (sub_1800A2EB8.c)
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800A31A4(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  __int64 *v14; // rdx
  char v15; // cl
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  char v28; // [rsp+30h] [rbp-49h]
  __int64 v29; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v30; // [rsp+48h] [rbp-31h]
  __int64 v31; // [rsp+50h] [rbp-29h]
  _QWORD *v32; // [rsp+58h] [rbp-21h]
  _QWORD *v33; // [rsp+60h] [rbp-19h]
  _BYTE v34[8]; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v35; // [rsp+70h] [rbp-9h]
  _QWORD *v36; // [rsp+78h] [rbp-1h]

  v31 = a1;
  v36 = a2;
  v32 = a3;
  v33 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = (_QWORD *)(a1 + 16);
  v8[2] = 0LL;
  v8[3] = 0LL;
  sub_18001CDF8(v8, (__int64)a2);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v9 = operator new(0x40uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v10 = operator new(0x48uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)(a1 + 80) = v10;
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (void *)(a1 + 96),
    0x10uLL,
    0xAuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (void *)(a1 + 256),
    0x10uLL,
    0xAuLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v11 = operator new(0x48uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  *(_QWORD *)(a1 + 416) = v11;
  *(_DWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  v12 = a3[1];
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)(a1 + 440) = *a3;
  *(_QWORD *)(a1 + 448) = a3[1];
  if ( *a4 )
  {
    v13 = (volatile signed __int32 *)a4[1];
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = (volatile signed __int32 *)a4[1];
    }
    v29 = *a4;
    v30 = v13;
    v14 = &v29;
    v15 = 1;
  }
  else
  {
    v14 = (__int64 *)sub_1800A2EB8((__int64)v34, "<NullExtension>");
    v15 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v14;
  *(_QWORD *)(a1 + 464) = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    v28 = v15;
    v16 = v35;
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
      v15 = v28;
    }
  }
  if ( (v15 & 1) != 0 )
  {
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = v30;
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
  }
  sub_1801168B8(a1 + 472, v14);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  v18 = operator new(0x30uLL);
  *v18 = v18;
  v18[1] = v18;
  v18[2] = v18;
  *((_WORD *)v18 + 12) = 257;
  *(_QWORD *)(a1 + 480) = v18;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  v19 = a2[3];
  if ( v19 >= 0x10 )
  {
    v20 = *a2;
    v21 = v19 + 1;
    if ( v21 >= 0x1000 )
    {
      v22 = v21 + 39;
      v23 = *(_QWORD *)(v20 - 8);
      v24 = v20 - v23;
      if ( (unsigned __int64)(v24 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v24, v22);
        JUMPOUT(0x1800A35C7LL);
      }
      v20 = v23;
    }
    j_j__o_free(v20);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v25 = (volatile signed __int32 *)a3[1];
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  v26 = (volatile signed __int32 *)a4[1];
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  return a1;
}
