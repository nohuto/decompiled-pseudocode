/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801C0184
 * Callers:
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18001E704 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18001F4A8 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BFFE4 (-ensure_extra_capacity@-$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@.c)
 */

char *__fastcall detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rbx
  char *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r10
  __int64 v12; // r11
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (const void **)a1,
    1uLL);
  v5 = *(_BYTE **)a1;
  v6 = *(char **)(a1 + 8);
  *((_QWORD *)&v14 + 1) = 1LL;
  v7 = (v6 - v5) >> 3;
  v8 = v7 - a2;
  *(_QWORD *)&v14 = &v5[8 * v7];
  if ( !(_QWORD)v14 )
    goto LABEL_16;
  v15 = 1LL;
  v9 = v7 - a2;
  if ( v8 > 1 )
    v9 = 1LL;
  v16 = v14;
  v10 = 8 * v9;
  v11 = &v6[-v10];
  v17 = 1LL;
  if ( v6 != &v6[-v10] )
  {
    v12 = v16;
    v4 = v17;
    while ( 1 )
    {
      v6 -= 8;
      if ( !v12 )
        break;
      if ( !v4 )
        break;
      if ( (unsigned __int64)--v4 >= *((_QWORD *)&v16 + 1) )
        break;
      *(_QWORD *)(v12 + 8 * v4) = *(_QWORD *)v6;
      if ( v6 == v11 )
        goto LABEL_10;
    }
LABEL_16:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x1801C02C8LL);
  }
LABEL_10:
  if ( v8 > 1 )
  {
    *(_QWORD *)&v16 = v5;
    *((_QWORD *)&v16 + 1) = v7;
    if ( v7 && (!v5 || v7 < 0) )
      goto LABEL_16;
    v17 = v7;
    v14 = v16;
    v15 = v7;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      (__int64)&v16,
      &v5[8 * a2],
      (__int64)&v5[8 * v7 - 8],
      (__int64 *)&v14);
  }
  *(_QWORD *)(a1 + 8) += 8LL;
  return &v5[8 * a2];
}
