/*
 * XREFs of ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00BEACC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007B170 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  void *v16; // rcx

  if ( *(_QWORD *)(a1 + 40984) )
  {
    v13 = a1 + 41000;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v14 = operator new[](0x40uLL, 0x32356956u, PagedPool);
    if ( v14 )
    {
      v15 = *(unsigned int *)(a1 + 40992);
      if ( (_DWORD)v15 == dword_1C00513AC )
      {
        *(_DWORD *)(a1 + 40992) = 0;
        v15 = 0LL;
      }
      v16 = *(void **)(*(_QWORD *)(a1 + 40984) + 24 * v15 + 16);
      if ( v16 )
        operator delete(v16);
      v14[15] = a9;
      *((_QWORD *)v14 + 5) = a7;
      *((_QWORD *)v14 + 6) = a8;
      *((_QWORD *)v14 + 1) = a2[4];
      *(_QWORD *)v14 = *a2;
      v14[14] = a5;
      *((_QWORD *)v14 + 4) = a6;
      *((_QWORD *)v14 + 2) = a3;
      *((_QWORD *)v14 + 3) = a4;
      *(_QWORD *)(*(_QWORD *)(a1 + 40984) + 24LL * *(unsigned int *)(a1 + 40992)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*(_QWORD *)(a1 + 40984) + 24LL * *(unsigned int *)(a1 + 40992) + 16) = v14;
      *(_DWORD *)(*(_QWORD *)(a1 + 40984) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 40992))++ + 8) = 1;
    }
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
}
