/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B344
 * Callers:
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E7A0 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E8C4 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014E9D4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EB90 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18015AD70 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18015C240 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x18015CF4C (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x18015E184 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x18015E500 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015E6F0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x18015EA04 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180163A88 (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x180163B30 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x180166330 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021D54 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800321BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A488 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A7E8C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014EE18 (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 *     ??$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJAEAMAEBK@Z @ 0x18014EE80 (--$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJA.c)
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x18015F3FC (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *a3,
        DWORD a4,
        LPVOID bAlertable,
        DWORD a6,
        LPDWORD a7)
{
  DWORD *lpBytesReturned; // rsi
  int v11; // ebx
  RTL_SRWLOCK *v12; // r15
  struct _OVERLAPPED *lpOverlapped; // r14
  void *v14; // rdx
  wil::details *Event; // rbx
  __int64 v16; // r8
  const char *v17; // r9
  void *v18; // rdx
  void *v19; // rdx
  unsigned int v20; // r9d
  DWORD v21; // xmm2_4
  const struct _GUID *v22; // rsi
  const char *nOutBufferSize; // [rsp+28h] [rbp-58h]
  DWORD nOutBufferSizea; // [rsp+28h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-40h] BYREF
  wil::details *v27; // [rsp+48h] [rbp-38h] BYREF
  wil::details *v28; // [rsp+50h] [rbp-30h] BYREF
  __int128 v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h]
  wil::details *v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  LARGE_INTEGER NumberOfBytesTransferred; // [rsp+C0h] [rbp+40h] BYREF
  DWORD v34; // [rsp+C8h] [rbp+48h] BYREF
  DWORD nInBufferSize; // [rsp+D8h] [rbp+58h]

  nInBufferSize = a4;
  v34 = a2;
  lpBytesReturned = a7;
  if ( a7 )
    *a7 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    v11 = -2147483634;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      182LL,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)0x8000000ELL,
      (int)"this driver handle wrapper is associated with a completion port, so DeviceIoControlOverlapped must be used",
      nOutBufferSize);
  }
  else
  {
    v12 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockShared((PSRWLOCK)this + 15);
    v11 = *((_DWORD *)this + 32);
    if ( v11 >= 0 )
    {
      if ( *((_BYTE *)this + 168) && (!*((_DWORD *)this + 40) || !*((_DWORD *)this + 41)) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          190LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      v28 = 0LL;
      lpOverlapped = 0LL;
      if ( *((_BYTE *)this + 169) )
      {
        v27 = 0LL;
        Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::FailFast_GetLastError(retaddr, v14, v16, v17);
          __debugbreak();
        }
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          &v27,
          Event);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          &v28,
          v27);
        v27 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
          &v27,
          v18);
        lpOverlapped = (struct _OVERLAPPED *)&v29;
        v30 = 0LL;
        v31 = v28;
        v29 = 0LL;
      }
      QueryPerformanceCounter(&PerformanceCount);
      if ( DeviceIoControl(*((HANDLE *)this + 17), a2, a3, nInBufferSize, bAlertable, a6, lpBytesReturned, lpOverlapped) )
        goto LABEL_32;
      LODWORD(a7) = GetLastError();
      v11 = (int)a7;
      if ( (_DWORD)a7 == 997 && lpOverlapped )
      {
        if ( GetOverlappedResultEx(*((HANDLE *)this + 17), lpOverlapped, (LPDWORD)&NumberOfBytesTransferred, 0x1388u, 0) )
        {
          v11 = 0;
          LODWORD(a7) = 0;
        }
        else
        {
          LODWORD(a7) = GetLastError();
          v11 = (int)a7;
          if ( (_DWORD)a7 == 258 )
          {
            v11 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
                    this,
                    lpOverlapped,
                    a2,
                    v20,
                    a3,
                    nOutBufferSizea,
                    (unsigned int *)&NumberOfBytesTransferred);
            LODWORD(a7) = v11;
          }
        }
        if ( lpBytesReturned )
          *lpBytesReturned = NumberOfBytesTransferred.LowPart;
      }
      QueryPerformanceCounter(&NumberOfBytesTransferred);
      *(float *)&v21 = (double)(1000 * (NumberOfBytesTransferred.LowPart - PerformanceCount.LowPart))
                     / (double)(int)qword_180208328;
      PerformanceCount.LowPart = v21;
      if ( *(float *)&v21 <= 500.0 )
      {
        v22 = (const struct _GUID *)((char *)this + 12);
      }
      else
      {
        NumberOfBytesTransferred.LowPart = v11 > 0 ? (unsigned __int16)v11 | 0x80070000 : v11;
        v22 = (const struct _GUID *)((char *)this + 12);
        HolographicDriverClientTrace::IoctlRanLong<_GUID const &,unsigned long &,long,float &,unsigned long const &>(
          (struct _GUID *)((char *)this + 12),
          &v34,
          (int *)&NumberOfBytesTransferred,
          (float *)&PerformanceCount);
      }
      if ( !v11 )
      {
LABEL_32:
        v11 = 0;
      }
      else
      {
        NumberOfBytesTransferred.QuadPart = (LONGLONG)this;
        HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed<unsigned long &,unsigned long &,Windows::Internal::Holographic::HolographicDriverHandleWrapper *,_GUID const &>(
          (unsigned int *)&a7,
          &v34,
          (const void **)&NumberOfBytesTransferred,
          v22);
        if ( v11 > 0 )
          v11 = (unsigned __int16)v11 | 0x80070000;
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v28,
        v19);
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
  }
  return (unsigned int)v11;
}
