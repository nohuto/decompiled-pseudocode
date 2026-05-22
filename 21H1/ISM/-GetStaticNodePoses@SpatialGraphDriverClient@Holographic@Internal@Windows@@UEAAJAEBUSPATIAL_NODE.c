/*
 * XREFs of ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015EBB0
 * Callers:
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18004D080 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_N.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800A9058 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$IsValidFloat@M@Details@@YA_NM@Z @ 0x1800C4828 (--$IsValidFloat@M@Details@@YA_NM@Z.c)
 *     memcpy_s_1 @ 0x18011A558 (memcpy_s_1.c)
 *     ??$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18014F264 (--$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBU.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180159CF0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B804 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodePoses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        unsigned int a3,
        const struct SPATIAL_NODE_ID *a4,
        struct SPATIAL_GRAPH_STATIC_NODE_POSE *Destination)
{
  DWORD v6; // r13d
  __int64 v7; // r14
  const struct SPATIAL_NODE_ID *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  _DWORD *v11; // rsi
  __int64 v12; // rcx
  signed __int64 v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  void *bAlertable; // rax
  unsigned int *v19; // rdi
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rax
  int v23; // ebx
  float *v24; // r15
  unsigned int i; // esi
  unsigned int v27; // [rsp+48h] [rbp-41h] BYREF
  char *v28; // [rsp+50h] [rbp-39h] BYREF
  __int64 v29; // [rsp+58h] [rbp-31h] BYREF
  BOOL v30[4]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v31; // [rsp+70h] [rbp-19h]
  __int64 v32; // [rsp+78h] [rbp-11h] BYREF
  void *v33[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v34; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]
  unsigned int v38; // [rsp+F8h] [rbp+6Fh] BYREF
  const struct SPATIAL_NODE_ID *v39; // [rsp+100h] [rbp+77h] BYREF

  v39 = a4;
  v38 = a3;
  v32 = 0LL;
  v34 = 0LL;
  v6 = 16 * a3 + 20;
  v7 = a3;
  v8 = a4;
  *(_OWORD *)v33 = 0LL;
  v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v32,
         v6);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v33[0];
    if ( v33[0] )
      v11 = (char *)v33[0] + v32;
    memset_0(v11, 0, v6);
    v11[4] = v7;
    *(_OWORD *)v11 = *(_OWORD *)a2;
    if ( (_DWORD)v7 )
    {
      v12 = v7;
      v13 = (char *)v11 - (char *)v8;
      do
      {
        v14 = *(_OWORD *)v8;
        v8 = (const struct SPATIAL_NODE_ID *)((char *)v8 + 16);
        *(_OWORD *)((char *)v8 + v13 + 4) = v14;
        --v12;
      }
      while ( v12 );
    }
    v29 = 0LL;
    *(_OWORD *)v30 = 0LL;
    v31 = 0LL;
    v15 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
            (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)&v29,
            (unsigned int)(68 * v7 + 4));
    v10 = v15;
    if ( v15 >= 0 )
    {
      bAlertable = *(void **)v30;
      v27 = 0;
      v19 = *(unsigned int **)v30;
      v20 = v29;
      if ( *(_QWORD *)v30 )
        bAlertable = (void *)(v29 + *(_QWORD *)v30);
      v21 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
              *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 11),
              0x5B8424u,
              v11,
              v6,
              bAlertable,
              68 * (int)v7 + 4,
              &v27);
      v10 = v21;
      if ( v21 >= 0 )
      {
        if ( v27 == 68 * (_DWORD)v7 + 4 )
        {
          if ( v19 )
            v19 = (unsigned int *)((char *)v19 + v20);
          v22 = *v19;
          if ( (_DWORD)v22 == (_DWORD)v7 )
          {
            v23 = 0;
            if ( (_DWORD)v22 )
            {
              while ( 2 )
              {
                v24 = (float *)&v19[17 * v23 + 5];
                for ( i = 0; i < 0xC; ++i )
                {
                  if ( !Details::IsValidFloat<float>(*v24) )
                  {
                    v10 = -2147024883;
                    v17 = 1248LL;
                    goto LABEL_29;
                  }
                  ++v24;
                }
                v22 = *v19;
                if ( ++v23 < (unsigned int)v22 )
                  continue;
                break;
              }
            }
            memcpy_s_1(Destination, 68 * v7, v19 + 1, 68 * v22);
            v28 = (char *)this - 8;
            HolographicDriverClientContinuousTrace::GetStaticNodePoses<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,unsigned long &,SPATIAL_NODE_ID const * &,SPATIAL_GRAPH_STATIC_NODE_POSE * &>(
              (const void **)&v28,
              (const struct _GUID *)((char *)this + 72),
              a2,
              &v38,
              &v39);
            v10 = 0;
            goto LABEL_26;
          }
          v10 = -2147418113;
          v17 = 1244LL;
        }
        else
        {
          v10 = -2147418113;
          v17 = 1240LL;
        }
LABEL_29:
        v16 = v10;
      }
      else
      {
        v16 = (unsigned int)v21;
        v17 = 1238LL;
      }
    }
    else
    {
      v16 = (unsigned int)v15;
      v17 = 1228LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v16);
LABEL_26:
    std::vector<unsigned char>::_Tidy((__int64)v30);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BE,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(unsigned int)v9);
LABEL_27:
  std::vector<unsigned char>::_Tidy((__int64)v33);
  return v10;
}
