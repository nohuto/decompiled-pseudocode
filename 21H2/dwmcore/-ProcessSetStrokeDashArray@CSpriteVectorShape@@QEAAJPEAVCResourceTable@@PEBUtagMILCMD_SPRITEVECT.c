/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x18023F870
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A69CC (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18023F2B4 (--$insert@V-$span_iterator@$$CBM@details@gsl@@$0A@@-$vector@MV-$allocator@M@std@@@std@@QEAA-AV-$.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // r14d
  __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  gsl::details *v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // r8
  __int64 v14; // rcx
  __int128 v16; // [rsp+38h] [rbp-21h] BYREF
  char *v17; // [rsp+48h] [rbp-11h]
  __int128 v18; // [rsp+58h] [rbp-1h]
  char *v19; // [rsp+68h] [rbp+Fh]
  __int128 v20; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+88h] [rbp+2Fh]
  struct CResourceTable *v22; // [rsp+C0h] [rbp+67h] BYREF

  v22 = a2;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  if ( v5 != a5 || (a5 & 3) != 0 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0xCAu);
  }
  else
  {
    v9 = (__int64 *)((char *)this + 160);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_BYTE *)a3 + 8) )
    {
      *((_QWORD *)this + 21) = *((_QWORD *)this + 20);
      std::vector<float>::reserve((_QWORD *)this + 20, v10);
    }
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v16, v10);
    v12 = v16;
    if ( (_QWORD)v16 == -1LL || !a4 && (_QWORD)v16 )
    {
      gsl::details::terminate(v11);
      __debugbreak();
    }
    v13 = (_BYTE *)*((_QWORD *)this + 21);
    *((_QWORD *)&v16 + 1) = &a4[4 * v16];
    *(_QWORD *)&v16 = a4;
    *((_QWORD *)&v18 + 1) = &a4[4 * v12];
    v21 = *((_QWORD *)&v16 + 1);
    v20 = v16;
    *(_QWORD *)&v18 = a4;
    v19 = a4;
    v16 = v18;
    v17 = a4;
    std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(v9, &v22, v13, (__int64)&v16, (__int64)&v20);
    v14 = *((_QWORD *)this + 17);
    if ( v14 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  }
  return v6;
}
