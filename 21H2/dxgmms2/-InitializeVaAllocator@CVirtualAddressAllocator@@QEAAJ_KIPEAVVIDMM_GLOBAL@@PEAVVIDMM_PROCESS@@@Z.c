/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00850BC
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0082804 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00BA0C0 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00BCAA0 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AD0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024FC8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E330 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C006E930 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0083308 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0085344 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned int v11; // r12d
  VIDMM_DEVICE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_DEVICE *v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  struct VIDMM_VAD *Vad; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct VIDMM_VAD *v22; // r14
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rsi
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  v5 = (char *)this + 24;
  v6 = 0LL;
  *((_QWORD *)this + 11) = a4;
  *((_QWORD *)this + 12) = a5;
  v8 = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = (char *)this + 24;
  v11 = 1;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !a5 )
    goto LABEL_12;
  v11 = *((_DWORD *)a4 + 1750);
  if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
  {
    v36 = *((_QWORD *)a4 + 5049);
    *((_DWORD *)this + 36) &= ~1u;
    *((_QWORD *)this + 13) = v36;
    v17 = *((_DWORD *)this + 36) | 4;
    goto LABEL_11;
  }
  v12 = (VIDMM_DEVICE *)operator new[](0x138uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v15 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v15 = 0LL;
  *((_QWORD *)this + 13) = v15;
  if ( !v15 || (int)VIDMM_DEVICE::Init(v15, 0LL, a5) < 0 )
    goto LABEL_29;
  if ( dword_1C0050494 == 2 )
  {
    if ( (*((_BYTE *)a4 + 40936) & 0x40) != 0 )
      goto LABEL_9;
LABEL_33:
    v16 = 1;
    goto LABEL_10;
  }
  if ( dword_1C0050494 )
    goto LABEL_33;
LABEL_9:
  v16 = 0;
LABEL_10:
  v17 = v16 | *((_DWORD *)this + 36) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 36) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(2 * v17)) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v8, a2, v11);
  v22 = Vad;
  if ( !Vad )
  {
    v35 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
    *(_QWORD *)(v35 + 24) = 2748LL;
    WdLogEvent5_WdAssertion(v35);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v24 = *(_QWORD *)v5;
  v25 = (_QWORD *)((char *)v22 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v25 = v24;
  *((_QWORD *)v22 + 6) = v5;
  *(_QWORD *)(v24 + 8) = v25;
  *(_QWORD *)v5 = v25;
  if ( !a5 )
    return 0LL;
  v26 = v11;
  v27 = 32LL * v11;
  if ( !is_mul_ok(v11, 0x20uLL) )
    v27 = -1LL;
  v28 = operator new(v27, 0x4B677844u, v23, PagedPool);
  *((_QWORD *)this + 15) = v28;
  if ( v28 )
  {
    if ( v11 )
    {
      v29 = 0LL;
      do
      {
        v30 = v29 + *((_QWORD *)a4 + 5027);
        if ( (*(_BYTE *)(v30 + 436) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 16) = *(_DWORD *)(v30 + 48LL * *(unsigned int *)(v30 + 428) + 88);
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 20) = *(_DWORD *)(v30 + 48 * (*(unsigned int *)(v30 + 428) + 2LL));
          v31 = *((_QWORD *)this + 15);
          if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
          {
            *(_DWORD *)(v31 + v6 + 28) = *(_DWORD *)(v30 + 44);
            v32 = *(_DWORD *)(v30 + 60);
          }
          else
          {
            *(_DWORD *)(v31 + v6 + 28) = *(_DWORD *)(v30 + 36);
            v32 = *(_DWORD *)(v30 + 52);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 24) = v32;
        }
        v29 += 1584LL;
        v6 += 32LL;
        --v26;
      }
      while ( v26 );
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 12) + 32LL),
        &CreateGpuVirtualAddressAllocator,
        *((_QWORD *)this + 11),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 32LL) + 64LL) + 72LL),
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    return 0LL;
  }
LABEL_29:
  v34 = WdLogNewEntry5_WdWarning(v14, v13);
  WdLogEvent5_WdWarning(v34);
  return 3221225495LL;
}
