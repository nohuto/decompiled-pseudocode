/*
 * XREFs of sub_180108708 @ 0x180108708
 * Callers:
 *     sub_18004ED60 @ 0x18004ED60 (sub_18004ED60.c)
 *     sub_180106F68 @ 0x180106F68 (sub_180106F68.c)
 *     sub_1801077B0 @ 0x1801077B0 (sub_1801077B0.c)
 *     sub_180107980 @ 0x180107980 (sub_180107980.c)
 *     sub_180108588 @ 0x180108588 (sub_180108588.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052284 @ 0x180052284 (sub_180052284.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006725C @ 0x18006725C (sub_18006725C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180105614 @ 0x180105614 (sub_180105614.c)
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 *     sub_180107298 @ 0x180107298 (sub_180107298.c)
 *     sub_1801094B0 @ 0x1801094B0 (sub_1801094B0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180108708(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  std::_Ref_count_base *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  std::_Ref_count_base *v19[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  struct _Mtx_internal_imp_t *v22; // [rsp+90h] [rbp+8h]

  v2 = a2;
  v22 = (struct _Mtx_internal_imp_t *)(a1 + 144);
  v4 = Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*(_BYTE *)(a1 + 136) )
  {
    v5 = sub_1801071D0((_QWORD *)a1);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        84,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        v5);
      v7 = Mtx_unlock(v22);
      if ( v7 )
        std::_Throw_C_error(v7);
      goto LABEL_34;
    }
    sub_180052284(*(void **)(a1 + 224));
    v9 = sub_18006A18C(0x10uLL);
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    *(_OWORD *)v19 = 0LL;
    sub_180105614(v19, (__int64)v9);
    v10 = v19[0];
    if ( !v19[0] )
    {
      sub_18004BD84(
        (int)retaddr,
        89,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        -2147024882);
      if ( v19[1] )
        sub_180052600(v19[1]);
      v11 = Mtx_unlock(v22);
      if ( !v11 )
        goto LABEL_33;
      std::_Throw_C_error(v11);
    }
    v12 = sub_18006725C((__int64)v20, v2);
    v13 = sub_180107298(v10, v12);
    v6 = v13;
    if ( v13 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        91,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        v13);
      if ( v19[1] )
        sub_180052600(v19[1]);
      v14 = Mtx_unlock(v22);
      if ( v14 )
        std::_Throw_C_error(v14);
      goto LABEL_34;
    }
    try
    {
      sub_1801094B0(a1 + 96, v19);
      if ( *(_QWORD *)(a1 + 128) == 1LL && !*(_BYTE *)(a1 + 137) )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 16));
      if ( v19[1] )
        sub_180052600(v19[1]);
    }
    catch ( std::bad_alloc )
    {
      sub_18004BD84(
        (int)retaddr,
        98,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\WorkFifo.h",
        -2147024882);
      goto LABEL_28;
    }
  }
  v15 = Mtx_unlock(v22);
  if ( v15 )
  {
    std::_Throw_C_error(v15);
LABEL_28:
    if ( v19[1] )
      sub_180052600(v19[1]);
    v17 = Mtx_unlock(v22);
    if ( v17 )
    {
      std::_Throw_C_error(v17);
      __debugbreak();
    }
    v2 = a2;
LABEL_33:
    v6 = -2147024882;
LABEL_34:
    unknown_libname_207(v2, v8);
    return v6;
  }
  unknown_libname_207(v2, v16);
  return 0LL;
}
