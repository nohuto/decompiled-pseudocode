/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180043988
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x180041260 (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCO.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802087CC (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??$insert@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@$0A@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@PEAVCColorGradientStop@@@details@gsl@@1@Z @ 0x1800414FC (--$insert@V-$span_iterator@PEAVCColorGradientStop@@@details@gsl@@$0A@@-$vector@PEAVCColorGradien.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180041754 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGradientBrush::SetStops(struct CResource ***this, __int64 *a2, char a3)
{
  struct CResource **v3; // rbx
  struct CResource **v7; // rdi
  int v8; // eax
  struct CResource ***v9; // rdi
  struct CResource **v10; // rbx
  struct CResource **v11; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+38h] [rbp-19h] BYREF
  __int64 v15; // [rsp+48h] [rbp-9h]
  __int128 v16; // [rsp+58h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+17h]
  __int128 v18; // [rsp+78h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+37h]
  void *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v21; // [rsp+C0h] [rbp+6Fh] BYREF

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, *v3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    ++v3;
  }
  v9 = this + 21;
  if ( !a3 )
  {
    v10 = *v9;
    v11 = this[22];
    if ( *v9 != v11 )
    {
      do
        CResource::UnRegisterNotifierInternal((CResource *)this, *v10++);
      while ( v10 != v11 );
      v10 = *v9;
    }
    this[22] = v10;
  }
  v12 = *a2;
  v13 = (__int64)this[22];
  *(_QWORD *)&v14 = a2[1];
  v17 = v14;
  *((_QWORD *)&v14 + 1) = v14 + 8 * v12;
  v16 = v14;
  v18 = v14;
  v19 = *((_QWORD *)&v14 + 1);
  v15 = v14;
  std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<CColorGradientStop *>,0>(
    (__int64 *)this + 21,
    &v21,
    v13,
    (__int64)&v14,
    (__int64)&v18);
  CGradientBrush::FlattenStops((CGradientBrush *)this);
  CGradientBrush::InvalidateGradient((CGradientBrush *)this);
}
