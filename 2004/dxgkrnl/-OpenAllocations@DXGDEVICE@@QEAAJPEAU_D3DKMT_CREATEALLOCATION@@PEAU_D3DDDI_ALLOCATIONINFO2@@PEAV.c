/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00EF140
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C021C270 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
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
  DXGDEVICE *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  UINT v21; // edi
  int v22; // r14d
  UINT NumAllocations; // edx
  DXGK_OPENALLOCATIONINFO *pOpenAllocation; // rcx
  UINT v25; // ebx
  struct DXGALLOCATION *v26; // rax
  __int64 v27; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v28; // r8
  void *v29; // rcx
  void *pPrivateDriverData; // r10
  __int64 v31; // rax
  UINT PrivateDriverDataSize; // eax
  struct DXGALLOCATION *v33; // r15
  PVOID v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  DXGDEVICE *v39; // r12
  size_t v40; // r8
  char v41; // bl
  char v42; // r8
  size_t v43; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v45; // rcx
  const void *v46; // rdx
  size_t v47; // r8
  char *v48; // rcx
  struct DXGALLOCATION *v50; // [rsp+20h] [rbp-98h]
  void *v51; // [rsp+28h] [rbp-90h]
  _DXGKARG_OPENALLOCATION v52; // [rsp+38h] [rbp-80h] BYREF
  __int64 v53; // [rsp+70h] [rbp-48h]

  v16 = this;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 3510LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = 0;
  v51 = 0LL;
  v22 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_56;
  *(&v52.NumAllocations + 1) = 0;
  v52.pPrivateDriverData = 0LL;
  memset(&v52.SubresourceIndex + 1, 0, 20);
  v52.Flags.Value = (*(_DWORD *)&a2->Flags >> 6) & 2 | (a10 == 0);
  v52.NumAllocations = NumAllocations;
  pOpenAllocation = a5;
  v52.pOpenAllocation = a5;
  v52.SubresourceIndex = a11;
  v25 = 0;
  v26 = a4;
  v50 = a4;
  while ( 1 )
  {
    v27 = v25;
    pOpenAllocation[v27].hAllocation = *((_DWORD *)v26 + 4);
    v52.pOpenAllocation[v27].hDeviceSpecificAllocation = 0LL;
    v28 = &a3[v25];
    v52.pOpenAllocation[v27].PrivateDriverDataSize = v28->PrivateDriverDataSize;
    v29 = a6[v25];
    v52.pOpenAllocation[v27].pPrivateDriverData = v29;
    pPrivateDriverData = v28->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        memmove(v52.pOpenAllocation[v27].pPrivateDriverData, pPrivateDriverData, v28->PrivateDriverDataSize);
      else
        memmove(v29, a7[v25], v28->PrivateDriverDataSize);
    }
    else if ( v28->PrivateDriverDataSize && a9 )
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v25, v28);
      *(_QWORD *)(v31 + 24) = v16;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      v22 = -1073741811;
    }
    ++v25;
    v26 = (struct DXGALLOCATION *)*((_QWORD *)v50 + 8);
    v50 = v26;
    if ( v25 >= a2->NumAllocations )
      break;
    pOpenAllocation = v52.pOpenAllocation;
    v16 = this;
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v52.PrivateDriverSize = PrivateDriverDataSize;
  v33 = a4;
  if ( a2->pStandardAllocation && PrivateDriverDataSize )
  {
    v34 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v51 = v34;
    if ( v34 )
    {
      v52.pPrivateDriverData = v34;
      v40 = a2->PrivateDriverDataSize;
      v41 = a9;
      if ( a9 )
        memmove(v34, Src, v40);
      else
        memmove(v34, a2->pStandardAllocation, v40);
      v39 = this;
      goto LABEL_26;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
    v39 = this;
    v38[3] = this;
    v38[4] = a2->PrivateDriverDataSize;
    v22 = -1073741801;
    v38[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v38);
  }
  else
  {
    v39 = this;
  }
  v41 = a9;
LABEL_26:
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() || (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
  {
    if ( v22 < 0 )
      goto LABEL_56;
    v22 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)v39 + 2), *((void **)v39 + 73), &v52);
  }
  if ( v22 >= 0 )
  {
    if ( a12 )
      *a12 = v52.Pitch;
    if ( a13 )
      *a13 = v52.SubresourceOffset;
    v42 = a10;
    if ( !v51 || a10 )
      goto LABEL_45;
    if ( v41 )
    {
      v43 = a2->PrivateDriverDataSize;
      pStandardAllocation = a2->pStandardAllocation;
      if ( (unsigned __int64)pStandardAllocation + v43 > MmUserProbeAddress
        || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v43) <= pStandardAllocation )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(pStandardAllocation, v51, v43);
      v45 = Src;
    }
    else
    {
      v45 = a2->pStandardAllocation;
    }
    memmove(v45, v51, a2->PrivateDriverDataSize);
    while ( 1 )
    {
      while ( 1 )
      {
        v42 = a10;
LABEL_45:
        if ( v21 >= a2->NumAllocations )
          goto LABEL_56;
        v53 = v21;
        *((_QWORD *)v33 + 4) = v52.pOpenAllocation[v21].hDeviceSpecificAllocation;
        v46 = a6[v21];
        if ( v46 )
        {
          if ( !v42 )
            break;
        }
LABEL_55:
        ++v21;
        v33 = (struct DXGALLOCATION *)*((_QWORD *)v33 + 8);
      }
      if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        memmove(a3[v21].pPrivateDriverData, v46, a3[v21].PrivateDriverDataSize);
        goto LABEL_55;
      }
      v47 = a3[v21].PrivateDriverDataSize;
      v48 = (char *)a3[v21].pPrivateDriverData;
      if ( (unsigned __int64)&v48[v47] > MmUserProbeAddress || &v48[v47] <= v48 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v48, v46, v47);
      memmove(a7[v21], a6[v21], a3[v21].PrivateDriverDataSize);
      ++v21;
      v33 = (struct DXGALLOCATION *)*((_QWORD *)v33 + 8);
    }
  }
LABEL_56:
  operator delete[](v51);
  return (unsigned int)v22;
}
