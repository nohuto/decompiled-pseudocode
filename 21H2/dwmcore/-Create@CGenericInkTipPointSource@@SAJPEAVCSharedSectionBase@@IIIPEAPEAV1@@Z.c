/*
 * XREFs of ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180203148
 * Callers:
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801C36C0 (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBU.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801EFFC8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019D338 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x18020323C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Create(
        struct CSharedSectionBase *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct CGenericInkTipPointSource **a5)
{
  volatile signed __int32 *v9; // rax
  unsigned int v10; // edi
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // rdx
  CDrawListEntry *v17; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (volatile signed __int32 *)DefaultHeap::Alloc(0x28uLL);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = 0LL;
    *((_OWORD *)v9 + 1) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *(_QWORD *)v9 = &CGenericInkTipPointSource::`vftable';
    *((_DWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v17 = (CDrawListEntry *)v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v15 = 14LL;
    v14 = 2147942414LL;
    goto LABEL_9;
  }
  _InterlockedIncrement(v11 + 2);
  v12 = CGenericInkTipPointSource::Initialize((CGenericInkTipPointSource *)v11, a1, a2, a3, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 20LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)v14);
    v10 = v13;
    goto LABEL_10;
  }
  v17 = 0LL;
  *a5 = (struct CGenericInkTipPointSource *)v11;
LABEL_10:
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v17);
  return v10;
}
