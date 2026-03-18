/*
 * XREFs of ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F3A18
 * Callers:
 *     ?SetPerFrameDataAllocationOffset@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180176674 (-SetPerFrameDataAllocationOffset@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@V.c)
 *     ?SetPerFrameDataAllocationSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180176694 (-SetPerFrameDataAllocationSize@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCC.c)
 *     ?SetPerFrameDataSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x1801766B4 (-SetPerFrameDataSharedSection@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCCo.c)
 *     ?SetPerFrameDataSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x18017672C (-SetPerFrameDataSize@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@.c)
 *     ?SetReferenceSurface@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180177508 (-SetReferenceSurface@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@.c)
 *     ?SetTipPointSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180177C00 (-SetTipPointSize@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAA.c)
 *     ?SetTipPointsAllocationOffset@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180177C20 (-SetTipPointsAllocationOffset@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCCo.c)
 *     ?SetTipPointsAllocationSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180177C40 (-SetTipPointsAllocationSize@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCCont.c)
 *     ?SetTipPointsSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x180177C60 (-SetTipPointsSharedSection@-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCConte.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x180038464 (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x18015A820 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1801C772C (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801CB744 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801F35E4 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1801F4238 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180204DF8 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 */

void __fastcall CSynchronousSuperWetInk::OnPropertyChanged(CSynchronousSuperWetInk *this)
{
  struct CGenericInkTipPointSource **v1; // rax
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // r8d
  struct CSharedSectionBase *v6; // rcx
  CSharedSectionBase *v7; // rcx
  void *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  bool v11; // si
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  void **v16; // [rsp+40h] [rbp-28h]
  volatile __int32 **v17; // [rsp+48h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-18h]

  v1 = (struct CGenericInkTipPointSource **)((char *)this + 120);
  if ( !*((_QWORD *)this + 15) )
  {
    v3 = *((_DWORD *)this + 18);
    if ( v3 )
    {
      v4 = *((_DWORD *)this + 16);
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 17);
        if ( v5 )
        {
          v6 = (struct CSharedSectionBase *)*((_QWORD *)this + 12);
          if ( v6 )
            CGenericInkTipPointSource::Create(v6, v4, v5, v3, v1);
        }
      }
    }
  }
  if ( *((_QWORD *)this + 21) )
    goto LABEL_18;
  if ( !*((_DWORD *)this + 21) )
    goto LABEL_18;
  if ( !*((_DWORD *)this + 19) )
    goto LABEL_18;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_18;
  v7 = (CSharedSectionBase *)*((_QWORD *)this + 13);
  if ( !v7 )
    goto LABEL_18;
  v8 = CSharedSectionBase::ResolveAllocation(v7, *((unsigned int *)this + 19), *((unsigned int *)this + 20));
  if ( v8 )
  {
    v10 = *((_DWORD *)this + 21);
    v17 = 0LL;
    v16 = (void **)((char *)this + 176);
    v15[0] = v9;
    v18 = 1;
    v15[1] = v8;
    v11 = (int)CSharedCircularQueue::Create((unsigned int *)v15, v10, &v17, 0) < 0;
    if ( v18 )
    {
      v12 = *v16;
      *v16 = v17;
      if ( v12 )
        operator delete(v12);
    }
    if ( !v11 )
    {
      Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 21, *((_QWORD *)this + 13));
LABEL_18:
      if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
      {
        *(_QWORD *)(*((_QWORD *)this + 11) + 184LL) = this;
        CResource::NotifyOnChanged(v13, 0, 0LL);
        std::vector<unsigned char>::reserve(
          (char *)this + 224,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 22) + 8LL) * *(_DWORD *)(*((_QWORD *)this + 22) + 12LL)));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
          McTemplateU0xx_EventWriteTransfer(
            v14,
            &EVTDESC_SYNCHRONOUSSUPERWETINK_SUCCESSFULLY_REGISTERED,
            this,
            *((_QWORD *)this + 11));
      }
    }
  }
}
