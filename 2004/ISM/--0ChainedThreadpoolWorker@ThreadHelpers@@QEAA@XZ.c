/*
 * XREFs of ??0ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180156590
 * Callers:
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180156AF4 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
ThreadHelpers::ChainedThreadpoolWorker *__fastcall ThreadHelpers::ChainedThreadpoolWorker::ChainedThreadpoolWorker(
        ThreadHelpers::ChainedThreadpoolWorker *this)
{
  _DWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  v2 = operator new(0x18uLL);
  v2[2] = 1;
  v2[3] = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<std::atomic<unsigned long>>::`vftable';
  v2[4] = 0;
  *(_QWORD *)this = v2 + 4;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v3[1] = 0LL;
  *((_QWORD *)this + 3) = v3;
  *v3 = (char *)this + 24;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v4[1] = 0LL;
  *((_QWORD *)this + 8) = v4;
  *v4 = (char *)this + 64;
  *((_QWORD *)this + 13) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolWorkTraits>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_WORD *)this + 60) = 0;
  *((_BYTE *)this + 122) = 0;
  return this;
}
