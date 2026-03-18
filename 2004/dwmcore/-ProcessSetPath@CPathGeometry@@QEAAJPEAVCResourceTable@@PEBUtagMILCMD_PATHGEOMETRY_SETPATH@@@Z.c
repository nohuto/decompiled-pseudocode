/*
 * XREFs of ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801E3E74
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x18009E8EC (-ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E3F84 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021F8A8 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CPathGeometry::ProcessSetPath(
        CPathGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PATHGEOMETRY_SETPATH *a3)
{
  unsigned int v5; // ebx
  __int64 Resource; // rax
  __int64 v7; // rcx
  CSharedSectionBase *v8; // rsi
  __int64 v9; // rcx
  void *v10; // rsi
  const struct CPathData *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  v7 = *((_QWORD *)this + 17);
  v8 = (CSharedSectionBase *)Resource;
  if ( v7 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v8 )
  {
    v10 = CSharedSectionBase::ResolveAllocation(v8, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v10 )
    {
      v11 = (const struct CPathData *)DefaultHeap::Alloc(0x58uLL);
      v9 = (__int64)v11;
      if ( v11 )
      {
        v14[0] = *((unsigned int *)a3 + 4);
        v14[1] = v10;
        v11 = (const struct CPathData *)CPathData::CPathData(v11, g_DeviceManager, v14);
      }
      if ( v11 )
      {
        CPathGeometry::SetPath(this, v11);
        return v5;
      }
      v13 = 30;
    }
    else
    {
      v13 = 25;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, v13, 0LL);
  }
  return v5;
}
