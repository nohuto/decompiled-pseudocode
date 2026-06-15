/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002B930
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x18002A294 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18002A760 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002F05C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180014AB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001D510 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001F9D4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003F160 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18003F6C0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        const unsigned __int16 *a2,
        struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rsi
  int v8; // r9d
  char v9; // bp
  __int64 v10; // r10
  void **v11; // r11
  unsigned __int16 *v12; // rcx
  int v13; // r8d
  int v14; // edx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r8
  struct _RTL_CRITICAL_SECTION **v24; // rax
  volatile signed __int32 *v25; // rdx
  void *v27[11]; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v28; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v27,
    (__int64)a2);
  v7 = (__int64 *)((char *)this + 152);
  v8 = 0;
  v9 = 1;
  if ( *((int *)this + 42) <= 0 )
  {
LABEL_9:
    v8 = -1;
  }
  else
  {
    v10 = 0LL;
    v11 = (void **)*v7;
    while ( 1 )
    {
      if ( !v27[0] )
        ATL::AtlThrowImpl(-2147467259);
      v12 = (unsigned __int16 *)*v11;
      do
      {
        v13 = *(unsigned __int16 *)((char *)v12 + (char *)v27[0] - (char *)*v11);
        v14 = *v12 - v13;
        if ( v14 )
          break;
        ++v12;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ++v8;
      ++v10;
      ++v11;
      if ( v10 >= *((int *)this + 42) )
        goto LABEL_9;
    }
  }
  if ( v8 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)this + 42) )
    {
      ATL::_AtlRaiseException();
      JUMPOUT(0x18002BC35LL);
    }
    v15 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)this + 20) + 8LL * v8);
  }
  v16 = (char *)v27[0] - 24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_34;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x180uLL);
  v15 = v18;
  if ( v18 )
  {
    InitializeCriticalSectionEx(v18, 0, 0);
    `eh vector constructor iterator'(
      &v15[1],
      8uLL,
      0x15uLL,
      (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,
      std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    `eh vector constructor iterator'(
      &v15[5].LockCount,
      8uLL,
      0x15uLL,
      (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,
      std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    v15[9].OwningThread = (char *)this + 280;
  }
  else
  {
    v15 = 0LL;
  }
  v27[1] = v15;
  if ( v15 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      (void **)&v28,
      (__int64)a2);
    v27[2] = (char *)this + 152;
    v19 = _o__recalloc(*v7, *((_DWORD *)this + 42) + 1, 8LL);
    if ( v19 )
    {
      *v7 = v19;
      v20 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) + 1, 8LL);
      v21 = v20;
      if ( v20 )
      {
        *((_QWORD *)this + 20) = v20;
        v22 = *((int *)this + 42);
        v23 = (_QWORD *)(*v7 + 8 * v22);
        v27[3] = v23;
        if ( v23 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v23,
            (const void **)&v28);
          v21 = *((_QWORD *)this + 20);
        }
        v24 = (struct _RTL_CRITICAL_SECTION **)(v21 + 8 * v22);
        if ( v24 )
          *v24 = v15;
        ++*((_DWORD *)this + 42);
        v9 = 0;
      }
    }
    v25 = v28 - 6;
    if ( _InterlockedExchangeAdd(v28 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v15[5].LockCount,
        8uLL,
        0x15uLL,
        std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      `eh vector destructor iterator'(
        &v15[1],
        8uLL,
        0x15uLL,
        std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      DeleteCriticalSection(v15);
      operator delete(v15, (const struct std::nothrow_t *)0x180);
      return v6;
    }
LABEL_34:
    *a3 = v15;
    return v6;
  }
  return (unsigned int)-2147024882;
}
