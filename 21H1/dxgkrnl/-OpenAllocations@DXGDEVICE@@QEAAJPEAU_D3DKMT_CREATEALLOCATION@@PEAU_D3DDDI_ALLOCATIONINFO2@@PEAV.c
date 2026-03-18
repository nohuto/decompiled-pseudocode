/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C01043C0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0104C00 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C0218020 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        D3DKMT_CREATESTANDARDALLOCATION *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  UINT v19; // ebx
  void *v20; // r9
  int v21; // r15d
  UINT NumAllocations; // edx
  UINT v23; // esi
  struct DXGALLOCATION *v24; // r12
  SIZE_T PrivateDriverDataSize; // rax
  struct DXGALLOCATION *v26; // r14
  char v27; // si
  char v28; // r8
  const void *v29; // rdx
  size_t v30; // r8
  char *v31; // rcx
  size_t v32; // r8
  void *v33; // rcx
  __int64 v34; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v35; // r8
  void *v36; // rcx
  void *pPrivateDriverData; // r10
  __int64 v39; // rax
  __int64 v40; // rax
  PVOID v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  size_t v46; // r8
  size_t v47; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  const void *v49; // rdx
  D3DKMT_CREATESTANDARDALLOCATION *v50; // rcx
  void *v51; // [rsp+28h] [rbp-90h]
  _DXGKARG_OPENALLOCATION v52; // [rsp+40h] [rbp-78h] BYREF

  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v39 + 24) = 3453LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v19 = 0;
  v20 = 0LL;
  v51 = 0LL;
  v21 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_34;
  *(&v52.NumAllocations + 1) = 0;
  v52.pPrivateDriverData = 0LL;
  v52.PrivateDriverSize = 0;
  memset(&v52.SubresourceIndex + 1, 0, 20);
  v52.Flags.Value = (*(_DWORD *)&a2->Flags >> 6) & 2 | (a10 == 0);
  v52.NumAllocations = NumAllocations;
  v52.pOpenAllocation = a5;
  v52.SubresourceIndex = a11;
  v23 = 0;
  v24 = a4;
  while ( v23 < a2->NumAllocations )
  {
    v34 = v23;
    v52.pOpenAllocation[v34].hAllocation = *((_DWORD *)v24 + 4);
    v52.pOpenAllocation[v34].hDeviceSpecificAllocation = 0LL;
    v35 = &a3[v23];
    v52.pOpenAllocation[v34].PrivateDriverDataSize = v35->PrivateDriverDataSize;
    v36 = a6[v23];
    v52.pOpenAllocation[v34].pPrivateDriverData = v36;
    pPrivateDriverData = v35->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( a9 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        memmove(v36, a7[v23], v35->PrivateDriverDataSize);
        goto LABEL_32;
      }
      memmove(v52.pOpenAllocation[v34].pPrivateDriverData, pPrivateDriverData, v35->PrivateDriverDataSize);
      ++v23;
      v24 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
    }
    else
    {
      if ( v35->PrivateDriverDataSize && a9 )
      {
        v40 = WdLogNewEntry5_WdWarning(v36, v23, v35);
        *(_QWORD *)(v40 + 24) = this;
        *(_QWORD *)(v40 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v40);
        v21 = -1073741811;
      }
LABEL_32:
      ++v23;
      v24 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 8);
    }
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v52.PrivateDriverSize = a2->PrivateDriverDataSize;
  v26 = a4;
  if ( a2->pStandardAllocation && (_DWORD)PrivateDriverDataSize )
  {
    v41 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v51 = v41;
    if ( !v41 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
      v45[3] = this;
      v45[4] = a2->PrivateDriverDataSize;
      v21 = -1073741801;
      v45[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v45);
      goto LABEL_33;
    }
    v52.pPrivateDriverData = v41;
    v46 = a2->PrivateDriverDataSize;
    v27 = a9;
    if ( a9 )
      memmove(v41, Src, v46);
    else
      memmove(v41, a2->pStandardAllocation, v46);
  }
  else
  {
    v27 = a9;
  }
  if ( v21 >= 0 )
  {
    v21 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 73), &v52);
    if ( v21 >= 0 )
    {
      if ( a12 )
        *a12 = v52.Pitch;
      if ( a13 )
        *a13 = v52.SubresourceOffset;
      v28 = a10;
      if ( v51 && !a10 )
      {
        if ( v27 )
        {
          v47 = a2->PrivateDriverDataSize;
          pStandardAllocation = a2->pStandardAllocation;
          if ( (unsigned __int64)pStandardAllocation + v47 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v47) <= pStandardAllocation )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(pStandardAllocation, v51, v47);
          v49 = v51;
          v50 = Src;
        }
        else
        {
          v49 = v51;
          v50 = a2->pStandardAllocation;
        }
        memmove(v50, v49, a2->PrivateDriverDataSize);
        v28 = a10;
      }
      while ( v19 < a2->NumAllocations )
      {
        *((_QWORD *)v26 + 4) = v52.pOpenAllocation[v19].hDeviceSpecificAllocation;
        v29 = a6[v19];
        if ( v29 && !v28 )
        {
          if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          {
            v32 = a3[v19].PrivateDriverDataSize;
            v33 = a3[v19].pPrivateDriverData;
          }
          else
          {
            v30 = a3[v19].PrivateDriverDataSize;
            v31 = (char *)a3[v19].pPrivateDriverData;
            if ( (unsigned __int64)&v31[v30] > MmUserProbeAddress || &v31[v30] <= v31 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v31, v29, v30);
            v32 = a3[v19].PrivateDriverDataSize;
            v29 = a6[v19];
            v33 = a7[v19];
          }
          memmove(v33, v29, v32);
        }
        ++v19;
        v26 = (struct DXGALLOCATION *)*((_QWORD *)v26 + 8);
        v28 = a10;
      }
    }
  }
LABEL_33:
  v20 = v51;
LABEL_34:
  operator delete[](v20);
  return (unsigned int)v21;
}
