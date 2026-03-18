/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1802225B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800469AC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180222150 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180222A5C (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  struct CResourceTable *v5; // r11
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdi
  CSharedSectionBase *Resource; // rax
  void *v16; // r12
  LPVOID v17; // r15
  gsl::details *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 *v21; // rdx
  unsigned int v22; // ebx
  int v23; // r9d
  unsigned int v25; // [rsp+20h] [rbp-30h]
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF
  __int128 v27; // [rsp+40h] [rbp-10h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]
  __int64 v30; // [rsp+A0h] [rbp+50h] BYREF

  v28 = this;
  v5 = a2;
  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (__int64 *)(this + 456),
        v11 = *(_QWORD *)(this + 464),
        v8 + ((v11 - *(_QWORD *)(this + 456)) >> 3) > v9)
    || (this = *v10 == v11, (*((_BYTE *)a3 + 8) != 0) == (_DWORD)this) )
  {
    v25 = 648;
LABEL_31:
    v23 = -2003303421;
LABEL_32:
    v22 = v23;
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0LL, v23, v25);
  }
  else
  {
    if ( *v10 == v11 && v9 > (v10[2] - *v10) >> 3 )
    {
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(v10);
      v5 = a2;
    }
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = 3 * v13;
      Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)v5, a4[3 * v13], 0xA8u);
      if ( !Resource )
      {
        v25 = 668;
        goto LABEL_31;
      }
      v16 = CSharedSectionBase::ResolveAllocation(Resource, (unsigned int)a4[v14 + 1], (unsigned int)a4[v14 + 2]);
      if ( !v16 )
      {
        v23 = -2147024882;
        v25 = 674;
        goto LABEL_32;
      }
      v17 = DefaultHeap::Alloc(0x50uLL);
      if ( v17 )
      {
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v26, (unsigned int)a4[v14 + 2]);
        *((_QWORD *)&v26 + 1) = v16;
        if ( (_QWORD)v26 == -1LL )
        {
          gsl::details::terminate(v18);
          __debugbreak();
        }
        v27 = v26;
        v19 = CPathData::CPathData((__int64)v17, g_DeviceManager, &v27);
      }
      else
      {
        v19 = 0LL;
      }
      v30 = v19;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v30);
      if ( !v19 )
      {
        v22 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, -2147024882, 0x2A7u);
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
        return v22;
      }
      v21 = *(__int64 **)(v28 + 464);
      if ( v21 == *(__int64 **)(v28 + 472) )
      {
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
          v10,
          (__int64)v21,
          &v30);
      }
      else
      {
        *v21 = 0LL;
        if ( v21 != &v30 )
        {
          *v21 = v19;
          v30 = 0LL;
        }
        v10[1] += 8LL;
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
      v13 = ++v12;
      if ( v12 >= v8 )
        return 0;
      v5 = a2;
    }
  }
  return v22;
}
