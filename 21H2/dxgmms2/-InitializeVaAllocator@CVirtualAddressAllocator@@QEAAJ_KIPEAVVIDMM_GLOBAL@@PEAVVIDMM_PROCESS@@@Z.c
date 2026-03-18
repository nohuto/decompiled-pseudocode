/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C009B500
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C009CD60 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00B322C (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00DFA78 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C0099438 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C009D6B4 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C009D760 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C009D7F8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v10; // r13
  unsigned int v11; // r12d
  VIDMM_DEVICE *v12; // rax
  __int64 v13; // r9
  VIDMM_DEVICE *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  struct VIDMM_VAD *Vad; // rax
  struct VIDMM_VAD *v18; // rbp
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  __int64 v29; // rax
  __int64 v30; // rcx

  v5 = (char *)this + 24;
  v6 = 0LL;
  *((_QWORD *)this + 11) = a4;
  *((_QWORD *)this + 12) = a5;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  v10 = a3;
  v11 = 1;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !a5 )
    goto LABEL_12;
  v11 = *((_DWORD *)a4 + 1754);
  if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
  {
    v29 = *((_QWORD *)a4 + 5049);
    *((_DWORD *)this + 36) &= ~1u;
    *((_QWORD *)this + 13) = v29;
    v16 = *((_DWORD *)this + 36) | 4;
    goto LABEL_11;
  }
  v12 = (VIDMM_DEVICE *)operator new(320LL, 0x4B677844u, 256LL);
  if ( v12 )
    v14 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v14 = 0LL;
  *((_QWORD *)this + 13) = v14;
  if ( !v14 || (int)VIDMM_DEVICE::Init(v14, 0LL, a5, v13) < 0 )
    goto LABEL_31;
  if ( dword_1C006E504 == 2 )
  {
    if ( (*((_BYTE *)a4 + 40936) & 0x40) != 0 )
      goto LABEL_9;
LABEL_35:
    v15 = 1;
    goto LABEL_10;
  }
  if ( dword_1C006E504 )
    goto LABEL_35;
LABEL_9:
  v15 = 0;
LABEL_10:
  v16 = v15 | *((_DWORD *)this + 36) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 36) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v16)) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v10, a2, v11);
  v18 = Vad;
  if ( !Vad )
  {
    WdLogSingleEntry1(1LL, 2368LL);
    DxgkLogInternalTriageEvent(v30, 0x40000LL);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v19 = *(_QWORD *)v5;
  v20 = (_QWORD *)((char *)v18 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v20 = v19;
  *((_QWORD *)v18 + 6) = v5;
  *(_QWORD *)(v19 + 8) = v20;
  *(_QWORD *)v5 = v20;
  if ( !a5 )
    return 0LL;
  v21 = v11;
  v22 = 32LL * v11;
  if ( !is_mul_ok(v11, 0x20uLL) )
    v22 = -1LL;
  v23 = operator new[](v22, 0x4B677844u, 256LL);
  *((_QWORD *)this + 15) = v23;
  if ( v23 )
  {
    if ( v11 )
    {
      v24 = 0LL;
      do
      {
        v25 = v24 + *((_QWORD *)a4 + 5028);
        if ( (*(_BYTE *)(v25 + 436) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 16) = *(_DWORD *)(v25 + 48LL * *(unsigned int *)(v25 + 428) + 88);
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 20) = *(_DWORD *)(v25 + 48 * (*(unsigned int *)(v25 + 428) + 2LL));
          v26 = *((_QWORD *)this + 15);
          if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
          {
            *(_DWORD *)(v6 + v26 + 28) = *(_DWORD *)(v25 + 44);
            v27 = *(_DWORD *)(v25 + 60);
          }
          else
          {
            *(_DWORD *)(v6 + v26 + 28) = *(_DWORD *)(v25 + 36);
            v27 = *(_DWORD *)(v25 + 52);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 24) = v27;
        }
        v24 += 1584LL;
        v6 += 32LL;
        --v21;
      }
      while ( v21 );
    }
    if ( (byte_1C006E942 & 0x20) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 12) + 32LL),
        &CreateGpuVirtualAddressAllocator,
        *((_QWORD *)this + 11),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 32LL) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    return 0LL;
  }
LABEL_31:
  WdLogSingleEntry0(3LL);
  return 3221225495LL;
}
