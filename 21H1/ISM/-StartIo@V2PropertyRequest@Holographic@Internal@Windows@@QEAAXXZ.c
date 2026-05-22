/*
 * XREFs of ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180164D18
 * Callers:
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x18015F63C (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162A58 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C94F0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801559AC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x18015BB24 (-DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPE.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x18015F63C (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::StartIo(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct _OVERLAPPED *v5; // rbp
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // edi
  const char *v10; // r9
  char *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 26) == -2147023899 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      105LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      a4);
    __debugbreak();
  }
  *((_DWORD *)this + 26) = -2147023899;
  v5 = (struct _OVERLAPPED *)((char *)this + 8);
  v6 = (char *)this + 80;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  v7 = *((_QWORD *)this + 11);
  v8 = *((_QWORD *)this + 10);
  if ( (unsigned __int64)(v7 - v8) < 0xC )
  {
    if ( (unsigned __int64)(*((_QWORD *)this + 12) - v8) >= 0xC )
    {
      v7 = v8 + 12;
      memset_0(*((void **)this + 11), 0, v8 + 12 - *((_QWORD *)this + 11));
      *((_QWORD *)v6 + 1) = v7;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)v6, 0xCuLL);
      v7 = *((_QWORD *)v6 + 1);
    }
  }
  v9 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
         *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 5),
         *((_DWORD *)this + 12),
         *((void **)this + 7),
         *((_DWORD *)this + 16),
         *(void **)v6,
         (int)v7 - *(_DWORD *)v6,
         v5);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7D,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
    (const char *)((v9 & 0x80000000) == 0),
    (void *)"IO on handle bound to completion port shouldn't succeed synchronously",
    v11);
  if ( v9 != -2147023899 )
    Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(this, v9, 0LL, v10);
}
