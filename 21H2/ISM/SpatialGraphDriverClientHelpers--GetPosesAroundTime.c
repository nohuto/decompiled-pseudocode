/*
 * XREFs of SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x18015E5E4
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015DA10 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014F9E4 (--$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSP.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B7A4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall SpatialGraphDriverClientHelpers::GetPosesAroundTime(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        struct SPATIAL_NODE_ID *a2,
        __int64 a3,
        void *a4,
        DWORD *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  DWORD v10; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+48h] [rbp-40h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v10 = 0;
  *a5 = 0;
  v12 = *(_OWORD *)a2;
  v13 = a3;
  v6 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         a1,
         0x5B4410u,
         &v12,
         0x18u,
         a4,
         0x140u,
         &v10);
  v11 = v6;
  v7 = v6;
  if ( v6 == -2147024637 || v6 == -2147024891 )
  {
    HolographicDriverClientContinuousTrace::NoPoseReceivedYet<SPATIAL_NODE_ID const &,long const &>(a2, &v11);
  }
  else
  {
    if ( v6 >= 0 )
    {
      if ( v10 )
      {
        if ( !(v10 % 0xA0uLL) )
        {
          *a5 = v10 / 0xA0;
          return 0LL;
        }
        v7 = -2147418113;
        v8 = 196LL;
      }
      else
      {
        v7 = -2147418113;
        v8 = 195LL;
      }
    }
    else
    {
      v8 = 192LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v7);
  }
  return v7;
}
