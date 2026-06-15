/*
 * XREFs of ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14005F474
 * Callers:
 *     ?UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z @ 0x14005F400 (-UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x14005F420 (-UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z @ 0x14005F440 (-UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z @ 0x14005F460 (-UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x140066C00 (-UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z @ 0x140066C20 (-UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14001D168 (__report_rangecheckfailure.c)
 *     memcpy_s @ 0x140029158 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140050620 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140055614 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x14005BAA4 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x14005C350 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x14005E8BC (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlModule::UpdateRegistryFromResourceS(
        ATL::CAtlModule *this,
        unsigned __int16 a2,
        int a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  struct ATL::CAtlModule *v6; // rbx
  int v7; // eax
  int Error; // ebx
  HMODULE v9; // rbx
  DWORD ModuleFileNameW; // eax
  WCHAR *v11; // rdx
  unsigned int i; // ecx
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  _QWORD *v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v23[48]; // [rsp+60h] [rbp-A8h] BYREF
  char v24; // [rsp+90h] [rbp-78h]
  WCHAR Filename[264]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 Source[520]; // [rsp+2A8h] [rbp+1A0h] BYREF
  unsigned __int16 v27; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE Destination[1054]; // [rsp+6BAh] [rbp+5B2h] BYREF

  v6 = ATL::_pAtlModule;
  v22[0] = &ATL::CRegObject::`vftable';
  v22[1] = 0LL;
  v22[2] = 0LL;
  *(_DWORD *)v23 = 0;
  memset(&v23[8], 0, 40);
  v24 = 0;
  v7 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&v23[8]);
  if ( v7 < 0 )
  {
    Error = v7;
    goto LABEL_32;
  }
  v24 = 1;
  Error = (*(__int64 (__fastcall **)(struct ATL::CAtlModule *, _QWORD *))(*(_QWORD *)v6 + 40LL))(v6, v22);
  if ( Error >= 0 )
  {
    v20 = 0LL;
    v9 = hModule;
    ModuleFileNameW = GetModuleFileNameW(hModule, Filename, 0x104u);
    if ( ModuleFileNameW )
    {
      if ( ModuleFileNameW == 260 )
      {
        ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
        Error = -2147024774;
        goto LABEL_32;
      }
      v11 = Filename;
      for ( i = 0; i < 0x207; ++i )
      {
        v13 = *v11;
        if ( !*v11 )
          break;
        Source[i] = v13;
        if ( v13 == 39 && i < 0x206 )
          Source[++i] = 39;
        ++v11;
      }
      Source[i] = 0;
      if ( !v9 || v9 == GetModuleHandleW(0LL) )
      {
        v27 = 34;
        v15 = -1LL;
        v16 = -1LL;
        do
          ++v16;
        while ( Source[v16] );
        if ( memcpy_s(Destination, 0x414uLL, Source, 2LL * ((int)v16 + 1)) )
        {
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
          Error = -2147467259;
          goto LABEL_32;
        }
        do
          ++v15;
        while ( *(_WORD *)&Destination[2 * v15 - 2] );
        *(_WORD *)&Destination[2 * (int)v15 - 2] = 34;
        v17 = 2LL * (int)v15 + 2;
        if ( v17 >= 0x418 )
          _report_rangecheckfailure();
        *(_WORD *)&Destination[v17 - 2] = 0;
        v14 = &v27;
      }
      else
      {
        v14 = Source;
      }
      Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v22, L"Module", v14);
      if ( Error >= 0 )
      {
        Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v22, L"Module_Raw", Source);
        if ( Error >= 0 )
        {
          v21 = 0LL;
          if ( a3 )
            v18 = ATL::CRegObject::RegisterFromResource(
                    (ATL::CRegObject *)v22,
                    Filename,
                    (const unsigned __int16 *)a2,
                    L"REGISTRY",
                    1);
          else
            v18 = ATL::CRegObject::RegisterFromResource(
                    (ATL::CRegObject *)v22,
                    Filename,
                    (const unsigned __int16 *)a2,
                    L"REGISTRY",
                    0);
          Error = v18;
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v21);
        }
      }
    }
    else
    {
      Error = ATL::AtlHresultFromLastError();
    }
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v20);
  }
LABEL_32:
  ATL::CRegObject::~CRegObject((ATL::CRegObject *)v22);
  return (unsigned int)Error;
}
