/*
 * XREFs of ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x18015D140
 * Callers:
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x18004CA00 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800A8AF8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@wil@@YA?AV?$unique_ptr@$$BY0A@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x1801560C0 (--$make_unique_cotaskmem_nothrow@$$BY0A@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@wil@@YA-AV-$unique_pt.c)
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D3A0 (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodeErrorStatuses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        struct HOLOGRAPHIC_DEVICE_ERROR_STATUS **a3,
        unsigned __int64 *a4)
{
  char v4; // si
  int NodePropertyOfVariableSize; // eax
  __int64 v6; // r8
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int *v11; // rdi
  struct HOLOGRAPHIC_DEVICE_ERROR_STATUS *v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v18; // [rsp+70h] [rbp+20h] BYREF
  struct HOLOGRAPHIC_DEVICE_ERROR_STATUS **v19; // [rsp+80h] [rbp+30h]
  unsigned __int64 *v20; // [rsp+88h] [rbp+38h]

  v20 = a4;
  v19 = a3;
  v14 = 0LL;
  v16 = 0LL;
  v4 = 1;
  v15 = 0LL;
  NodePropertyOfVariableSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfVariableSize(
                                 (char *)this - 8,
                                 a2,
                                 a3,
                                 &v14);
  v8 = NodePropertyOfVariableSize;
  if ( NodePropertyOfVariableSize < 0 )
  {
    v9 = (unsigned int)NodePropertyOfVariableSize;
    v10 = 1669LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v9);
    goto LABEL_11;
  }
  v11 = (unsigned int *)v15;
  if ( (_QWORD)v15 )
    v11 = (unsigned int *)(v14 + v15);
  wil::make_unique_cotaskmem_nothrow<HOLOGRAPHIC_DEVICE_ERROR_STATUS [0]>(&v18, *v11, v6, v7);
  v12 = (struct HOLOGRAPHIC_DEVICE_ERROR_STATUS *)v18;
  if ( !v18 )
  {
    v8 = -2147024882;
    v10 = 1675LL;
    v9 = 2147942414LL;
    goto LABEL_7;
  }
  if ( *v11 )
    memmove_0(v18, v11 + 1, 16LL * *v11);
  v4 = 0;
  *v19 = v12;
  v8 = 0;
  *v20 = *v11;
LABEL_11:
  std::vector<unsigned char>::_Tidy((__int64)&v15);
  if ( v4 )
  {
    *v19 = 0LL;
    *v20 = 0LL;
  }
  return v8;
}
