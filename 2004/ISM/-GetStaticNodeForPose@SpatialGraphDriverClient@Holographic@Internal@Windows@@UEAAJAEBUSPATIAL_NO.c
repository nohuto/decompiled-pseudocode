/*
 * XREFs of ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x18015E500
 * Callers:
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x18004CA80 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014ED34 (--$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AE.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B344 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodeForPose(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct DirectX::XMFLOAT4X3 *a3,
        struct SPATIAL_NODE_ID *bAlertable)
{
  __int128 v8; // xmm1
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 result; // rax
  unsigned int v13; // [rsp+40h] [rbp-88h] BYREF
  char *v14; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v15[4]; // [rsp+50h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v13 = 0;
  *(_OWORD *)bAlertable = 0LL;
  v8 = *(_OWORD *)a3;
  v9 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 11);
  v15[0] = *(_OWORD *)a2;
  v10 = *((_OWORD *)a3 + 1);
  v15[1] = v8;
  v11 = *((_OWORD *)a3 + 2);
  v15[2] = v10;
  v15[3] = v11;
  result = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
             v9,
             0x5B8420u,
             v15,
             0x40u,
             bAlertable,
             0x10u,
             &v13);
  if ( (int)result >= 0 )
  {
    if ( v13 == 16 )
    {
      v14 = (char *)this - 8;
      HolographicDriverClientContinuousTrace::GetStaticNodeForPose<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,DirectX::XMFLOAT4X3 const &,SPATIAL_NODE_ID &>(
        (const void **)&v14,
        (const struct _GUID *)((char *)this + 72),
        a2,
        a3,
        bAlertable);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4AC,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  return result;
}
