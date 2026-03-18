/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00CD490
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CDA20 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C002805C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C00285F4 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C008FAFC (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C008FBC4 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00CE5BC (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v7; // r8
  ULONG v8; // r12d
  ULONG AllocationType; // esi
  VIDMM_LINEAR_POOL *v10; // r15
  HANDLE v11; // r13
  ULONG_PTR v12; // r8
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS inserted; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  NTSTATUS v28; // eax
  VIDMM_LINEAR_POOL *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  _DWORD *v36; // r14
  __int64 v37; // rax
  int v38; // eax
  int v39; // esi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  PVOID v42; // r9
  __int64 BlockListHead; // rax
  _QWORD *v44; // r8
  __int64 v45; // rdx
  ULONG Protect[2]; // [rsp+28h] [rbp-38h]
  __int64 v48; // [rsp+30h] [rbp-30h]
  __int64 v49; // [rsp+38h] [rbp-28h]
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-18h] BYREF
  void *Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR v53; // [rsp+58h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+48h] BYREF

  v7 = a2 + a3;
  BaseAddress = 0LL;
  v8 = 0;
  Object = 0LL;
  *a5 = 0LL;
  AllocationType = 0;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  if ( v7 <= (unsigned int)dword_1C005133C )
    v7 = (unsigned int)dword_1C005133C;
  v12 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v12;
  if ( v12 < a2 )
    goto LABEL_40;
  if ( a4 == 3 )
    goto LABEL_21;
  if ( a4 == 4 )
    goto LABEL_22;
  if ( a4 - 5 <= 1 )
  {
LABEL_21:
    v20 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_23:
      v53 = v12;
      LODWORD(v16) = MmCreateSection(&Object, 0LL, 0LL, &v53, 4, v20, -1LL, 0LL);
      if ( (int)v16 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C0051788);
        v22 = WdLogNewEntry5_WdLowResource(v21);
        *(_QWORD *)(v22 + 24) = 1976LL;
LABEL_25:
        WdLogEvent5_WdLowResource(v22);
        goto LABEL_41;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v16 = inserted;
      if ( inserted < 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = Object;
        *(_QWORD *)(v27 + 32) = v16;
        WdLogEvent5_WdAssertion(v27);
        goto LABEL_41;
      }
      if ( a4 - 5 <= 1 )
      {
        v28 = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        v16 = v28;
        if ( v28 < 0 )
        {
          _InterlockedIncrement(&dword_1C0051784);
          goto LABEL_37;
        }
      }
      goto LABEL_31;
    }
LABEL_22:
    v20 = 134479872;
    goto LABEL_23;
  }
  v8 = 4;
  if ( a4 != 2 )
    v8 = 1028;
  v13 = 12288;
  if ( a4 != 2 )
    v13 = 8400896;
  AllocationType = v13 | 0x800000;
  if ( !a6 )
    AllocationType = v13;
  if ( dword_1C00511C8 )
    AllocationType &= ~0x1000u;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v8) < 0 )
  {
    AllocationType &= ~0x800000u;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v8);
    v16 = v14;
    if ( v14 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C00516D8);
LABEL_37:
      v22 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v22 + 24) = v16;
      goto LABEL_25;
    }
  }
  if ( (AllocationType & 0x1000) != 0 )
  {
    v11 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
    if ( !v11 )
    {
      v19 = WdLogNewEntry5_WdWarning(v18, v17);
      WdLogEvent5_WdWarning(v19);
LABEL_40:
      LODWORD(v16) = -1073741801;
LABEL_41:
      if ( a4 - 3 > 1 )
      {
        if ( a4 == 5 )
          goto LABEL_49;
        if ( a4 != 6 )
        {
          if ( v11 )
            MmUnsecureVirtualMemory(v11);
          if ( BaseAddress )
          {
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            BaseAddress = 0LL;
          }
LABEL_55:
          if ( v10 )
            VIDMM_LINEAR_POOL::`scalar deleting destructor'(v10);
          return (unsigned int)v16;
        }
      }
      if ( a4 - 5 > 1 )
      {
LABEL_51:
        if ( Object )
        {
          if ( Handle )
            ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          ObfDereferenceObject(Object);
        }
        goto LABEL_55;
      }
LABEL_49:
      if ( BaseAddress )
        MmUnmapViewInSystemSpace(BaseAddress);
      goto LABEL_51;
    }
  }
LABEL_31:
  v29 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v29 )
    v10 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v29);
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C00516DC);
    v31 = WdLogNewEntry5_WdLowResource(v30);
    *(_QWORD *)(v31 + 24) = 2094LL;
    WdLogEvent5_WdLowResource(v31);
    goto LABEL_40;
  }
  v32 = VIDMM_LINEAR_POOL::Init(v10, RegionSize, 0, 0LL, 0LL);
  v16 = v32;
  if ( v32 < 0 )
  {
    _InterlockedIncrement(&dword_1C00516E0);
    goto LABEL_37;
  }
  v33 = operator new[](0x68uLL, 0x31316956u, PagedPool);
  v36 = v33;
  if ( !v33 )
  {
    _InterlockedIncrement(&dword_1C00516E4);
    v37 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v37 + 24) = 2116LL;
    WdLogEvent5_WdLowResource(v37);
    goto LABEL_40;
  }
  *(_QWORD *)v33 = a1;
  v33[6] = 0;
  *((_QWORD *)v33 + 4) = BaseAddress;
  *((_QWORD *)v33 + 5) = RegionSize;
  v38 = 2;
  v39 = (AllocationType >> 23) & 1;
  v36[12] = v8;
  *((_QWORD *)v36 + 9) = v10;
  *((_QWORD *)v36 + 7) = v11;
  if ( a4 != 2 )
    v38 = 0;
  v36[20] = a4;
  v36[16] = v38 | v39;
  *((_QWORD *)v36 + 11) = Object;
  *((_QWORD *)v36 + 12) = Handle;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v34) + 24) = v36;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) += *((_QWORD *)v36 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  v40 = *(_QWORD **)(a1 + 8);
  v41 = *((_QWORD *)v36 + 5);
  if ( a4 == 1 )
  {
    v40[21] += v41;
  }
  else if ( a4 == 2 )
  {
    v40[23] += v41;
  }
  else
  {
    v40[25] += v41;
  }
  if ( bTracingEnabled )
  {
    v42 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v42 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v49) = 1;
      LODWORD(v48) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        &EventCreateProcessAllocation,
        v35,
        v42,
        RegionSize,
        *(_QWORD *)Protect,
        v48,
        v49);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v36 + 2);
  v45 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v44[1] = BlockListHead;
  *v44 = v45;
  *(_QWORD *)(v45 + 8) = v44;
  *(_QWORD *)BlockListHead = v44;
  *a5 = v36;
  return (unsigned int)v16;
}
