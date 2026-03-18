/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930
 * Callers:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C00A30D4 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00DACE0 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C008AB30 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00A6E68 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  struct VIDMM_ALLOC **v5; // r15
  int v7; // edi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  VIDMM_PAGE_DIRECTORY *v12; // r13
  __int64 v13; // rdi
  VIDMM_GLOBAL *v14; // r15
  unsigned __int64 v15; // rsi
  UINT *v16; // rdx
  __int64 v17; // rcx
  void *KmdProcessHandle; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+50h] [rbp-C8h]
  struct _D3DGPU_PHYSICAL_ADDRESS v23; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-A8h] BYREF
  struct VIDMM_ALLOC **v25; // [rsp+78h] [rbp-A0h]
  _DWORD v26[20]; // [rsp+80h] [rbp-98h] BYREF

  v25 = a3;
  v5 = (struct VIDMM_ALLOC **)&v24;
  v24 = 0LL;
  v7 = 0;
  if ( a3 )
    v5 = a3;
  *v5 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (*((_QWORD *)a2 + 13) - v9) >> 12;
  v22 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v11 = *((_QWORD *)this + 15);
  *(_QWORD *)&v23.SegmentId = 32LL * v22;
  v12 = *(VIDMM_PAGE_DIRECTORY **)(*(_QWORD *)&v23.SegmentId + v11);
  if ( v12 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 1584LL * v22;
    memset(v26, 0, sizeof(v26));
    v26[15] = -1;
    if ( (**(_DWORD **)(v13 + 440) & 0x80u) != 0 )
      *(_WORD *)((char *)&v26[16] + 1) = 257;
    v7 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
           v12,
           this,
           (const struct COMMIT_VA_STATE *)v26,
           0LL,
           v9,
           v10,
           0LL,
           0,
           v5);
    if ( v7 < 0 && *v5 && !v25 )
    {
      WdLogSingleEntry1(1LL, 3313LL);
      DxgkLogInternalTriageEvent(v21, 0x40000LL);
    }
    if ( a4 )
    {
      v14 = (VIDMM_GLOBAL *)*((_QWORD *)this + 11);
      v15 = v9 + (v10 << 12);
      if ( (*((_BYTE *)v14 + 40936) & 0x10) == 0 && v9 <= v15 )
      {
        v16 = (UINT *)(*((_QWORD *)this + 15) + *(_QWORD *)&v23.SegmentId);
        v17 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
        if ( v17 )
        {
          if ( *(_QWORD *)(v17 + 120) )
          {
            v23.SegmentId = v16[6];
            v23.SegmentOffset = *(_QWORD *)(v17 + 128);
            KmdProcessHandle = (void *)*((_QWORD *)this + 14);
            *(&v23.SegmentId + 1) = 0;
            if ( !KmdProcessHandle )
            {
              v20 = VIDMM_GLOBAL::AdapterId(v14);
              KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)this + 12), v20);
              *((_QWORD *)this + 14) = KmdProcessHandle;
            }
            VIDMM_GLOBAL::FlushGpuVaTlb(
              v14,
              v22,
              &v23,
              *((struct VIDMM_PROCESS **)this + 12),
              KmdProcessHandle,
              v9,
              v15);
          }
        }
      }
    }
  }
  *((_DWORD *)a2 + 16) &= 0xFFFFF3FF;
  return (unsigned int)v7;
}
