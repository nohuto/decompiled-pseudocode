/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00307D8
 * Callers:
 *     ndisWmiRegister @ 0x1C0029690 (ndisWmiRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ndisWmiMapOids @ 0x1C0030C78 (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C0030D38 (ndisQueryCustomGuids.c)
 *     ?ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3KPEAPEAXPEAI5@Z @ 0x1C00314E8 (-ndisQuerySetMiniportEx2@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_GUID *v2; // rsi
  __int64 v3; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rdx
  unsigned __int8 v5; // r9
  unsigned int v6; // eax
  PVOID v7; // r12
  unsigned int v8; // edi
  unsigned __int16 v9; // ax
  int v10; // r9d
  unsigned __int16 v11; // ax
  int v12; // r9d
  __int16 v13; // di
  unsigned __int16 v14; // di
  int *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  _NDIS_GUID *PoolWithTag; // rax
  void *v19; // r14
  _DWORD *v20; // rdx
  unsigned __int16 v21; // r10
  __int64 v22; // r8
  int v23; // ecx
  unsigned __int16 v24; // ax
  int v25; // r9d
  unsigned __int16 v26; // ax
  int v27; // r9d
  unsigned __int16 v28; // r9
  _GUID *v29; // rax
  _NDIS_GUID *v30; // rcx
  _GUID v31; // xmm1
  _NDIS_GUID *v32; // rdi
  __int64 v34; // rcx
  struct _GUID *v35; // [rsp+20h] [rbp-E0h]
  struct _NDIS_FILTER_BLOCK *v36; // [rsp+28h] [rbp-D8h]
  __int64 Tag; // [rsp+30h] [rbp-D0h]
  unsigned int v38; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v39; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h]
  struct _NDIS_OID_REQUEST v42; // [rsp+70h] [rbp-90h] BYREF

  v39 = 0;
  v38 = 0;
  P = 0LL;
  v2 = 0LL;
  Src = 0LL;
  memset(&v42.Header.Revision, 0, 0xF7uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v36 = (struct _NDIS_FILTER_BLOCK *)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x12u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids);
  }
  memset(&v42, 0, 0xF8uLL);
  *(_QWORD *)&v42.Header.Type = 15466902LL;
  *(_QWORD *)&v42.NdisReserved[32] = &ndisIntReqWmi;
  v42.DATA.QUERY_INFORMATION.Oid = 65793;
  v3 = 8LL;
  *(_DWORD *)&v42.NdisReserved[16] |= 8u;
  v42.PortNumber = 0;
  v42.DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v42.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  v6 = ndisQuerySetMiniportEx2(a1, v4, &v42, v5, (struct _NDIS_FILTER_BLOCK *)v35, v36, 0x3277444Eu, &P, &v38, &v39);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x12u,
        0x13u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
  }
  else
  {
    v38 = v39 >> 2;
    v9 = ndisWmiMapOids(0, 0, (_DWORD)P, (unsigned __int16)(v39 >> 2), (__int64)&ndisSupportedGuids, 82);
    v11 = ndisWmiMapOids(0, v9, (_DWORD)v7, v10, (__int64)&ndisCoSupportedGuids, 16);
    v13 = ndisWmiMapOids(0, v11, (_DWORD)v7, v12, (__int64)&ndisMediaSupportedGuids, 49);
    ndisQueryCustomGuids(a1, &v42);
    v14 = v13 + 38;
    v15 = (int *)&unk_1C0141038;
    v16 = 82LL;
    do
    {
      v17 = *v15;
      if ( (*v15 & 0x20000000) != 0
        && ((v17 & 0x1000000) == 0 || a1->NDKBlock)
        && ((v17 & 0x10000000) == 0 || (a1->Flags & 0x20000) != 0) )
      {
        ++v14;
      }
      v15 += 7;
      --v16;
    }
    while ( v16 );
    PoolWithTag = (_NDIS_GUID *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v14, 0x3177444Eu);
    v19 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v14);
      v20 = &ndisSupportedGuids;
      v21 = 0;
      v22 = 82LL;
      do
      {
        v23 = v20[6];
        if ( (v23 & 0x20000000) != 0
          && ((v23 & 0x1000000) == 0 || a1->NDKBlock)
          && ((a1->Flags & 0x20000) != 0 || (v23 & 0x10000000) == 0) )
        {
          v34 = v21;
          v2[v34].Guid = *(_GUID *)v20;
          *(_QWORD *)&v2[v34].Oid = *((_QWORD *)v20 + 2);
          v2[v34].Flags = v20[6];
          if ( (a1->Flags & 0x20000) != 0 )
            v2[v34].Flags |= 0x10000000u;
          ++v21;
        }
        v20 += 7;
        --v22;
      }
      while ( v22 );
      v24 = ndisWmiMapOids((_DWORD)v2, v21, (_DWORD)v7, (unsigned __int16)v38, (__int64)&ndisSupportedGuids, 82);
      v26 = ndisWmiMapOids((_DWORD)v2, v24, (_DWORD)v7, v25, (__int64)&ndisCoSupportedGuids, 16);
      v28 = ndisWmiMapOids((_DWORD)v2, v26, (_DWORD)v7, v27, (__int64)&ndisMediaSupportedGuids, 49);
      v29 = (_GUID *)&ndisStatusSupportedGuids;
      v30 = &v2[v28];
      do
      {
        v30->Guid = *v29;
        *(_GUID *)&v30->Oid = v29[1];
        *(_GUID *)&v30[1].Guid.Data2 = v29[2];
        *(_GUID *)&v30[1].Size = v29[3];
        *(_GUID *)v30[2].Guid.Data4 = v29[4];
        *(_GUID *)&v30[2].Flags = v29[5];
        *(_GUID *)&v30[3].Guid.Data4[4] = v29[6];
        v30 = (_NDIS_GUID *)((char *)v30 + 128);
        v31 = v29[7];
        v29 += 8;
        *(_GUID *)&v30[-1].Guid.Data4[4] = v31;
        --v3;
      }
      while ( v3 );
      v30->Guid = *v29;
      *(_GUID *)&v30->Oid = v29[1];
      *(_QWORD *)&v30[1].Guid.Data2 = *(_QWORD *)&v29[2].Data1;
      a1->pNdisGuidMap = v2;
      a1->cNdisGuidMap = v14;
      if ( v19 )
      {
        v32 = &v2[(unsigned __int16)(v28 + 38)];
        memmove(v32, v19, 0LL);
        a1->cCustomGuidMap = 0;
      }
      else
      {
        a1->cCustomGuidMap = 0;
        v32 = 0LL;
      }
      a1->pCustomGuidMap = v32;
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(Tag) = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x14u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      Tag);
  }
  return v8;
}
