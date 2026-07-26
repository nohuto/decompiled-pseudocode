/*
 * XREFs of ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0001008
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010BF0 (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x1C0062330 (NdisWdfQueryAllData.c)
 * Callees:
 *     ndisWmiGuidIsAdapterSpecific @ 0x1C0001960 (ndisWmiGuidIsAdapterSpecific.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008A70 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ndisQueryGuidData @ 0x1C00124B0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00127B0 (ndisQueryGuidDataSize.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B8000 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B82AC (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        struct tagWNODE_ALL_DATA *a4,
        ULONG a5,
        unsigned int *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v7; // r13
  struct _NDIS_GUID *v9; // rsi
  unsigned int *v11; // r12
  ULONG v12; // r15d
  int v13; // edx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int v15; // edx
  int GuidData; // esi
  __int64 v17; // r14
  ULONG v18; // ecx
  LARGE_INTEGER v19; // rax
  ULONG v20; // edx
  struct _GUID *v21; // rax
  int v22; // edx
  int v24; // edx
  struct _NDIS_GUID *v25; // r8
  ULONG v26; // ecx
  unsigned int v27; // r12d
  int v28; // r14d
  unsigned int v29; // edx
  ULONG v30; // r14d
  unsigned __int16 *v31; // r10
  ULONG v32; // r12d
  int v33; // r9d
  ULONG v34; // r8d
  ULONG v35; // ecx
  unsigned int *v36; // rax
  _LIST_ENTRY *Flink; // rax
  struct _NDIS_CO_VC_PTR_BLOCK *v38; // r15
  unsigned int v39; // esi
  unsigned int v40; // eax
  unsigned int *v41; // rcx
  unsigned __int16 *v42; // r10
  ULONG v43; // r12d
  int v44; // edx
  __int64 v45; // rcx
  bool v46; // zf
  unsigned int *v47; // rax
  char v48; // [rsp+40h] [rbp-40h]
  unsigned int v49; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned int v50; // [rsp+48h] [rbp-38h]
  _LIST_ENTRY **p_Flink; // [rsp+50h] [rbp-30h]
  int v52; // [rsp+58h] [rbp-28h]
  unsigned __int16 *v53; // [rsp+60h] [rbp-20h]
  struct _NDIS_MINIPORT_BLOCK *v54; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v55; // [rsp+70h] [rbp-10h]
  unsigned int *v56; // [rsp+78h] [rbp-8h]
  struct _NDIS_GUID *v57; // [rsp+C8h] [rbp+48h] BYREF
  struct _GUID *v58; // [rsp+D0h] [rbp+50h]

  v58 = a3;
  v57 = a2;
  v49 = 0;
  v7 = 0LL;
  v54 = 0LL;
  v9 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      34,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = a6;
  v12 = 56;
  *a6 = 0;
  if ( a5 < 0x38 )
  {
    *v11 = 4;
    GuidData = -1073741789;
    goto LABEL_20;
  }
  if ( v9 )
  {
LABEL_7:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v54, 0, MPREF_WMI_QUERYALL);
      v7 = v54;
    }
    if ( (unsigned __int8)ndisWmiGuidIsAdapterSpecific(a3) || (a1->Flags & 0x20000) == 0 )
    {
      GuidData = ndisQueryGuidDataSize(&v49, a1, v9, 0LL, a3, v7);
      if ( GuidData < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v33 = 36;
        goto LABEL_65;
      }
      v17 = (v49 + 3) & 0xFFFFFFFC;
      v15 = a1->pAdapterInstanceName->Length + 2;
      v18 = v15 + v17 + 76;
      if ( v18 < 0x48 || v18 < (unsigned int)v17 || v18 < v15 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v33 = 37;
LABEL_65:
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          18,
          v33,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          (char)a1);
LABEL_18:
        if ( v7 )
          ndisDereferenceMiniport(v7, MPREF_WMI_QUERYALL);
        goto LABEL_20;
      }
      if ( a5 < v18 )
      {
        a4->WnodeHeader.Flags |= 0x20u;
        a4->WnodeHeader.BufferSize = 56;
        a4->DataBlockOffset = v18;
        *v11 = 56;
      }
      else
      {
        v19.QuadPart = MEMORY[0xFFFFF78000000014];
        v20 = v49;
        v7 = v54;
        a4->WnodeHeader.Flags |= 0x10u;
        a4->WnodeHeader.TimeStamp = v19;
        a4->OffsetInstanceNameOffsets = v17 + 72;
        v21 = v58;
        a4->WnodeHeader.BufferSize = v18;
        a4->InstanceCount = 1;
        a4->DataBlockOffset = 72;
        a4->FixedInstanceSize = v20;
        GuidData = ndisQueryGuidData(
                     (struct _NDIS_WMI_NDK_CAPABILITIES *)&a4[1].WnodeHeader.HistoricalContext,
                     v20,
                     a1,
                     0LL,
                     v21,
                     (char)v7);
        if ( GuidData < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_18;
          v33 = 38;
          goto LABEL_65;
        }
        *(ULONG *)((char *)&a4->WnodeHeader.BufferSize + a4->OffsetInstanceNameOffsets) = v17 + 76;
        *(_WORD *)((char *)&a4[1].WnodeHeader.Linkage + v17) = a1->pAdapterInstanceName->Length;
        memmove(
          (char *)&a4[1].WnodeHeader.Linkage + (unsigned int)v17 + 2,
          a1->pAdapterInstanceName->Buffer,
          a1->pAdapterInstanceName->Length);
        *v11 = a4->WnodeHeader.BufferSize;
      }
    }
    else
    {
      v48 = 0;
      v24 = a1->VcCount + 1;
      v7 = v54;
      v25 = v57;
      v26 = 8 * v24 + 72;
      a4->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
      v52 = v24;
      v56 = (ULONG *)((char *)&a4->WnodeHeader.BufferSize + v26);
      a4->OffsetInstanceNameOffsets = v26;
      v27 = (v26 + 4 * v24 + 7) & 0xFFFFFFF8;
      v53 = (unsigned __int16 *)((char *)a4 + v27);
      GuidData = ndisQueryGuidDataSize(&v49, a1, v25, 0LL, a3, v7);
      if ( GuidData < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_18;
        v33 = 40;
        goto LABEL_65;
      }
      v28 = a1->pAdapterInstanceName->Length + 9;
      v50 = (v49 + 7) & 0xFFFFFFF8;
      v29 = a5;
      v30 = v27 + v50 + (v28 & 0xFFFFFFF8);
      if ( a5 >= v30 )
      {
        v31 = v53;
        *v56 = v27;
        *v31 = a1->pAdapterInstanceName->Length;
        memmove(v31 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
        v32 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v27;
        GuidData = ndisQueryGuidData(
                     (struct _NDIS_WMI_NDK_CAPABILITIES *)((char *)a4 + v32),
                     v49,
                     a1,
                     0LL,
                     v58,
                     (char)v7);
        if ( GuidData < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_18;
          v33 = 39;
          goto LABEL_65;
        }
        v29 = a5;
        a4[1].WnodeHeader.BufferSize = v49;
        a4->FixedInstanceSize = v32;
        v27 = v50 + v32;
        v53 = (unsigned __int16 *)((char *)a4 + v27);
      }
      v34 = v52;
      v50 = 1;
      v35 = 1;
      if ( v52 != 1 )
      {
        Flink = a1->WmiEnabledVcs.Flink;
        p_Flink = &Flink->Flink;
        if ( Flink == &a1->WmiEnabledVcs )
          goto LABEL_56;
        while ( v35 < v34 )
        {
          v38 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
          if ( ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
          {
            if ( v38->VcInstanceName.Buffer )
            {
              GuidData = ndisQueryGuidDataSize(&v49, a1, 0LL, v38, v58, v7);
              if ( GuidData >= 0 )
              {
                v39 = v49;
                v40 = ((v49 + 7) & 0xFFFFFFF8) + ((v38->VcInstanceName.Length + 9) & 0xFFFFFFF8);
                v55 = (v49 + 7) & 0xFFFFFFF8;
                v30 += v40;
                if ( a5 >= v30 )
                {
                  v42 = v53;
                  v56[v50] = v27;
                  *v42 = v38->VcInstanceName.Length;
                  memmove(v42 + 1, v38->VcInstanceName.Buffer, v38->VcInstanceName.Length);
                  v43 = ((v38->VcInstanceName.Length + 9) & 0xFFFFFFF8) + v27;
                  GuidData = ndisQueryGuidData(
                               (struct _NDIS_WMI_NDK_CAPABILITIES *)((char *)a4 + v43),
                               v39,
                               a1,
                               (__int64)v38,
                               v58,
                               (char)v7);
                  if ( GuidData < 0 )
                  {
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v44) = 2;
                      WPP_RECORDER_SF_qq(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        v44,
                        18,
                        41,
                        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
                        (char)a1,
                        (char)v38);
                    }
                    ndisDereferenceVcPtr(v38);
                    v35 = v50;
                    break;
                  }
                  v45 = v50;
                  *(&a4[1].WnodeHeader.BufferSize + 2 * v50) = v49;
                  *(&a4->FixedInstanceSize + 2 * v45) = v43;
                  v27 = v55 + v43;
                  ++v50;
                  v53 = (unsigned __int16 *)((char *)a4 + v27);
                }
                else
                {
                  a4->WnodeHeader.Flags |= 0x20u;
                  v41 = a6;
                  GuidData = 0;
                  a4->WnodeHeader.BufferSize = 56;
                  a4->DataBlockOffset = v30;
                  v48 = 1;
                  *v41 = 56;
                }
              }
            }
            ndisDereferenceVcPtr(v38);
          }
          Flink = *p_Flink;
          v46 = *p_Flink == &a1->WmiEnabledVcs;
          p_Flink = (_LIST_ENTRY **)*p_Flink;
          v35 = v50;
          if ( v46 )
            break;
          v34 = v52;
        }
        if ( !v48 )
        {
LABEL_56:
          v47 = a6;
          GuidData = 0;
          a4->WnodeHeader.BufferSize = v30;
          a4->InstanceCount = v35;
          *v47 = v30;
        }
        goto LABEL_18;
      }
      if ( v29 < v30 )
      {
        a4->WnodeHeader.Flags |= 0x20u;
        a4->DataBlockOffset = v30;
        v30 = 56;
      }
      else
      {
        a4->InstanceCount = 1;
        v12 = v30;
      }
      v36 = a6;
      a4->WnodeHeader.BufferSize = v12;
      *v36 = v30;
    }
    GuidData = 0;
    goto LABEL_18;
  }
  if ( (int)ndisWmiGetGuid(&v57, a1, &a4->WnodeHeader.Guid, 0) >= 0 )
  {
    v9 = v57;
    goto LABEL_7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      18,
      35,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1);
  }
  GuidData = -1073741811;
LABEL_20:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      18,
      42,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      GuidData);
  }
  return (unsigned int)GuidData;
}
