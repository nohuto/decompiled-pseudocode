/*
 * XREFs of sub_1800165CC @ 0x1800165CC
 * Callers:
 *     sub_180016ADC @ 0x180016ADC (sub_180016ADC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 *     sub_1800187F0 @ 0x1800187F0 (sub_1800187F0.c)
 *     sub_18001925C @ 0x18001925C (sub_18001925C.c)
 *     sub_18001D08C @ 0x18001D08C (sub_18001D08C.c)
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 *     sub_180075A48 @ 0x180075A48 (sub_180075A48.c)
 *     sub_180075B70 @ 0x180075B70 (sub_180075B70.c)
 *     sub_180078BF4 @ 0x180078BF4 (sub_180078BF4.c)
 *     sub_180079798 @ 0x180079798 (sub_180079798.c)
 *     sub_1800B7E60 @ 0x1800B7E60 (sub_1800B7E60.c)
 *     sub_18010EC2C @ 0x18010EC2C (sub_18010EC2C.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800165CC(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v8; // r13
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  signed __int32 v11; // eax
  void *v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  void **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  volatile signed __int32 *v23; // rbx
  bool v24; // r14
  volatile signed __int32 *v25; // rbx
  __int64 *v26; // r14
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  __int64 *result; // rax
  __int64 *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int128 v36; // [rsp+40h] [rbp-208h] BYREF
  __int128 v37; // [rsp+50h] [rbp-1F8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-1E8h] BYREF
  int v39; // [rsp+70h] [rbp-1D8h]
  __int64 *v40; // [rsp+78h] [rbp-1D0h]
  _QWORD *v41; // [rsp+80h] [rbp-1C8h]
  char v42[8]; // [rsp+88h] [rbp-1C0h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-1B8h]
  __int128 v44; // [rsp+98h] [rbp-1B0h] BYREF
  _QWORD *v45; // [rsp+A8h] [rbp-1A0h]
  _QWORD *v46; // [rsp+B0h] [rbp-198h]
  void *v47; // [rsp+B8h] [rbp-190h]
  __int64 v48; // [rsp+C0h] [rbp-188h]
  Spectre::Utils::SpectreException *v49; // [rsp+C8h] [rbp-180h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-178h] BYREF
  volatile signed __int32 *v51; // [rsp+D8h] [rbp-170h]
  char v52[8]; // [rsp+E0h] [rbp-168h] BYREF
  volatile signed __int32 *v53; // [rsp+E8h] [rbp-160h]
  __int64 v54[3]; // [rsp+F0h] [rbp-158h] BYREF
  unsigned __int64 v55; // [rsp+108h] [rbp-140h]
  _OWORD v56[2]; // [rsp+110h] [rbp-138h] BYREF
  _OWORD v57[2]; // [rsp+130h] [rbp-118h] BYREF
  char v58[96]; // [rsp+150h] [rbp-F8h] BYREF
  char v59[152]; // [rsp+1B0h] [rbp-98h] BYREF

  v40 = a1;
  v45 = a3;
  v46 = a4;
  v41 = a5;
  v8 = 0;
  v39 = 0;
  if ( !*a3 )
  {
    v9 = (__int64 *)sub_18010EC2C(&v50);
    std::shared_ptr<__ExceptionPtr>::operator=(a3, v9);
    v10 = v51;
    if ( v51 )
    {
      v11 = _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  try
  {
    v13 = operator new(0x660uLL);
    v14 = (int)v13;
    v47 = v13;
    if ( v13 )
    {
      memset(v13, 0, 0x660uLL);
      v36 = 0LL;
      v15 = a5[1];
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = a5[1];
      }
      *(_QWORD *)&v36 = *a5;
      *((_QWORD *)&v36 + 1) = v15;
      v37 = 0LL;
      v16 = a4[1];
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = a4[1];
      }
      *(_QWORD *)&v37 = *a4;
      *((_QWORD *)&v37 + 1) = v16;
      v38 = 0LL;
      v17 = a3[1];
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v17 = a3[1];
      }
      *(_QWORD *)&v38 = *a3;
      *((_QWORD *)&v38 + 1) = v17;
      v18 = sub_1800B7E60(v14, *(_DWORD *)(a2 + 20), (unsigned int)&v38, (unsigned int)&v37, (__int64)&v36);
    }
    else
    {
      v18 = 0LL;
    }
    v48 = v18;
    v19 = (void **)sub_18007565C(v18, v54);
    if ( &Src != v19 )
      sub_18001D08C(&Src, v19, 0LL);
    if ( v55 >= 0x10 )
    {
      v20 = v54[0];
      if ( v55 + 1 >= 0x1000 )
      {
        v20 = *(_QWORD *)(v54[0] - 8);
        if ( (unsigned __int64)(v54[0] - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, v55 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
    }
    *(_OWORD *)(v18 + 528) = *(_OWORD *)a2;
    *(_OWORD *)(v18 + 544) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v18 + 560) = *(_QWORD *)(a2 + 32);
    sub_18001925C(v18 + 568, a2 + 40);
    *(_OWORD *)(v18 + 664) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v18 + 680) = *(_OWORD *)(a2 + 152);
    v44 = 0LL;
    v56[0] = *(_OWORD *)(a2 + 136);
    v56[1] = *(_OWORD *)(a2 + 152);
    v21 = sub_1800187F0(v58, a2 + 40);
    sub_180016E64(v18, &v44, v21, v56);
    sub_180075B70(v18, a2);
    if ( (unsigned int)_std_type_info_compare(&qword_18020EB48, &qword_18020EB88) )
    {
      v57[0] = *(_OWORD *)(a2 + 136);
      v57[1] = *(_OWORD *)(a2 + 152);
      v22 = sub_1800187F0(v59, a2 + 40);
      sub_180016C80(v18, v42, v22, v57);
      if ( v43 )
      {
        if ( !_InterlockedDecrement(v43 + 2) )
        {
          v23 = v43;
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          if ( !_InterlockedDecrement(v23 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
    sub_180078BF4(v18);
    v24 = 0;
    if ( *(_BYTE *)(a2 + 28) )
    {
      v8 = 1;
      if ( *(_QWORD *)sub_180075A48(v18, v52) )
        v24 = 1;
    }
    if ( (v8 & 1) != 0 )
    {
      v25 = v53;
      if ( v53 )
      {
        if ( !_InterlockedDecrement(v53 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( !_InterlockedDecrement(v25 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( v24 )
      sub_180079798(v18);
    v26 = v40;
    *v40 = v18;
    v27 = (volatile signed __int32 *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
    v28 = (volatile signed __int32 *)a3[1];
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    v29 = (volatile signed __int32 *)a4[1];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    v30 = (volatile signed __int32 *)v41[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      }
    }
    result = v26;
  }
  catch ( Spectre::Utils::SpectreException *v49 )
  {
    if ( *a5 )
    {
      v32 = (__int64 *)sub_180012AA4((__int64)a5);
      v33 = *v32;
      v34 = sub_180075910();
      v35 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v49 + 8LL))(v49);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64))(v33 + 24))(v32, 0LL, v35, v34);
    }
    throw;
  }
  return result;
}
