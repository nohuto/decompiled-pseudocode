/*
 * XREFs of ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1801E5E68
 * Callers:
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801E6AB8 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x1801E59E4 (--$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1.c)
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1801E6CE8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rdi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  int v8; // xmm0_4
  int v9; // eax
  _BYTE v10[20]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 144;
  *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
  std::vector<D2D1_GRADIENT_STOP>::reserve(
    (char *)this + 144,
    (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3);
  v3 = *((_QWORD *)this + 16);
  v4 = *((_QWORD *)this + 15);
  v5 = 0LL;
  v6 = (v3 - v4 + 7) >> 3;
  if ( v4 > v3 )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v7 = *((_QWORD *)v1 + 1);
      v8 = *(_DWORD *)(*(_QWORD *)v4 + 56LL);
      *(_OWORD *)&v10[4] = *(_OWORD *)(*(_QWORD *)v4 + 60LL);
      *(_DWORD *)v10 = v8;
      if ( *((_QWORD *)v1 + 2) == v7 )
      {
        std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
          (const void **)v1,
          (_BYTE *)v7,
          (__int64)v10);
      }
      else
      {
        v9 = *(_DWORD *)&v10[16];
        *(_OWORD *)v7 = *(_OWORD *)v10;
        *(_DWORD *)(v7 + 16) = v9;
        *((_QWORD *)v1 + 1) += 20LL;
      }
      v4 += 8LL;
      ++v5;
    }
    while ( v5 != v6 );
  }
}
