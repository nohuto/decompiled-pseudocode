/*
 * XREFs of ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18023A3F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x180231C40 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 */

__int64 __fastcall CGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-28h]

  v5 = *a3;
  a3[1] = *a3;
  if ( *(_BYTE *)(a1 + 224) )
  {
    v6 = *(_QWORD *)(a1 + 216);
    *(_OWORD *)&v10[8] = _xmm;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 208LL))(v6, a2, &v9);
      v5 = a3[1];
      v7 = v9;
    }
    else
    {
      v7 = *(_OWORD *)&_xmm;
      *(_QWORD *)v10 = 0LL;
      v9 = *(_OWORD *)&_xmm;
    }
    if ( v5 == a3[2] )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        a3,
        (_BYTE *)v5,
        (__int64)&v9);
    }
    else
    {
      *(_OWORD *)v5 = v7;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)v10;
      *(_QWORD *)(v5 + 32) = *(_QWORD *)&v10[16];
      a3[1] += 40LL;
    }
  }
  return 0LL;
}
