/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089B98
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0014BB0 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0065AE4 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00689A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A4E0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC00 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BD90 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FA98 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00707EC (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     VidSchInsertContextAllocation @ 0x1C0089E48 (VidSchInsertContextAllocation.c)
 *     VidSchRemoveContextAllocation @ 0x1C008A908 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        __int64 a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  int v14; // r15d
  unsigned int v15; // r10d
  int v16; // edi
  void *v18; // r14
  struct VIDMM_DEVICE *v19; // r12
  int v20; // r14d
  __int64 v21; // r8
  char v22; // dl
  bool v23; // zf
  int v24; // ecx
  int OneAllocation; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct VIDMM_VAD **VirtualAddressAllocator; // rax
  unsigned int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct VIDMM_ALLOC *v43; // [rsp+A8h] [rbp-59h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v44; // [rsp+B0h] [rbp-51h] BYREF
  _QWORD v45[10]; // [rsp+B8h] [rbp-49h] BYREF
  unsigned int v46; // [rsp+148h] [rbp+47h]
  void *v47; // [rsp+150h] [rbp+4Fh] BYREF

  v46 = a3;
  v14 = (int)a4;
  v44 = 0LL;
  v15 = a3;
  v43 = 0LL;
  v16 = a2;
  v47 = 0LL;
  v18 = 0LL;
  if ( a4 )
    v19 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 95);
  else
    v19 = 0LL;
  if ( !a4 || *(_BYTE *)(*((_QWORD *)a4 + 5) + 345LL) )
  {
    v42 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v42 + 24) = 2084LL;
    WdLogEvent5_WdAssertion(v42);
    OneAllocation = -1073741811;
LABEL_30:
    if ( v18 )
      VidSchRemoveContextAllocation(v18);
    goto LABEL_32;
  }
  v20 = (int)a5;
  v21 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_10;
    v39 = WdLogNewEntry5_WdAssertion(this, a2, v21);
    *(_QWORD *)(v39 + 24) = 2098LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v39);
    OneAllocation = -1073741811;
    goto LABEL_32;
  }
  if ( !a5 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2, v21);
    *(_QWORD *)(v39 + 24) = 2091LL;
    goto LABEL_20;
  }
  v22 = -1;
  v23 = !_BitScanForward((unsigned int *)&v24, *((_DWORD *)a5 + 103));
  a4 = a5;
  a12.0 = 0;
  if ( !v23 )
    v22 = v24;
  v15 = v22;
  v46 = v22;
LABEL_10:
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    this,
                    v19,
                    v15,
                    a7,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    a13,
                    0LL,
                    0LL,
                    a6,
                    0xA0000000,
                    v21,
                    a4,
                    0,
                    0LL,
                    (struct _D3DDDI_SEGMENTPREFERENCE **)&v44);
  if ( OneAllocation >= 0 )
  {
    *(_BYTE *)&a12.0 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      (DXGADAPTER **)this,
                      v19,
                      v44,
                      0LL,
                      0,
                      0LL,
                      &v43,
                      (unsigned __int8 *)&a12);
    if ( OneAllocation >= 0 )
    {
      OneAllocation = VidSchInsertContextAllocation(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 624LL),
                        v14,
                        v20,
                        (_DWORD)v43,
                        (__int64)&v47);
      if ( OneAllocation < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v27, v26, v28);
      }
      else if ( (v16 & 2) != 0
             && (VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                                  *(VIDMM_PROCESS **)(*(_QWORD *)v43 + 8LL),
                                                                  *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                                                  v46),
                 !CVirtualAddressAllocator::MapVirtualAddressRange(
                    VirtualAddressAllocator,
                    v31,
                    0LL,
                    1,
                    *((_QWORD *)v44 + 2),
                    0LL,
                    0LL,
                    0LL,
                    *((_DWORD *)v44 + 8),
                    17LL,
                    0LL,
                    v30,
                    0LL)) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v33, v32, v34);
        *(_QWORD *)(v40 + 32) = 2196LL;
      }
      else
      {
        memset(v45, 0, sizeof(v45));
        v45[2] = v43;
        LODWORD(v45[0]) = 209;
        LODWORD(v45[4]) = v16;
        OneAllocation = VIDMM_GLOBAL::QueueDeferredCommand(
                          this,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v43 + 1) + 72LL)
                                                      + 176LL * (*((_DWORD *)v44 + 19) & 0x3F)),
                          (struct _VIDMM_DEFERRED_COMMAND *)v45,
                          1,
                          0LL);
        if ( OneAllocation >= 0 )
        {
          *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v47;
          return (unsigned int)OneAllocation;
        }
        if ( OneAllocation == -1071775232 )
        {
          v41 = WdLogNewEntry5_WdWarning(v36, v35);
          v18 = v47;
          *(_QWORD *)(v41 + 24) = v47;
          *(_QWORD *)(v41 + 32) = 2211LL;
          WdLogEvent5_WdWarning(v41);
          goto LABEL_30;
        }
        v40 = WdLogNewEntry5_WdAssertion(v36, v35, v37);
        *(_QWORD *)(v40 + 32) = 2215LL;
      }
      v18 = v47;
      *(_QWORD *)(v40 + 24) = v47;
      WdLogEvent5_WdAssertion(v40);
      goto LABEL_30;
    }
  }
LABEL_32:
  if ( v43 )
    VIDMM_GLOBAL::CloseOneAllocation(
      this,
      (struct _KEVENT *)v43,
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
  if ( v44 )
    VIDMM_GLOBAL::DestroyOneAllocation(this, v19, v44, 1);
  *a14 = 0LL;
  return (unsigned int)OneAllocation;
}
