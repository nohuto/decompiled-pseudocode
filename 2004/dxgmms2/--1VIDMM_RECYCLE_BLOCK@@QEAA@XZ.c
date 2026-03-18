/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C005E7AC
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0001008 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027FDC (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0060ECC (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00BBD88 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  PVOID *v2; // rsi
  void *v3; // rcx
  unsigned int *v4; // r8
  ULONG_PTR v5; // r9
  void *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int *v14; // rcx
  PVOID v15; // r9
  __int64 v16; // rax
  VIDMM_RECYCLE_BLOCK **v17; // rdx
  VIDMM_RECYCLE_BLOCK **v18; // rcx
  _QWORD *v19; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v2 = (PVOID *)((char *)this + 40);
  v3 = (void *)*((_QWORD *)this + 5);
  v4 = (unsigned int *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 6) - (_QWORD)v3;
  RegionSize = v5;
  v6 = (void *)*v4;
  if ( (unsigned int)((_DWORD)v6 - 9) <= 1 )
  {
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v6,
        *((_QWORD *)this + 15),
        v5,
        1);
  }
  else if ( (unsigned int)((_DWORD)v6 - 3) > 3 )
  {
    if ( v3 )
    {
      v9 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, &RegionSize, 0x8000u);
      v11 = v9;
      v12 = v9 + 0x80000000;
      if ( (int)v12 >= 0 && v9 != -1073741558 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v6, v10);
        v19[3] = *v2;
        v19[4] = this;
        v19[5] = v11;
        v19[6] = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL);
        WdLogEvent5_WdAssertion(v19);
      }
    }
  }
  else
  {
    if ( (unsigned int)((_DWORD)v6 - 5) <= 1 && v3 )
      MmUnmapViewInSystemSpace(v3);
    v7 = (void *)*((_QWORD *)this + 7);
    if ( !v7 || *((_QWORD *)this + 8) )
    {
      v8 = *((_QWORD *)this + 8);
      if ( !v8 )
        goto LABEL_13;
      ObCloseHandle((HANDLE)v8, (v8 & 0xFFFFFFFF80000000uLL) == 0);
      v7 = (void *)*((_QWORD *)this + 7);
    }
    VidMmDereferenceObjectAsync(v7);
  }
LABEL_13:
  v13 = *((_QWORD *)this + 17);
  if ( v13 )
  {
    operator delete(*(void **)v13);
    operator delete(*((void **)this + 17));
  }
  if ( bTracingEnabled )
  {
    v14 = (unsigned int *)*((_QWORD *)this + 4);
    v6 = (void *)*v14;
    v15 = (unsigned int)((_DWORD)v6 - 3) <= 3 ? (PVOID)*((_QWORD *)this + 7) : *v2;
    v13 = *(_QWORD *)(*((_QWORD *)v14 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt_EtwWriteTransfer(
        v13,
        &EventDestroyProcessAllocation,
        *(_QWORD *)(v13 + 8),
        v15,
        RegionSize,
        (_DWORD)v6,
        *(_QWORD *)(v13 + 8),
        1);
  }
  v16 = WdLogNewEntry5_WdEvent(v13, v6);
  *(_QWORD *)(v16 + 24) = this;
  WdLogEvent5_WdEvent(v16);
  v17 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v17[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v18 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v18 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v18 = (VIDMM_RECYCLE_BLOCK *)v17;
  v17[1] = (VIDMM_RECYCLE_BLOCK *)v18;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
