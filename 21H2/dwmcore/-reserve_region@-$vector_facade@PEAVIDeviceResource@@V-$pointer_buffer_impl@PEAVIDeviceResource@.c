/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x1800B01D8
 * Callers:
 *     ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x1800AFBC0 (-AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x1800AF41C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z @ 0x1800B03A0 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  detail::pointer_buffer_impl<IDeviceResource *>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v5 = *a1 & 3;
  if ( (*a1 & 3) == 0 )
  {
LABEL_5:
    v6 = (unsigned __int64)a1;
    goto LABEL_6;
  }
  switch ( *(_DWORD *)a1 & 3 )
  {
    case 1:
      v6 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2:
      v6 = 0LL;
      break;
    case 3:
      goto LABEL_5;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
LABEL_6:
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v21 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      v4 = *a1;
      v7 = *(_QWORD *)(v21 - 16);
    }
    else
    {
      if ( (unsigned int)(v5 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 1LL;
  }
  v8 = v6 + 8 * v7;
  v9 = v4 & 3;
  switch ( v4 & 3 )
  {
    case 0LL:
      goto LABEL_14;
    case 1LL:
      v10 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2LL:
      v10 = 0LL;
      break;
    case 3LL:
LABEL_14:
      v10 = (unsigned __int64)a1;
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v11 = (__int64)(v8 - v10) >> 3;
  v12 = v11 - a2;
  if ( (v4 & 3) == 0 )
  {
LABEL_19:
    v13 = (unsigned __int64)a1;
    goto LABEL_20;
  }
  switch ( (_DWORD)v9 )
  {
    case 1:
      v13 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2:
      v13 = 0LL;
      break;
    case 3:
      goto LABEL_19;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
LABEL_20:
  if ( (v4 & 3) != 0 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v22 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      v4 = *a1;
      v14 = *(_QWORD *)(v22 - 16);
    }
    else
    {
      if ( (unsigned int)(v9 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 1LL;
  }
  v15 = (_QWORD *)(v13 + 8 * v14);
  switch ( v4 & 3 )
  {
    case 0LL:
      goto LABEL_28;
    case 1LL:
      v16 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
      break;
    case 2LL:
      v16 = 0LL;
      break;
    case 3LL:
LABEL_28:
      v16 = (unsigned __int64)a1;
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  *((_QWORD *)&v25 + 1) = 1LL;
  *(_QWORD *)&v25 = v16 + 8 * v11;
  if ( !(_QWORD)v25 )
    goto LABEL_69;
  v26 = 1LL;
  v17 = v11 - a2;
  if ( v12 > 1 )
    v17 = 1LL;
  v27 = v25;
  v18 = 8 * v17;
  v19 = &v15[v18 / 0xFFFFFFFFFFFFFFF8uLL];
  v28 = 1LL;
  if ( v15 != &v15[v18 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v23 = v27;
    v9 = v28;
    do
    {
      --v15;
      if ( !v23 )
        goto LABEL_69;
      if ( !v9 )
        goto LABEL_69;
      if ( (unsigned __int64)--v9 >= *((_QWORD *)&v27 + 1) )
        goto LABEL_69;
      *(_QWORD *)(v23 + 8 * v9) = *v15;
    }
    while ( v15 != v19 );
  }
  if ( v12 <= 1 )
    goto LABEL_34;
  *(_QWORD *)&v27 = v16;
  *((_QWORD *)&v27 + 1) = v11;
  if ( v11 && (!v16 || v11 < 0) )
  {
LABEL_69:
    _o__invalid_parameter_noinfo_noreturn(v9);
    __debugbreak();
    JUMPOUT(0x180154BCBLL);
  }
  v28 = v11;
  v25 = v27;
  v26 = v11;
  ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
    &v27,
    v16 + 8 * a2,
    v16 + 8 * (v11 - 1),
    &v25);
LABEL_34:
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v24 = detail::pointer_buffer_impl<IDeviceResource *>::first(a1);
      ++*(_QWORD *)(v24 - 16);
    }
    else if ( (*(_DWORD *)a1 & 3u) - 2 > 1 )
    {
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  else
  {
    *a1 = 2LL;
  }
  return v16 + 8 * a2;
}
