/*
 * XREFs of sub_1800CD84C @ 0x1800CD84C
 * Callers:
 *     sub_1800CD334 @ 0x1800CD334 (sub_1800CD334.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 *     sub_1800CCF94 @ 0x1800CCF94 (sub_1800CCF94.c)
 *     _o__invalid_parameter_noinfo @ 0x18011E029 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD84C(_QWORD *a1, void *a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  void (__fastcall ****v6)(_QWORD, __int64); // r13
  unsigned int v7; // r10d
  __int64 v8; // rax
  unsigned int v11; // r15d
  int v12; // esi
  __m128i si128; // xmm0
  unsigned int v14; // r12d
  void **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rbx
  _QWORD *v23; // rax
  void (__fastcall ***v24)(_QWORD, __int64); // rdx
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  _DWORD v27[15]; // [rsp+40h] [rbp-C0h]
  __m128i v28; // [rsp+7Ch] [rbp-84h]
  int v29; // [rsp+8Ch] [rbp-74h]
  int v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+94h] [rbp-6Ch]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  int v34; // [rsp+A0h] [rbp-60h]
  _DWORD v35[15]; // [rsp+B0h] [rbp-50h]
  __m128i v36; // [rsp+ECh] [rbp-14h]
  int v37; // [rsp+FCh] [rbp-4h]
  int v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+104h] [rbp+4h]
  int v40; // [rsp+108h] [rbp+8h]
  int v41; // [rsp+10Ch] [rbp+Ch]
  int v42; // [rsp+110h] [rbp+10h]
  char v43[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v44; // [rsp+128h] [rbp+28h]
  void (__fastcall ***v45)(_QWORD, __int64); // [rsp+170h] [rbp+70h] BYREF
  unsigned int v46; // [rsp+180h] [rbp+80h]

  v46 = a3;
  v6 = (void (__fastcall ****)(_QWORD, __int64))(a1 + 14);
  v7 = a3;
  v8 = a1[14];
  if ( v8 )
    v11 = *(_DWORD *)(v8 + 16);
  else
    v11 = 0;
  v12 = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013D360);
  if ( (unsigned int)(a6 - 23) > 1 )
  {
    v35[0] = 0;
    v35[5] = 12;
    v35[10] = 12;
    v35[12] = 2;
    v35[14] = 2;
    v37 = 2;
    v42 = 2;
    v35[1] = 4;
    v35[2] = 4;
    v35[3] = 4;
    v35[4] = 8;
    v35[6] = 16;
    v35[7] = 4;
    v35[8] = 4;
    v35[9] = 8;
    v35[11] = 16;
    v35[13] = 1;
    v36 = si128;
    v38 = 4;
    v39 = 8;
    v40 = 4;
    v41 = 1;
    v14 = a3 * v35[a6];
  }
  else
  {
    v27[0] = 0;
    v27[5] = 12;
    v27[10] = 12;
    v27[12] = 2;
    v27[14] = 2;
    v29 = 2;
    v34 = 2;
    v27[1] = 4;
    v27[2] = 4;
    v27[3] = 4;
    v27[4] = 8;
    v27[6] = 16;
    v27[7] = 4;
    v27[8] = 4;
    v27[9] = 8;
    v27[11] = 16;
    v27[13] = 1;
    v28 = si128;
    v30 = 4;
    v31 = 8;
    v32 = 4;
    v33 = 1;
    v14 = ((a3 + 1) & 0xFFFFFFFE) * v27[a6];
  }
  v15 = (void **)(a1 + 17);
  if ( !a1[17] )
    goto LABEL_22;
  if ( *v15 != a2 && a4 <= v11 )
  {
    if ( v14 )
    {
      if ( !a2 || v11 < (unsigned __int64)v14 )
      {
        memset(*v15, 0, v11);
        if ( a2 )
        {
          if ( v11 >= (unsigned __int64)v14 )
            goto LABEL_19;
          *(_DWORD *)o__errno(v17, v16) = 34;
        }
        else
        {
          *(_DWORD *)o__errno(v17, v16) = 22;
        }
        o__invalid_parameter_noinfo(v19, v18);
        goto LABEL_19;
      }
      memcpy(*v15, a2, v14);
    }
LABEL_19:
    sub_180063B28(a1 + 15);
    v12 = a6;
LABEL_27:
    v7 = v46;
    goto LABEL_28;
  }
  if ( !*v15 || *v15 != a2 )
  {
LABEL_22:
    v20 = a4;
    v11 = a4;
    v21 = (__int64 *)sub_1800CCF94((__int64)v43, a4, a2, v14);
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, v21);
    v22 = v44;
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    sub_180062844((__int64)a1, v20, 0xFu);
    goto LABEL_27;
  }
LABEL_28:
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, void (__fastcall ****)(_QWORD, __int64), _QWORD, _QWORD, unsigned int, int, int))(*a1 + 48LL))(
                    a1,
                    &v45,
                    v7,
                    v14,
                    v11,
                    a5,
                    v12);
  if ( v6 != v23 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))*v23;
    *v23 = 0LL;
    v25 = *v6;
    *v6 = v24;
    if ( v25 )
      (**v25)(v25, 1LL);
  }
  if ( v45 )
    (**v45)(v45, 1LL);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
}
