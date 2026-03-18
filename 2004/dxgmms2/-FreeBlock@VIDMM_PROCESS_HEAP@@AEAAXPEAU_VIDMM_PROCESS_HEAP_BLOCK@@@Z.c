/*
 * XREFs of ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00CE0C4
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CDA00 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CE244 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x1C0027FDC (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0028574 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0060ECC (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeBlock(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_BLOCK *a2)
{
  char *v2; // rax
  __int64 v4; // r8
  char **v6; // rdx
  int v7; // ecx
  void *v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  VIDMM_LINEAR_POOL *v15; // rcx

  v2 = (char *)a2 + 8;
  v4 = *((_QWORD *)a2 + 1);
  if ( *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v4 + 8) != (struct _VIDMM_PROCESS_HEAP_BLOCK *)((char *)a2 + 8)
    || (v6 = (char **)*((_QWORD *)a2 + 2), *v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    v8 = (void *)*((_QWORD *)a2 + 7);
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)a2 + 4, (PSIZE_T)a2 + 5, 0x8000u);
  }
  else
  {
    if ( (unsigned int)(v7 - 5) <= 1 )
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 4));
    ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
    VidMmDereferenceObjectAsync(*((PVOID *)a2 + 11));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *((_QWORD *)a2 + 5);
  --*(_DWORD *)(*((_QWORD *)this + 1) + 152LL);
  v9 = *((_DWORD *)a2 + 20);
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v9 == 1 )
  {
    v10[21] -= *((_QWORD *)a2 + 5);
  }
  else
  {
    v11 = v9 == 2;
    v12 = *((_QWORD *)a2 + 5);
    if ( v11 )
      v10[23] -= v12;
    else
      v10[25] -= v12;
  }
  if ( bTracingEnabled )
  {
    v13 = *((unsigned int *)a2 + 20);
    v14 = (unsigned int)(v13 - 3) > 3 ? *((_QWORD *)a2 + 4) : *((_QWORD *)a2 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt_EtwWriteTransfer(
        v13,
        &EventDestroyProcessAllocation,
        *((_QWORD *)a2 + 5),
        v14,
        *((_QWORD *)a2 + 5),
        v13,
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL),
        1);
  }
  v15 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 9);
  if ( v15 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v15);
  operator delete(a2);
}
