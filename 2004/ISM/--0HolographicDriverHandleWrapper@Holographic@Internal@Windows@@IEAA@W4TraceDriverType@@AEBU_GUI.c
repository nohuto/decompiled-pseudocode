/*
 * XREFs of ??0HolographicDriverHandleWrapper@Holographic@Internal@Windows@@IEAA@W4TraceDriverType@@AEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x18015668C
 * Callers:
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x180156AF4 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009F294 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char *a4,
        int a5,
        char a6,
        __int64 a7)
{
  __int128 v8; // xmm0
  __int64 v9; // rax
  char v10; // cl
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = (HSTRING)a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vftable';
  v8 = *a3;
  *(_DWORD *)(a1 + 40) = a5;
  v9 = a7;
  *(_OWORD *)(a1 + 12) = v8;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 128) = -2147024890;
  *(_QWORD *)(a1 + 136) = -1LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  v10 = a6;
  *(_BYTE *)(a1 + 169) = a6;
  if ( v9 && !v10 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      433LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      a4);
    __debugbreak();
  }
  v11 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 32), &v14);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      435LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return a1;
}
