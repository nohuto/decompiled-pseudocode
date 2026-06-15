/*
 * XREFs of ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800F29E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x18000C5C0 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C27D0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ??$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F2210 (--$CompareTo@VExclusiveEndpointInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18013A3D4 (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusive.c)
 */

__int64 __fastcall CConstraintModelResourceManager::CheckEndpointsAreExclusive(
        CConstraintModelResourceManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v4; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  int EndpointInformationFromId; // esi
  CConstraintModel *v15; // rcx
  int v16; // r9d
  CConstraintModel *v17; // rcx
  int v18; // r9d
  unsigned __int64 v19; // r9
  __int64 v20; // r14
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // r12d
  unsigned __int64 v24; // rbx
  bool v25; // al
  __int64 v26; // r8
  int v27; // ecx
  bool v28; // al
  unsigned int v30; // [rsp+28h] [rbp-D8h]
  unsigned int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+48h] [rbp-B8h]
  _QWORD *v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  _QWORD *v38; // [rsp+70h] [rbp-90h]
  unsigned __int16 v39[201]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v40[261]; // [rsp+212h] [rbp+112h] BYREF
  unsigned int v41[2]; // [rsp+41Ch] [rbp+31Ch] BYREF
  int v42; // [rsp+424h] [rbp+324h]
  unsigned __int16 v43[201]; // [rsp+430h] [rbp+330h] BYREF
  unsigned __int16 v44[261]; // [rsp+5C2h] [rbp+4C2h] BYREF
  unsigned int v45[2]; // [rsp+7CCh] [rbp+6CCh] BYREF
  int v46; // [rsp+7D4h] [rbp+6D4h]

  v4 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  if ( a2 && a3 && a4 )
  {
    v8 = *((_QWORD *)this + 2);
    if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>> *>>::SetCount(
                             &v34,
                             *(_QWORD *)(v8 + 208)) )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_QWORD *)(v8 + 208);
    v10 = *(_QWORD *)(v8 + 200);
    v11 = v34;
    if ( v9 )
    {
      v12 = v34;
      v13 = v10 - (_QWORD)v34;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + v13);
        ++v12;
        --v9;
      }
      while ( v9 );
    }
    EndpointInformationFromId = 0;
    if ( v35 )
    {
      v42 = -1;
      *(_QWORD *)v41 = 0LL;
      memset_0(v39, 0, 0x39CuLL);
      v46 = -1;
      *(_QWORD *)v45 = 0LL;
      memset_0(v43, 0, 0x39CuLL);
      EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v15, a2, v39, v16, v40, v30, v41);
      if ( EndpointInformationFromId >= 0 )
      {
        EndpointInformationFromId = CConstraintModel::GetEndpointInformationFromId(v17, a3, v43, v18, v44, v31, v45);
        if ( EndpointInformationFromId >= 0 )
        {
          v20 = 0LL;
          if ( !v35 )
            goto LABEL_23;
          while ( 1 )
          {
            v21 = (_QWORD *)v11[v20];
            v22 = 0LL;
            v38 = v21;
            v23 = 0;
            v32 = 0;
            v33 = 0LL;
            if ( v21[1] )
            {
              do
              {
                v24 = *(_QWORD *)(*v21 + 8 * v22);
                v25 = ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>((__int64)v39, v24, 1LL, v19);
                v27 = v32;
                if ( v25 )
                  v27 = 1;
                v32 = v27;
                v28 = ExclusiveEndpointInfo::CompareTo<ExclusiveEndpointInfo>((__int64)v43, v24, v26, 1uLL);
                v21 = v38;
                if ( v28 )
                  v23 = 1;
                v22 = v33 + 1;
                v33 = v22;
              }
              while ( v22 < v38[1] );
              if ( v32 )
              {
                if ( v23 )
                  v4 = 1;
                goto LABEL_23;
              }
              if ( v23 )
                goto LABEL_23;
              v11 = v34;
            }
            if ( ++v20 >= v35 )
              goto LABEL_23;
          }
        }
      }
      if ( EndpointInformationFromId == -2147467262 )
      {
        *a4 = 0;
        EndpointInformationFromId = 0;
      }
    }
    else
    {
LABEL_23:
      *a4 = v4;
    }
  }
  else
  {
    EndpointInformationFromId = -2147024809;
  }
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&v34);
  return (unsigned int)EndpointInformationFromId;
}
