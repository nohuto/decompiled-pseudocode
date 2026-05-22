/*
 * XREFs of ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014ED84
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C25C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800A6218 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800A9058 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     memcpy_s_1 @ 0x18011A558 (memcpy_s_1.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B804 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        void *Destination,
        rsize_t DestinationSize)
{
  rsize_t v6; // rsi
  rsize_t v9; // r14
  _DWORD *v10; // rbp
  int v11; // ebx
  __int64 v12; // rdx
  const char *v13; // r9
  BOOL bAlertable[2]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = a2;
  v6 = DestinationSize;
  v9 = DestinationSize + 12;
  std::vector<unsigned char>::vector<unsigned char>(bAlertable, DestinationSize + 12);
  v10 = *(_DWORD **)bAlertable;
  v18 = 0;
  v11 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
          a1,
          0x5B8430u,
          a3,
          0x18u,
          bAlertable[0],
          v16 - bAlertable[0],
          &v18);
  if ( v11 >= 0 )
  {
    if ( v18 != v9 )
    {
      v12 = 343LL;
LABEL_6:
      v11 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        (const char *)0x8000FFFFLL);
      goto LABEL_10;
    }
    if ( *v10 != v6 )
    {
      v12 = 346LL;
      goto LABEL_6;
    }
    if ( memcpy_s_1(Destination, v6, v10 + 3, v6) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        348LL,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        v13);
      __debugbreak();
    }
    v11 = 0;
  }
LABEL_10:
  std::vector<unsigned char>::_Tidy((__int64)bAlertable);
  return (unsigned int)v11;
}
