/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x180014EDC
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180013DE0 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163F0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180016CD4 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180017930 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassPolicyGainsWrapper@@@2@@ATL@@QEAA@XZ @ 0x180017ABC (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCStreamClassP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180017F24 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x180018138 (--1-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PEAUIU.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::~CProcess(CProcess *this)
{
  int i; // eax
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void *v5; // rbx
  HANDLE v6; // rax
  char *v7; // rcx
  const struct std::nothrow_t *v8; // rdx
  char *v9; // r8
  char *v10; // rcx
  __int64 v11; // rcx
  char *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  char *v22; // r8

  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  for ( i = *((_DWORD *)this + 76); i > 0; i = *((_DWORD *)this + 76) )
  {
    v3 = (void *)**((_QWORD **)this + 37);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
      (char *)this + 288,
      0LL);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  while ( *((int *)this + 82) > 0 )
  {
    v5 = (void *)**((_QWORD **)this + 40);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
      (char *)this + 312,
      0LL);
    v6 = GetProcessHeap();
    HeapFree(v6, 0, v5);
  }
  if ( *((_DWORD *)this + 66) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 40LL))(*((_QWORD *)this + 34));
  if ( *((_QWORD *)this + 77) )
  {
    CProcess::CancelDeferredBamExemptionRelease(this);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 77));
  }
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v7 = (char *)*((_QWORD *)this + 99);
  if ( v7 )
  {
    v8 = (const struct std::nothrow_t *)((*((_QWORD *)this + 101) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v8 >= 0x1000 )
    {
      v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
      v9 = (char *)*((_QWORD *)v7 - 1);
      v10 = (char *)(v7 - v9);
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
        goto LABEL_43;
      v7 = v9;
    }
    operator delete(v7, v8);
    *((_QWORD *)this + 99) = 0LL;
    *((_QWORD *)this + 100) = 0LL;
    *((_QWORD *)this + 101) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 744));
  v11 = *((_QWORD *)this + 92);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::~CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>((char *)this + 664);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 624));
  v12 = (char *)*((_QWORD *)this + 76);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v12);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>((char *)this + 312);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CStreamClassPolicyGainsWrapper *>>((char *)this + 288);
  v13 = *((_QWORD *)this + 35);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 34);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (volatile signed __int32 *)*((_QWORD *)this + 32);
  if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1LL);
  }
  v16 = (void *)*((_QWORD *)this + 29);
  if ( v16 )
    CoTaskMemFree(v16);
  v17 = (void *)*((_QWORD *)this + 27);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = (void *)*((_QWORD *)this + 26);
  if ( v18 )
    CoTaskMemFree(v18);
  v19 = (void *)*((_QWORD *)this + 25);
  if ( v19 )
    CoTaskMemFree(v19);
  v20 = (char *)*((_QWORD *)this + 23);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v20);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v21 = (char *)*((_QWORD *)this + 15);
  if ( v21 )
  {
    v8 = (const struct std::nothrow_t *)((*((_QWORD *)this + 17) - (_QWORD)v21) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v8 < 0x1000 )
    {
LABEL_41:
      operator delete(v21, v8);
      *((_QWORD *)this + 15) = 0LL;
      *((_QWORD *)this + 16) = 0LL;
      *((_QWORD *)this + 17) = 0LL;
      goto LABEL_42;
    }
    v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
    v22 = (char *)*((_QWORD *)v21 - 1);
    v10 = (char *)(v21 - v22);
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v21 = v22;
      goto LABEL_41;
    }
LABEL_43:
    _o__invalid_parameter_noinfo_noreturn(v10, v8);
    JUMPOUT(0x1800152AFLL);
  }
LABEL_42:
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
