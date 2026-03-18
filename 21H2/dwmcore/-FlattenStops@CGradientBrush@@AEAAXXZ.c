/*
 * XREFs of ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180041754
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180043988 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x180040F1C (-_Reallocate_exactly@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x18023A0F8 (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 i; // rbx
  __int64 v8; // rdx
  int v9; // xmm0_4
  int v10; // eax
  _BYTE v11[20]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 192;
  v3 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 25) = v3;
  v4 = *((_QWORD *)this + 22);
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 26) - v3) >> 2);
  v6 = (v4 - *((_QWORD *)this + 21)) >> 3;
  if ( v6 > v5 )
  {
    if ( v6 > 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector too long");
    std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly((__int64)v1, v6);
    v4 = *((_QWORD *)this + 22);
  }
  for ( i = *((_QWORD *)this + 21); i != v4; i += 8LL )
  {
    v8 = *((_QWORD *)this + 25);
    v9 = *(_DWORD *)(*(_QWORD *)i + 64LL);
    *(_OWORD *)&v11[4] = *(_OWORD *)(*(_QWORD *)i + 68LL);
    *(_DWORD *)v11 = v9;
    if ( v8 == *((_QWORD *)this + 26) )
    {
      std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(v1, v8, v11);
    }
    else
    {
      v10 = *(_DWORD *)&v11[16];
      *(_OWORD *)v8 = *(_OWORD *)v11;
      *(_DWORD *)(v8 + 16) = v10;
      *((_QWORD *)v1 + 1) += 20LL;
    }
  }
}
