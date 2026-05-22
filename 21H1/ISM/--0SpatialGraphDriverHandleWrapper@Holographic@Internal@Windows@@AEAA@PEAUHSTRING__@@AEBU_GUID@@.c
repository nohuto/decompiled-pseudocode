/*
 * XREFs of ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180156FB4
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x18015A578 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180156A50 (--0ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 *     ??0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAA@W4TraceDriverType@@AEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180156B4C (--0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAA@W4TraceDriverType@@AEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper(
        __int64 a1,
        char *a2,
        __int128 *a3,
        int a4,
        char a5,
        __int64 a6)
{
  _QWORD *v7; // rax

  Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper(
    a1,
    (__int64)a2,
    a3,
    a2,
    a4,
    a5,
    a6);
  *(_QWORD *)a1 = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 176), 0, 0);
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 216) = v7;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  ThreadHelpers::ChainedThreadpoolWorker::ChainedThreadpoolWorker((ThreadHelpers::ChainedThreadpoolWorker *)(a1 + 264));
  return a1;
}
