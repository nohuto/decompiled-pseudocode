/*
 * XREFs of ??1CD3DDevice@@MEAA@XZ @ 0x1800A4E80
 * Callers:
 *     ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x1800A53F0 (--_GCD3DDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18003742C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800A4D6C (--1CD2DContext@@UEAA@XZ.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1800A4DC0 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??_GCSurfaceShaderComposer@@QEAAPEAXI@Z @ 0x1800A52F8 (--_GCSurfaceShaderComposer@@QEAAPEAXI@Z.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x1800A5368 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800EA688 (--1-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@V-$all.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x18023E084 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z @ 0x18023E54C (--_G-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z.c)
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180241B80 (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 */

void __fastcall CD3DDevice::~CD3DDevice(CD3DDevice *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edx
  CSurfaceShaderComposer *v6; // rcx
  void *v7; // rcx
  int v8; // edi
  void *v9; // rcx
  void *v10; // rcx
  int v11; // edi
  void *v12; // rcx
  void *v13; // rcx
  int v14; // edi
  void *v15; // rcx
  CD3DDevice **v16; // rdi
  CD3DDevice *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CD3DDevice::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD3DDevice::`vftable'{for `CD2DContext'};
  CD3DDevice::ProcessPendingUnpin(this, 1);
  CD3DDevice::DestroyAllResources((CD2DResourceManager **)this);
  v2 = (char *)*((_QWORD *)this + 122);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 122) = 0LL;
  }
  v3 = *((_QWORD *)this + 75);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 888LL))(v3);
    v4 = *((_QWORD *)this + 75);
    *((_QWORD *)this + 75) = 0LL;
    if ( *((_QWORD *)this + 63) )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    *((_QWORD *)this + 63) = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_HWDEVICE_DESTROY, this);
  `vector destructor iterator'(
    (char *)this + 2200,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 2192,
    8LL,
    1LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1808,
    8LL,
    48LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1616,
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1520,
    8LL,
    12LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  v6 = (CSurfaceShaderComposer *)*((_QWORD *)this + 189);
  if ( v6 )
    CSurfaceShaderComposer::`scalar deleting destructor'(v6, v5);
  v7 = (void *)*((_QWORD *)this + 186);
  if ( v7 )
  {
    v8 = 0;
    if ( *((int *)this + 376) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 187) + 8LL * v8++));
      while ( v8 < *((_DWORD *)this + 376) );
      v7 = (void *)*((_QWORD *)this + 186);
    }
    operator delete(v7);
    *((_QWORD *)this + 186) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 187);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 187) = 0LL;
  }
  *((_DWORD *)this + 376) = 0;
  v10 = (void *)*((_QWORD *)this + 183);
  if ( v10 )
  {
    v11 = 0;
    if ( *((int *)this + 370) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 184) + 16LL * v11++));
      while ( v11 < *((_DWORD *)this + 370) );
      v10 = (void *)*((_QWORD *)this + 183);
    }
    operator delete(v10);
    *((_QWORD *)this + 183) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 184);
  if ( v12 )
  {
    operator delete(v12);
    *((_QWORD *)this + 184) = 0LL;
  }
  *((_DWORD *)this + 370) = 0;
  v13 = (void *)*((_QWORD *)this + 180);
  if ( v13 )
  {
    v14 = 0;
    if ( *((int *)this + 364) > 0 )
    {
      do
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 181) + 8LL * v14++));
      while ( v14 < *((_DWORD *)this + 364) );
      v13 = (void *)*((_QWORD *)this + 180);
    }
    operator delete(v13);
    *((_QWORD *)this + 180) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 181);
  if ( v15 )
  {
    operator delete(v15);
    *((_QWORD *)this + 181) = 0LL;
  }
  *((_DWORD *)this + 364) = 0;
  std::vector<std::unique_ptr<CCheckMPOCache>>::~vector<std::unique_ptr<CCheckMPOCache>>((char *)this + 1368);
  v16 = (CD3DDevice **)((char *)this + 1232);
  v17 = (CD3DDevice *)*((_QWORD *)this + 154);
  if ( (__int64)(*((_QWORD *)this + 155) - (_QWORD)v17) >> 4 )
  {
    detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 1232,
      0LL);
    v17 = *v16;
  }
  *v16 = 0LL;
  if ( v17 == (CD3DDevice *)((char *)this + 1256) )
    v17 = 0LL;
  operator delete(v17);
  *((_QWORD *)this + 142) = &CD3DResourceManager::`vftable';
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 1120);
  v18 = (void *)*((_QWORD *)this + 134);
  if ( v18 )
    CAsyncTask<CD3DDevice::D3D12Resources>::`scalar deleting destructor'(v18);
  v19 = *((_QWORD *)this + 131);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 130);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = *((_QWORD *)this + 129);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *((_QWORD *)this + 128);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 77);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 76);
  v23 = *((_QWORD *)this + 75);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = *((_QWORD *)this + 74);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v25 = *((_QWORD *)this + 73);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = *((_QWORD *)this + 70);
  if ( v26 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(*((_QWORD *)this + 70), *((_QWORD *)this + 71));
    std::_Deallocate<16,0>(v26, (*((_QWORD *)this + 72) - v26) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 70) = 0LL;
    *((_QWORD *)this + 71) = 0LL;
    *((_QWORD *)this + 72) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 512);
  CD2DContext::~CD2DContext((CD2DResourceManager **)this + 2);
  v27 = *((_QWORD *)this + 63);
  if ( v27 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27) )
  {
    DebugBreak();
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
