/*
 * XREFs of sub_1800DD08C @ 0x1800DD08C
 * Callers:
 *     sub_18006CDF0 @ 0x18006CDF0 (sub_18006CDF0.c)
 * Callees:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18006BC54 @ 0x18006BC54 (sub_18006BC54.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800DEB2C @ 0x1800DEB2C (sub_1800DEB2C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DD08C(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  int v8; // r12d
  bool v9; // cl
  _QWORD *v10; // r14
  unsigned int v11; // eax
  int v12; // r12d
  volatile signed __int32 *v13; // rbx
  _QWORD *i; // rbx
  volatile signed __int32 *v15; // r14
  __int64 *v16; // r13
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  bool v19; // cl
  int v20; // r14d
  __int64 *v21; // r12
  volatile signed __int32 *v22; // rbx
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // r8
  volatile signed __int32 *v29; // rbx
  __int64 v30; // rbx
  size_t Size; // [rsp+40h] [rbp-C0h]
  _QWORD *v32; // [rsp+50h] [rbp-B0h]
  unsigned int v33; // [rsp+58h] [rbp-A8h]
  __int64 v34[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v40; // [rsp+A0h] [rbp-60h]
  __int64 v41[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43[11]; // [rsp+E8h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)a3
    || *(_DWORD *)(a1 + 12) != *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a1 + 16) != *(_DWORD *)(a3 + 8)
    || *(_DWORD *)(a1 + 20) != *(_DWORD *)(a3 + 12)
    || *(_DWORD *)(a1 + 24) != *(_DWORD *)(a3 + 16)
    || (result = *(unsigned int *)(a3 + 20), *(_DWORD *)(a1 + 28) != (_DWORD)result) )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 16);
    v7 = sub_1800703D4((__int64)a2);
    v8 = *(_DWORD *)(a3 + 20);
    v32 = (_QWORD *)v7;
    v9 = (a2[328] & 1) != 0 && (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 8LL);
    v10 = (_QWORD *)(a1 + 80);
    v11 = v8 & 0xFFFFFFBF;
    v12 = v8 | 0x40;
    if ( !v9 )
      v12 = v11;
    while ( v10 != (_QWORD *)(a1 + 176) )
    {
      v13 = (volatile signed __int32 *)v10[1];
      v10[1] = 0LL;
      *v10 = 0LL;
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      v10 += 2;
    }
    for ( i = (_QWORD *)(a1 + 176); i != (_QWORD *)(a1 + 272); i += 2 )
    {
      v15 = (volatile signed __int32 *)i[1];
      i[1] = 0LL;
      *i = 0LL;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
    }
    sub_18000F8A8((__int64)v32, &v35, 0);
    v16 = (__int64 *)(a1 + 456);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 456), &v35);
    v17 = v36;
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v41[2] = 0LL;
    v41[3] = 15LL;
    LOBYTE(v41[0]) = 0;
    sub_18000FC14(v41, 0x21uLL, 0LL, "ImageProcessing Input FrameBuffer");
    sub_180068194(*v16, v41);
    sub_180068A0C(*v16, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), v12, (__int64)a2);
    v18 = sub_18007AB84((__int64)v32, 1);
    v19 = (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_18020F928, 0LL)
       && (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 6LL);
    v20 = v12 | 0x100;
    v33 = v19 + 1;
    if ( !v19 )
      v20 = v12;
    sub_18002C82C(v32, &v37, 1u);
    v21 = (__int64 *)(a1 + 472);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 472), &v37);
    v22 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
    v42[2] = 0LL;
    v42[3] = 15LL;
    LOBYTE(v42[0]) = 0;
    sub_18000FC14(v42, 0x22uLL, 0LL, "ImageProcessing Input DepthBuffer)");
    sub_180068194(*v21, v42);
    sub_1800D0A74((__int64 *)*v21, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), v33, v20, (__int64)a2);
    v23 = *v16;
    v24 = sub_18007040C((__int64)a2);
    v25 = *(_QWORD *)(v23 + 136);
    if ( v25 )
      v26 = sub_18006BC54(v25, v24);
    else
      v26 = 0;
    if ( v26 <= 1 )
    {
      *(_OWORD *)v34 = 0LL;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), v34);
      if ( v34[1] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34[1] + 8), 0xFFFFFFFF) == 1 )
        {
          v30 = v34[1];
          (**(void (__fastcall ***)(__int64))v34[1])(v34[1]);
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v30 + 12)) )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34[1] + 8LL))(v34[1]);
        }
      }
    }
    else
    {
      v27 = *(_DWORD *)(a3 + 20) & 0xFFFFFFBC | 3;
      sub_180017984(v32, &v39, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), &v39);
      v29 = v40;
      if ( v40 && _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
      v43[2] = 0LL;
      LOBYTE(v28) = 0;
      v43[3] = 15LL;
      LOBYTE(v43[0]) = 0;
      sub_18000FC14(v43, 0x1DuLL, v28, "ImageProcessing Input Texture");
      sub_180068194(*(_QWORD *)(a1 + 64), v43);
      LODWORD(Size) = 0;
      sub_18009FAA4(
        *(_QWORD *)(a1 + 64),
        *(_DWORD *)a3,
        *(_DWORD *)(a3 + 4),
        0,
        *(_DWORD *)(a3 + 8),
        0,
        v27,
        0LL,
        Size,
        (__int64)a2);
    }
    return sub_1800DEB2C(a1, a2);
  }
  return result;
}
