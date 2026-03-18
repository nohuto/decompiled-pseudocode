/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0074364
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067E30 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FA98 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00748E0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00872F4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C008970C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BE53C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00136CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026148 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0026248 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0070ED8 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007453C (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0074878 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00748E0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  struct VIDMM_VAD *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // r8
  char *v12; // rdx
  char *v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  char *v16; // rsi
  _DWORD *v17; // rbp
  __int64 v18; // rcx
  char **v19; // rax
  __int64 v20; // rdx
  struct VIDMM_VAD **v21; // rcx
  _QWORD *v22; // rdx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-28h]

  v3 = (_QWORD *)((char *)a2 + 56);
  v5 = *((_QWORD *)a2 + 7);
  v6 = a2;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_27;
    v22 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( (_QWORD *)*v22 != v3 )
      goto LABEL_27;
    *v22 = v5;
    *(_QWORD *)(v5 + 8) = v22;
    *v3 = 0LL;
  }
  v7 = *((unsigned int *)v6 + 18);
  v8 = 0;
  if ( (v7 & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = (_QWORD *)((char *)v6 + 24 * v8 + 96);
        v10 = (_QWORD *)*v9;
        if ( (_QWORD *)*v9 == v9 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)v10 + 14) << 28) >> 28, v10[6]);
          LODWORD(v26) = v24;
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            v10[8],
            &EndGpuVirtualAddressRangeMapping,
            v24,
            this,
            VidMmAllocFromOwner,
            v10[8],
            v10[11],
            v10[12],
            v10[10],
            v10[9],
            v26,
            v10[13],
            v10[14]);
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v10, 0, 1u);
      }
      v7 = *((unsigned int *)v6 + 18);
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v6 + 18) >> 4) & 0x7Fu) );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v25) = v7;
    McTemplateK0pqxx_EtwWriteTransfer(
      v7,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v25,
      *((_QWORD *)v6 + 3),
      *((_QWORD *)v6 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v6);
  *((_DWORD *)v6 + 18) &= 0xFFFFFFF0;
  v12 = (char *)v6 + 80;
  while ( 1 )
  {
    v13 = *(char **)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_27;
    v14 = *(_QWORD *)v13;
    if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_27;
    *(_QWORD *)v12 = v14;
    *(_QWORD *)(v14 + 8) = v12;
    if ( v13 == v12 )
      break;
    **((_QWORD **)v13 + 2) = 0LL;
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
  }
  v15 = (_DWORD *)*((_QWORD *)v6 + 6);
  if ( v15 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 3) == *((_QWORD *)v15 - 1) && (v15[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v15 - 10), v11);
    *((_QWORD *)v15 - 1) = *((_QWORD *)v6 + 4);
    v20 = *((_QWORD *)v6 + 5);
    if ( *(struct VIDMM_VAD **)(v20 + 8) != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_27;
    v21 = (struct VIDMM_VAD **)*((_QWORD *)v6 + 6);
    if ( *v21 != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_27;
    *v21 = (struct VIDMM_VAD *)v20;
    *(_QWORD *)(v20 + 8) = v21;
    CVirtualAddressAllocator::FreeVad(v6);
    v6 = (struct VIDMM_VAD *)(v15 - 10);
  }
  v16 = (char *)v6 + 40;
  v17 = (_DWORD *)*((_QWORD *)v6 + 5);
  if ( v17 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 4) == *((_QWORD *)v17 - 2) && (v17[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v17 - 10), v11);
    *((_QWORD *)v17 - 2) = *((_QWORD *)v6 + 3);
    v18 = *(_QWORD *)v16;
    if ( *(char **)(*(_QWORD *)v16 + 8LL) == v16 )
    {
      v19 = (char **)*((_QWORD *)v6 + 6);
      if ( *v19 == v16 )
      {
        *v19 = (char *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        CVirtualAddressAllocator::FreeVad(v6);
        v6 = (struct VIDMM_VAD *)(v17 - 10);
        goto LABEL_17;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
LABEL_17:
  CVirtualAddressAllocator::InsertVadToFreeList(this, v6);
}
