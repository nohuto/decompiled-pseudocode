/*
 * XREFs of NdisEnumerateFilterModules @ 0x1C006A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB8EC (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDC00 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FDE60 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  ULONG v5; // r14d
  NDIS_HANDLE v7; // r13
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  char *v9; // r15
  NDIS_STATUS v10; // r12d
  char *v11; // rdi
  __int64 v12; // rcx
  bool v13; // cf
  __int64 v14; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  struct _NDIS_MINIPORT_BLOCK *v16; // rbx
  int v17; // r12d
  _NDIS_BIND_PATHS *v18; // rax
  int v19; // r14d
  _NDIS_FILTER_BLOCK *HighestFilter; // r14
  KSPIN_LOCK *p_Lock; // rax
  KIRQL v22; // dl
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  Rtl::KString v24; // xmm0
  Rtl::KString *value; // rax
  unsigned int v26; // eax
  int v27; // eax
  Rtl::KString *v28; // rax
  Rtl::KString *v29; // rdx
  KIRQL v30; // dl
  unsigned int v31; // r14d
  _NET_LUID_LH v32; // rax
  char *v33; // r15
  __int64 Length; // rcx
  _NDIS_FILTER_BLOCK *v35; // r14
  int v36; // r12d
  char *v37; // r13
  unsigned int v38; // edi
  KSPIN_LOCK *v39; // rax
  KIRQL v40; // dl
  _NDIS_FILTER_DRIVER_BLOCK *v41; // rax
  __m128i v42; // xmm0
  __m128i *v43; // rax
  unsigned int v44; // eax
  Rtl::KString *v45; // rax
  const void **v46; // rdx
  KIRQL v47; // dl
  char v49; // [rsp+48h] [rbp-41h]
  ULONG v50; // [rsp+4Ch] [rbp-3Dh]
  unsigned int v51; // [rsp+50h] [rbp-39h]
  unsigned int v52; // [rsp+54h] [rbp-35h]
  unsigned int v53; // [rsp+54h] [rbp-35h]
  struct _NDIS_MINIPORT_BLOCK *v54; // [rsp+60h] [rbp-29h] BYREF
  int v55; // [rsp+68h] [rbp-21h]
  Ndis::BindEngine *p_BindPaths; // [rsp+70h] [rbp-19h]
  struct _NDIS_MINIPORT_BLOCK *v57[2]; // [rsp+78h] [rbp-11h]
  Rtl::KString v58; // [rsp+88h] [rbp-1h]
  char v59; // [rsp+E8h] [rbp+5Fh]
  KIRQL NewIrql; // [rsp+F0h] [rbp+67h] BYREF
  ULONG v61; // [rsp+F8h] [rbp+6Fh]
  PULONG v62; // [rsp+100h] [rbp+77h]

  v62 = BytesNeeded;
  v61 = InterfaceBufferLength;
  v59 = (char)NdisHandle;
  v5 = InterfaceBufferLength;
  v54 = 0LL;
  v7 = NdisHandle;
  v8 = 0LL;
  v50 = InterfaceBufferLength;
  v9 = (char *)InterfaceBuffer + InterfaceBufferLength;
  v52 = 0;
  v10 = 0;
  NewIrql = 0;
  v11 = 0LL;
  v49 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x27u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      NdisHandle);
  if ( *(_BYTE *)v7 == 5 )
  {
    v14 = *((_QWORD *)v7 + 2);
    v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 4);
    if ( *(_BYTE *)(v14 + 100) > 6u )
      goto LABEL_16;
    if ( *(_BYTE *)(v14 + 100) != 6 )
      goto LABEL_17;
    v13 = *(_BYTE *)(v14 + 101) < 0x1Eu;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v7 == 17 )
  {
    v8 = (struct _NDIS_MINIPORT_BLOCK *)v7;
    if ( *((_BYTE *)v7 + 32) > 6u )
      goto LABEL_16;
    if ( *((_BYTE *)v7 + 32) != 6 )
      goto LABEL_17;
    v13 = *((_BYTE *)v7 + 33) < 0x1Eu;
LABEL_15:
    if ( v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( *(_BYTE *)v7 != 18 )
    goto LABEL_17;
  v12 = *((_QWORD *)v7 + 3);
  v8 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v7 + 2);
  if ( *(_BYTE *)(v12 + 56) <= 6u )
  {
    if ( *(_BYTE *)(v12 + 56) != 6 )
      goto LABEL_17;
    v13 = *(_BYTE *)(v12 + 57) < 0x1Eu;
    goto LABEL_15;
  }
LABEL_16:
  v49 = 2;
LABEL_17:
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v51 = 80;
  if ( !v8 )
  {
    v10 = -1073741811;
    goto LABEL_61;
  }
  if ( v5 >= 0x50 )
  {
    *(_QWORD *)InterfaceBuffer = 5243264LL;
    v50 = v5 - 80;
    v11 = (char *)InterfaceBuffer + 16;
    *((_DWORD *)InterfaceBuffer + 3) = 16;
    *((_DWORD *)InterfaceBuffer + 2) = 0;
  }
  BindPaths = v8->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v54, 0, MPREF_LWF_ENUMAPI);
    v16 = v54;
    if ( !v54 )
    {
      v10 = -1073676282;
      goto LABEL_61;
    }
    LODWORD(v7) = v50;
    v17 = 80;
    p_BindPaths = (Ndis::BindEngine *)&v54->BindPaths;
    v18 = v54->BindPaths;
    v57[0] = v54;
    v19 = v18->Number - 1;
    do
    {
      v55 = v16->BindPaths != 0LL ? v19 : 0;
      Ndis::BindEngine::BeginPolicyUpdates(&v16->BindEngine);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v16, &NewIrql);
      HighestFilter = v16->HighestFilter;
      if ( HighestFilter )
      {
        p_Lock = &v16->Lock;
        do
        {
          v22 = NewIrql;
          v16->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v22);
          FilterDriver = HighestFilter->FilterDriver;
          v24 = 0LL;
          v58 = 0LL;
          value = FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( value )
          {
            v24 = *value;
            v58 = *value;
          }
          v26 = v24.MaximumLength + HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength + 64;
          v17 += v26;
          v53 = v26;
          if ( (unsigned int)v7 >= v26 )
          {
            v11[1] = v49;
            *((_WORD *)v11 + 1) = 80;
            *v11 = 0x80;
            *((_DWORD *)v11 + 3) = (HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
            *((_DWORD *)v11 + 2) = 2 - ((HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
            *((_DWORD *)v11 + 4) = HighestFilter->IfIndex;
            *((_QWORD *)v11 + 3) = HighestFilter->IfBlock->NetLuid.Value;
            *((_DWORD *)v11 + 1) = 2;
            *((Rtl::KString *)v11 + 2) = v24;
            if ( (unsigned __int8)v49 >= 2u )
            {
              v27 = 2;
              if ( !HighestFilter->Characteristics.SendNetBufferListsHandler )
              {
                v27 = 6;
                *((_DWORD *)v11 + 1) = 6;
              }
              if ( !HighestFilter->Characteristics.ReturnNetBufferListsHandler )
                *((_DWORD *)v11 + 1) = v27 | 8;
            }
            *((_WORD *)v11 + 25) = HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            *((_WORD *)v11 + 24) = HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v9 -= HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength;
            *((_QWORD *)v11 + 7) = v9;
            memmove(
              v9,
              HighestFilter->FilterInstanceName.__ptr_.__value_->Buffer,
              HighestFilter->FilterInstanceName.__ptr_.__value_->MaximumLength);
            v28 = HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            if ( v28 )
            {
              v9 -= v28->MaximumLength;
              *((_WORD *)v11 + 16) = *((_WORD *)v11 + 17);
              *((_QWORD *)v11 + 5) = v9;
              v29 = HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
              memmove(v9, v29->Buffer, v29->MaximumLength);
            }
            ++*((_DWORD *)InterfaceBuffer + 2);
            v11 += 64;
            LODWORD(v7) = (_DWORD)v7 - v53;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v16, &NewIrql);
          HighestFilter = HighestFilter->LowerFilter;
          p_Lock = &v16->Lock;
        }
        while ( HighestFilter );
      }
      v30 = NewIrql;
      v16->MiniportThread = 0LL;
      KeReleaseSpinLock(&v16->Lock, v30);
      Ndis::BindEngine::EndPolicyUpdates(&v16->BindEngine);
      Ndis::BindEngine::ApplyBindChanges(&v16->BindEngine, RunAsynchronous, 0);
      if ( (v16->PnPFlags & 0x8000000) != 0 )
      {
        v31 = v16->FilterClass.__ptr_.__value_->Length + v16->MiniportName.Length + 80;
        v17 += v31;
        if ( (unsigned int)v7 >= v31 )
        {
          *(_DWORD *)v11 = 5243264;
          *((_DWORD *)v11 + 3) = 1;
          *((_DWORD *)v11 + 2) = 2;
          *((_DWORD *)v11 + 4) = v16->IfIndex;
          v32.Value = (ULONG64)v16->NetLuid;
          *((_DWORD *)v11 + 1) = 1;
          *((_NET_LUID_LH *)v11 + 3) = v32;
          *((_OWORD *)v11 + 2) = *v16->FilterClass.__ptr_.__value_;
          *((_WORD *)v11 + 25) = v16->MiniportName.Length;
          *((_WORD *)v11 + 24) = v16->MiniportName.Length;
          v33 = &v9[-v16->MiniportName.Length];
          *((_QWORD *)v11 + 7) = v33;
          memmove(v33, v16->MiniportName.Buffer, v16->MiniportName.Length);
          Length = v16->FilterClass.__ptr_.__value_->Length;
          v9 = &v33[-Length];
          if ( (_WORD)Length )
          {
            *((_QWORD *)v11 + 5) = v9;
            memmove(v9, v16->FilterClass.__ptr_.__value_->Buffer, v16->FilterClass.__ptr_.__value_->Length);
          }
          ++*((_DWORD *)InterfaceBuffer + 2);
          v11 += 64;
          LODWORD(v7) = (_DWORD)v7 - v31;
        }
      }
      if ( v16 != v57[0] )
        ndisDereferenceMiniport(v16, 0x25u);
      if ( !v55 )
        break;
      v19 = v55 - 1;
      ndisReferenceMiniportByName(
        (const struct _UNICODE_STRING *)&p_BindPaths->m_miniport->NextMiniport + (unsigned int)(v55 - 1),
        &v54,
        1u,
        MPREF_LWF_ENUMAPI);
      v16 = v54;
    }
    while ( v54 );
    v51 = v17;
    v50 = (unsigned int)v7;
    ndisDereferenceMiniport(v57[0], 0x25u);
    v10 = 0;
    LOBYTE(v7) = v59;
  }
  else
  {
    p_BindPaths = &v8->BindEngine;
    Ndis::BindEngine::BeginPolicyUpdates(&v8->BindEngine);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
    v35 = v8->HighestFilter;
    if ( v35 )
    {
      v36 = 80;
      v37 = v11 + 2;
      v38 = v50;
      v39 = &v8->Lock;
      do
      {
        v40 = NewIrql;
        v8->MiniportThread = 0LL;
        KeReleaseSpinLock(v39, v40);
        v41 = v35->FilterDriver;
        v42 = 0LL;
        *(_OWORD *)v57 = 0LL;
        v43 = (__m128i *)v41->Bind._p->_t.FilterClass.__ptr_.__value_;
        if ( v43 )
        {
          v42 = *v43;
          *(__m128i *)v57 = *v43;
        }
        v44 = v52 + (unsigned __int16)_mm_cvtsi128_si32(v42) + v35->FilterInstanceName.__ptr_.__value_->Length + 80;
        v36 += v44;
        v52 = v44;
        if ( v38 >= v44 )
        {
          *(_DWORD *)(v37 - 2) = 5243264;
          *(_DWORD *)(v37 + 10) = (v35->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
          *(_DWORD *)(v37 + 6) = 2 - ((v35->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
          *(_DWORD *)(v37 + 14) = v35->IfIndex;
          *(_QWORD *)(v37 + 22) = v35->IfBlock->NetLuid.Value;
          *(_DWORD *)(v37 + 2) = 2;
          *(__m128i *)(v37 + 30) = v42;
          *((_WORD *)v37 + 24) = v35->FilterInstanceName.__ptr_.__value_->Length;
          *((_WORD *)v37 + 23) = v35->FilterInstanceName.__ptr_.__value_->Length;
          v9 -= v35->FilterInstanceName.__ptr_.__value_->Length;
          *(_QWORD *)(v37 + 54) = v9;
          memmove(v9, v35->FilterInstanceName.__ptr_.__value_->Buffer, v35->FilterInstanceName.__ptr_.__value_->Length);
          v45 = v35->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( v45 )
          {
            v9 -= v45->Length;
            *(_QWORD *)(v37 + 38) = v9;
            v46 = (const void **)v35->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            memmove(v9, v46[1], *(unsigned __int16 *)v46);
          }
          ++*((_DWORD *)InterfaceBuffer + 2);
          v37 += 64;
          v38 -= v52;
        }
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8, &NewIrql);
        v35 = v35->LowerFilter;
        v39 = &v8->Lock;
      }
      while ( v35 );
      LOBYTE(v7) = v59;
      v51 = v36;
      v10 = 0;
      v50 = v38;
    }
    v47 = NewIrql;
    v8->MiniportThread = 0LL;
    KeReleaseSpinLock(&v8->Lock, v47);
    Ndis::BindEngine::EndPolicyUpdates(p_BindPaths);
    Ndis::BindEngine::ApplyBindChanges(p_BindPaths, RunAsynchronous, 0);
  }
  v5 = v61;
LABEL_61:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( !v10 )
  {
    if ( v51 > v5 )
      v10 = -1073676266;
    *v62 = v51;
    *BytesWritten = v5 - v50;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x28u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)v7,
      v10);
  return v10;
}
