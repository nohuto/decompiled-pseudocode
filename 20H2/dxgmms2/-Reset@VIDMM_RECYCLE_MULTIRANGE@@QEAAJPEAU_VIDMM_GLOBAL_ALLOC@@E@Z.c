/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006C5E8
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C006C540 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C00612EC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0063698 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0063718 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006381C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C006C7AC (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C006FA94 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00C1FC8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00C3528 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v3; // r14d
  ULONG_PTR v4; // r9
  __int64 v6; // rsi
  __int64 v7; // rax
  int *v8; // rcx
  __int64 v9; // r8
  char v10; // r15
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // r13
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r12
  ULONG v18; // ebx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+28h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+48h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v32; // [rsp+88h] [rbp+50h]
  char v33; // [rsp+90h] [rbp+58h]
  PVOID v34; // [rsp+98h] [rbp+60h] BYREF

  v33 = a3;
  v32 = a2;
  v3 = 0;
  v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v34 = 0LL;
  RegionSize = v4;
  LODWORD(v6) = 0;
  v7 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  if ( *((_BYTE *)this + 153) )
  {
    LODWORD(v6) = -1071775472;
LABEL_24:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v8, &EventPerformanceWarning, v9, 18);
    goto LABEL_19;
  }
  v10 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v12 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 1);
  do
  {
    if ( *((_DWORD *)NextRange + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, NextRange);
      LOBYTE(BaseAddress) = 0;
      v15 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(NextRange, (bool *)&BaseAddress, v14);
      v17 = v15;
      if ( v15 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v16);
        v27[3] = NextRange;
        v27[4] = v17;
        v27[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v27);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v13, NextRange);
        v10 = 1;
      }
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      v10 = 1;
    else
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  v18 = 1028;
  v8 = *(int **)(*((_QWORD *)this + 10) + 32LL);
  v19 = *v8;
  if ( (unsigned int)(*v8 - 3) <= 3 )
  {
    if ( v19 != 3 )
      v18 = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1);
    if ( *((_BYTE *)this + 152) && (v8 = (int *)*((_QWORD *)this + 20)) != 0LL )
    {
      v8 = (int *)((char *)v8 + *((_QWORD *)this + 21));
      v3 = 1;
      v34 = v8;
    }
    else
    {
      LODWORD(v6) = -1071775472;
    }
  }
  else
  {
    v34 = (PVOID)*((_QWORD *)this + 6);
    v20 = 4;
    if ( v19 != 2 )
      v20 = 1028;
    v18 = v20;
  }
  if ( (int)v6 >= 0 )
  {
    v21 = VidMmAllocateVirtualMemory(&v34, &RegionSize, 0x80000u, v18);
    v6 = v21;
    if ( v21 < 0 )
    {
      v28 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v28 + 24) = v6;
      WdLogEvent5_WdError(v28);
    }
    else
    {
      VidMmiSetPriorityForMemoryPages(v32, v34, RegionSize);
      if ( v33 && !v3 )
      {
        BaseAddress = v34;
        NumberOfBytesToUnlock[0] = RegionSize;
        v22 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
        v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
        v25[3] = BaseAddress;
        v25[4] = NumberOfBytesToUnlock[0];
        v25[5] = v22;
        WdLogEvent5_WdEvent(v25);
      }
    }
  }
  if ( (_DWORD)v6 == -1071775472 )
    goto LABEL_24;
LABEL_19:
  if ( v3 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v6;
}
