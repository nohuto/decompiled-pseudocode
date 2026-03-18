/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C018D7E0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C02CA54C (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
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
  struct DXGALLOCATION *v13; // r14
  __int64 v16; // rcx
  UINT v17; // ebx
  void *v18; // r12
  int v19; // r15d
  UINT NumAllocations; // edx
  UINT v21; // esi
  struct DXGALLOCATION *v22; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v23; // r8
  void *v24; // rcx
  void *pPrivateDriverData; // r10
  unsigned __int64 PrivateDriverDataSize; // rax
  struct DXGALLOCATION *v27; // r14
  char v28; // si
  char v29; // r8
  const void *v30; // rdx
  size_t v31; // r8
  char *v32; // rcx
  size_t v33; // r8
  void *v34; // rcx
  size_t v36; // rax
  size_t v37; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  D3DKMT_CREATESTANDARDALLOCATION *v39; // rcx
  _DXGKARG_OPENALLOCATION v40; // [rsp+70h] [rbp-78h] BYREF
  struct DXGALLOCATION *v42; // [rsp+108h] [rbp+20h]

  v42 = a4;
  v13 = a4;
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v16 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    v17 = 0;
  }
  else
  {
    WdLogSingleEntry1(1LL, 3606LL);
    v17 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3606LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = 0LL;
  v19 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_34;
  *(&v40.NumAllocations + 1) = 0;
  v40.pPrivateDriverData = 0LL;
  v40.PrivateDriverSize = 0;
  memset(&v40.SubresourceIndex + 1, 0, 20);
  v40.Flags.Value = (a10 == 0) | (*(_DWORD *)&a2->Flags >> 6) & 2;
  v40.NumAllocations = NumAllocations;
  v40.pOpenAllocation = a5;
  v40.SubresourceIndex = a11;
  v21 = 0;
  v22 = v13;
  while ( v21 < a2->NumAllocations )
  {
    a4 = (struct DXGALLOCATION *)(32LL * v21);
    *(_DWORD *)((char *)a4 + (unsigned __int64)v40.pOpenAllocation) = *((_DWORD *)v22 + 4);
    *(_QWORD *)((char *)a4 + (unsigned __int64)v40.pOpenAllocation + 24) = 0LL;
    v23 = &a3[v21];
    *(_DWORD *)((char *)a4 + (unsigned __int64)v40.pOpenAllocation + 16) = v23->PrivateDriverDataSize;
    v24 = a6[v21];
    *(_QWORD *)((char *)a4 + (unsigned __int64)v40.pOpenAllocation + 8) = v24;
    pPrivateDriverData = v23->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( a9 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        memmove(v24, a7[v21], v23->PrivateDriverDataSize);
        goto LABEL_11;
      }
      memmove(
        *(void **)((char *)a4 + (unsigned __int64)v40.pOpenAllocation + 8),
        pPrivateDriverData,
        v23->PrivateDriverDataSize);
      ++v21;
      v22 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 8);
    }
    else
    {
      if ( v23->PrivateDriverDataSize && a9 )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        v19 = -1073741811;
      }
LABEL_11:
      ++v21;
      v22 = (struct DXGALLOCATION *)*((_QWORD *)v22 + 8);
    }
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v40.PrivateDriverSize = a2->PrivateDriverDataSize;
  v27 = v42;
  v18 = 0LL;
  if ( a2->pStandardAllocation && (_DWORD)PrivateDriverDataSize )
  {
    v18 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL, (__int64)a4);
    v36 = a2->PrivateDriverDataSize;
    if ( !v18 )
    {
      v19 = -1073741801;
      WdLogSingleEntry3(3LL, this, (unsigned int)v36, -1073741801LL);
      goto LABEL_34;
    }
    v40.pPrivateDriverData = v18;
    v28 = a9;
    if ( a9 )
      memmove(v18, Src, v36);
    else
      memmove(v18, a2->pStandardAllocation, v36);
  }
  else
  {
    v28 = a9;
  }
  if ( v19 >= 0 )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
      v19 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 73), &v40);
    if ( v19 >= 0 )
    {
      if ( a12 )
        *a12 = v40.Pitch;
      if ( a13 )
        *a13 = v40.SubresourceOffset;
      v29 = a10;
      if ( v18 && !a10 )
      {
        if ( v28 )
        {
          v37 = a2->PrivateDriverDataSize;
          pStandardAllocation = a2->pStandardAllocation;
          if ( (unsigned __int64)pStandardAllocation + v37 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v37) <= pStandardAllocation )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(pStandardAllocation, v18, v37);
          v39 = Src;
        }
        else
        {
          v39 = a2->pStandardAllocation;
        }
        memmove(v39, v18, a2->PrivateDriverDataSize);
        v29 = a10;
      }
      while ( v17 < a2->NumAllocations )
      {
        *((_QWORD *)v27 + 4) = v40.pOpenAllocation[v17].hDeviceSpecificAllocation;
        v30 = a6[v17];
        if ( v30 && !v29 )
        {
          if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          {
            v33 = a3[v17].PrivateDriverDataSize;
            v34 = a3[v17].pPrivateDriverData;
          }
          else
          {
            v31 = a3[v17].PrivateDriverDataSize;
            v32 = (char *)a3[v17].pPrivateDriverData;
            if ( (unsigned __int64)&v32[v31] > MmUserProbeAddress || &v32[v31] <= v32 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v32, v30, v31);
            v33 = a3[v17].PrivateDriverDataSize;
            v30 = a6[v17];
            v34 = a7[v17];
          }
          memmove(v34, v30, v33);
        }
        ++v17;
        v27 = (struct DXGALLOCATION *)*((_QWORD *)v27 + 8);
        v29 = a10;
      }
    }
  }
LABEL_34:
  operator delete[](v18);
  return (unsigned int)v19;
}
