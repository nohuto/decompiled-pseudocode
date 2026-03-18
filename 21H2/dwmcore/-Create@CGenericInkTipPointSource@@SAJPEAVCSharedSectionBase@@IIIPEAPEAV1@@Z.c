/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180253940
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x180216440 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180241858 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180253A28 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSectionBase *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  char *v9; // rax
  unsigned int v10; // ebx
  CGenericInkTipPointSource *v11; // rdi
  int v12; // eax
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // rdx
  volatile signed __int32 *v17; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (char *)DefaultHeap::Alloc(0x28uLL);
  v10 = 0;
  v11 = (CGenericInkTipPointSource *)v9;
  if ( !v9 )
  {
    v13 = -2147024882;
    v17 = 0LL;
    v14 = 2147942414LL;
    v15 = 14LL;
    goto LABEL_6;
  }
  *((_QWORD *)v9 + 1) = 0LL;
  *((_QWORD *)v9 + 4) = 0LL;
  *(_QWORD *)v9 = &CGenericInkTipPointSource::`vftable';
  *((_QWORD *)v9 + 2) = 0LL;
  *((_QWORD *)v9 + 3) = 0LL;
  v17 = (volatile signed __int32 *)v9;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 8));
  v12 = CGenericInkTipPointSource::Initialize(v11, a1, a2, a3, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 20LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)v14);
    v10 = v13;
    goto LABEL_7;
  }
  v17 = 0LL;
  *a5 = v11;
LABEL_7:
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v17);
  return v10;
}
