/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x18002B4B0
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18000A990 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18002B154 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18002E2C8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18002E594 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002EBE8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x180030720 (TS_AudioProtocolNotifyRundown.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x1800309D4 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@@2@@ATL@@QEAA@XZ @ 0x18001D41C (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001F9D4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEAA@XZ @ 0x180030AEC (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$shared_ptr@VDu.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003F160 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180040012 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800406E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TSSession::~TSSession(TSSession *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rcx
  void *v18; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx

  v2 = (void *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 31);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_DWORD *)this + 57) = 1;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    WTSFreeMemory(v4);
  while ( *((int *)this + 42) > 0 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)**((_QWORD **)this + 20);
    v6 = (volatile signed __int32 *)(**((_QWORD **)this + 19) - 24LL);
    if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
    v7 = *((int *)this + 42);
    if ( (_DWORD)v7 != 1 )
    {
      v8 = 8LL * ((int)v7 - 1);
      v9 = *((_QWORD *)this + 19);
      v10 = 8 * v7;
      if ( v8 )
      {
        if ( !v9 || v9 == -8 )
        {
LABEL_44:
          *(_DWORD *)_o__errno(v7, v10) = 22;
LABEL_45:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v10 < v8 )
          goto LABEL_43;
        memmove_0(*((void **)this + 19), (const void *)(v9 + 8), v8);
        v7 = *((unsigned int *)this + 42);
      }
      v11 = 8LL * ((int)v7 - 1);
      v12 = *((_QWORD *)this + 20);
      v10 = 8LL * (int)v7;
      if ( v11 )
      {
        if ( !v12 || v12 == -8 )
          goto LABEL_44;
        if ( v10 < v11 )
        {
LABEL_43:
          *(_DWORD *)_o__errno(v7, v10) = 34;
          goto LABEL_45;
        }
        memmove_0(*((void **)this + 20), (const void *)(v12 + 8), v11);
        LODWORD(v7) = *((_DWORD *)this + 42);
      }
    }
    v13 = _o__recalloc(*((_QWORD *)this + 19), (int)v7 - 1, 8LL);
    v14 = *((_DWORD *)this + 42);
    if ( v13 || v14 == 1 )
      *((_QWORD *)this + 19) = v13;
    v15 = _o__recalloc(*((_QWORD *)this + 20), v14 - 1, 8LL);
    v16 = *((_DWORD *)this + 42);
    if ( v15 || v16 == 1 )
      *((_QWORD *)this + 20) = v15;
    *((_DWORD *)this + 42) = v16 - 1;
    if ( v5 )
    {
      `eh vector destructor iterator'(
        &v5[5].LockCount,
        8uLL,
        0x15uLL,
        std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      `eh vector destructor iterator'(
        &v5[1],
        8uLL,
        0x15uLL,
        std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
      DeleteCriticalSection(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x180);
    }
  }
  v17 = (void *)*((_QWORD *)this + 42);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = (void *)*((_QWORD *)this + 41);
  if ( v18 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v18);
  }
  v20 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 39);
  if ( v20 )
    (**v20)(v20, 1LL);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,std::shared_ptr<DuckingDescriptor>>>((char *)this + 280);
  v21 = *((_QWORD *)this + 34);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *((_QWORD *)this + 33);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = *((_QWORD *)this + 32);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
