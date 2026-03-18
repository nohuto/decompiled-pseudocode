/*
 * XREFs of ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801D2C00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x18009E8EC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801D2634 (--$_Emplace_reallocate@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPathData@@@WR.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801D3270 (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021F8A8 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetPathData(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETPATHDATA *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rbx
  CSharedSectionBase *Resource; // rax
  void *v16; // r14
  LPVOID v17; // rax
  __int64 v18; // rbx
  __int64 *v19; // rdx
  unsigned int v20; // ebx
  int v21; // r9d
  unsigned int v23; // [rsp+20h] [rbp-58h]
  __int128 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF

  v8 = a5 / 0xCuLL;
  if ( !*((_DWORD *)a3 + 3)
    || a5 % 0xCuLL
    || !v8
    || (v9 = *((unsigned int *)a3 + 3),
        v10 = (__int64 *)(this + 424),
        v11 = *(_QWORD *)(this + 432),
        v8 + ((v11 - *(_QWORD *)(this + 424)) >> 3) > v9)
    || (this = *v10 == v11, (*((_BYTE *)a3 + 8) != 0) == (_DWORD)this) )
  {
    v23 = 633;
  }
  else
  {
    if ( *v10 == v11 && v9 > (v10[2] - *v10) >> 3 )
      std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(v10);
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = 3 * v13;
      Resource = (CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, a4[3 * v13], 0xA9u);
      if ( !Resource )
        break;
      v16 = CSharedSectionBase::ResolveAllocation(Resource, (unsigned int)a4[v14 + 1], (unsigned int)a4[v14 + 2]);
      if ( !v16 )
      {
        v21 = -2147024882;
        v23 = 659;
        goto LABEL_31;
      }
      v17 = DefaultHeap::Alloc(0x58uLL);
      if ( v17 )
      {
        *(_QWORD *)&v24 = (unsigned int)a4[v14 + 2];
        *((_QWORD *)&v24 + 1) = v16;
        v25 = v24;
        v18 = CPathData::CPathData(v17, g_DeviceManager, &v25);
      }
      else
      {
        v18 = 0LL;
      }
      v26 = v18;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v26);
      if ( !v18 )
      {
        v21 = -2147024882;
        v23 = 664;
        goto LABEL_31;
      }
      v19 = (__int64 *)v10[1];
      if ( (__int64 *)v10[2] == v19 )
      {
        std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CPathData>>(
          v10,
          (__int64)v19,
          &v26);
        v18 = v26;
      }
      else
      {
        *v19 = 0LL;
        if ( v19 != &v26 )
        {
          *v19 = v18;
          v18 = 0LL;
        }
        v10[1] += 8LL;
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v13 = ++v12;
      if ( v12 >= v8 )
        return 0;
    }
    v23 = 653;
  }
  v21 = -2003303421;
LABEL_31:
  v20 = v21;
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v21, v23, 0LL);
  return v20;
}
