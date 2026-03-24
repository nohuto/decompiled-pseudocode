/*
 * XREFs of ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801E77F8
 * Callers:
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B58F8 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x1801E74FC (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCO.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCColorGradientStop@@@std@@@std@@@1@V?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801E6920 (--$insert@V-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@X@-$vecto.c)
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1801E6BA8 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CGradientBrush::SetStops(CResource *this, _QWORD *a2, char a3)
{
  struct CResource **v3; // rbx
  struct CResource **v7; // rsi
  int v8; // eax
  struct CResource **v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  char *v12; // r8
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  v3 = (struct CResource **)a2[1];
  v7 = &v3[*a2];
  while ( v3 != v7 )
  {
    v8 = CResource::RegisterNotifier(this, *v3);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    ++v3;
  }
  if ( !a3 )
  {
    v9 = (struct CResource **)*((_QWORD *)this + 15);
    v10 = 0LL;
    v11 = (unsigned __int64)(*((_QWORD *)this + 16) - (_QWORD)v9 + 7LL) >> 3;
    if ( (unsigned __int64)v9 > *((_QWORD *)this + 16) )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        CResource::UnRegisterNotifierInternal(this, *v9);
        ++v10;
        ++v9;
      }
      while ( v10 != v11 );
    }
    *((_QWORD *)this + 16) = *((_QWORD *)this + 15);
  }
  v12 = (char *)*((_QWORD *)this + 16);
  v13[1] = *a2;
  v13[0] = a2;
  v14[0] = a2;
  v14[1] = 0LL;
  std::vector<CColorGradientStop *>::insert<gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>,void>(
    (_QWORD *)this + 15,
    &v16,
    v12,
    v14,
    v13);
  CGradientBrush::FlattenStops(this);
  CGradientBrush::InvalidateGradient(this);
}
