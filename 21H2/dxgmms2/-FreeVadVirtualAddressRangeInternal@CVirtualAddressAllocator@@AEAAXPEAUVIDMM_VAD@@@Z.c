/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E028
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0062C90 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006D860 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008C86C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BD184 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026158 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0026258 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E330 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E694 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0089784 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  struct VIDMM_VAD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 VidMmAllocFromOwner; // rax
  __int64 v13; // r8
  __int64 **v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rcx
  VIDMM_MAPPED_VA_RANGE *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 **v20; // r8
  __int64 **v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rdx
  struct VIDMM_VAD **v26; // rcx
  char *v27; // rdi
  _DWORD *v28; // rsi
  __int64 v29; // rcx
  char **v30; // rax
  char v31[8]; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+50h] [rbp-28h]

  v3 = (_QWORD *)((char *)a2 + 56);
  v5 = *((_QWORD *)a2 + 7);
  v6 = a2;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_28;
    v7 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( (_QWORD *)*v7 != v3 )
      goto LABEL_28;
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
    *v3 = 0LL;
  }
  v8 = *((unsigned int *)v6 + 18);
  v9 = 0LL;
  if ( (v8 & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v10 = (_QWORD *)((char *)v6 + 40 * v9 + 96);
        v11 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 == v10 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v11 + 14) << 28) >> 28, v11[6]);
          LODWORD(v32) = v13;
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            v11[8],
            &EndGpuVirtualAddressRangeMapping,
            v13,
            this,
            VidMmAllocFromOwner,
            v11[8],
            v11[11],
            v11[12],
            v11[10],
            v11[9],
            v32,
            v11[13],
            v11[14]);
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v11, 0, 1, 0);
      }
      if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
      {
        v14 = (__int64 **)((char *)v6 + 40 * v9 + 120);
        while ( 1 )
        {
          v15 = *v14;
          if ( *v14 == (__int64 *)v14 )
            break;
          if ( (__int64 **)v15[1] != v14 )
            goto LABEL_28;
          v16 = (__int64 *)*v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            goto LABEL_28;
          *v14 = v16;
          v16[1] = (__int64)v14;
          v17 = (VIDMM_MAPPED_VA_RANGE *)(v15 - 1);
          *v15 = 0LL;
          v15[1] = 0LL;
          v18 = v15 + 2;
          v19 = *v18;
          *((_DWORD *)v17 + 16) &= ~0x2000u;
          if ( v19 )
          {
            if ( *(__int64 **)(v19 + 8) != v18 )
              goto LABEL_28;
            v20 = (__int64 **)v18[1];
            if ( *v20 != v18 )
              goto LABEL_28;
            *v20 = (__int64 *)v19;
            *(_QWORD *)(v19 + 8) = v20;
            *v18 = 0LL;
          }
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v17, v19);
        }
      }
      v8 = *((unsigned int *)v6 + 18);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < ((*((_DWORD *)v6 + 18) >> 4) & 0x7Fu) );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    *(_DWORD *)v31 = v8;
    McTemplateK0pqxx_EtwWriteTransfer(
      v8,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      *(_QWORD *)v31,
      *((_QWORD *)v6 + 3),
      *((_QWORD *)v6 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v6);
  *((_DWORD *)v6 + 18) &= 0xFFFFFFF0;
  v21 = (__int64 **)((char *)v6 + 80);
  while ( 1 )
  {
    v22 = *v21;
    v23 = **v21;
    if ( (__int64 **)(*v21)[1] != v21 || *(__int64 **)(v23 + 8) != v22 )
      goto LABEL_28;
    *v21 = (__int64 *)v23;
    *(_QWORD *)(v23 + 8) = v21;
    if ( v22 == (__int64 *)v21 )
      break;
    *(_QWORD *)v22[2] = 0LL;
    *v22 = 0LL;
    v22[1] = 0LL;
  }
  v24 = (_DWORD *)*((_QWORD *)v6 + 6);
  if ( v24 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 3) == *((_QWORD *)v24 - 1) && (v24[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v24 - 10));
    *((_QWORD *)v24 - 1) = *((_QWORD *)v6 + 4);
    v25 = *((_QWORD *)v6 + 5);
    if ( *(struct VIDMM_VAD **)(v25 + 8) != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_28;
    v26 = (struct VIDMM_VAD **)*((_QWORD *)v6 + 6);
    if ( *v26 != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_28;
    *v26 = (struct VIDMM_VAD *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    CVirtualAddressAllocator::FreeVad(v6);
    v6 = (struct VIDMM_VAD *)(v24 - 10);
  }
  v27 = (char *)v6 + 40;
  v28 = (_DWORD *)*((_QWORD *)v6 + 5);
  if ( v28 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 4) == *((_QWORD *)v28 - 2) && (v28[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v28 - 10));
    *((_QWORD *)v28 - 2) = *((_QWORD *)v6 + 3);
    v29 = *(_QWORD *)v27;
    if ( *(char **)(*(_QWORD *)v27 + 8LL) == v27 )
    {
      v30 = (char **)*((_QWORD *)v6 + 6);
      if ( *v30 == v27 )
      {
        *v30 = (char *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        CVirtualAddressAllocator::FreeVad(v6);
        v6 = (struct VIDMM_VAD *)(v28 - 10);
        goto LABEL_41;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_41:
  CVirtualAddressAllocator::InsertVadToFreeList(this, v6);
}
