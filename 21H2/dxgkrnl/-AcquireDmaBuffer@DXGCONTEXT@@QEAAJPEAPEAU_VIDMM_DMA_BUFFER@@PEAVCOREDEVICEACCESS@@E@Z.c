/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C032F268 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C03322A4 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C033DA14 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  struct _VIDMM_DMA_BUFFER **v6; // r14
  int v8; // esi
  int v9; // r15d
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v15; // r8
  int v16; // eax
  unsigned int v17; // esi
  char *v18; // rdx

  v6 = a2;
  if ( *((_BYTE *)this + 441) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  v8 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v8 = *((_DWORD *)this + 18);
  if ( !*((_QWORD *)this + 29) )
  {
    v9 = *((_DWORD *)this + 26);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 448LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
            *((unsigned int *)this + 100),
            *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
            this,
            1,
            *((_DWORD *)this + 50),
            v8,
            v9,
            *((_DWORD *)this + 51),
            *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v10;
    if ( v10 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 648LL)
                                                           + 8LL)
                                               + 456LL))(v10);
      if ( (v11 & 0x80000000) == 0 )
      {
        *((_DWORD *)this + 53) = v8;
        *((_DWORD *)this + 54) = v9;
        goto LABEL_9;
      }
    }
    else
    {
      v11 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 464LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    WdLogSingleEntry1(3LL, this);
    return v11;
  }
LABEL_9:
  v12 = *((_QWORD *)this + 29);
  LOBYTE(a2) = 1;
  v13 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_DMA_BUFFER **, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 504LL))(
          v12,
          a2,
          0LL,
          v6);
  v11 = v13;
  if ( v13 != -1071775486 )
  {
    if ( v13 < 0 )
      WdLogSingleEntry2(4LL, this, v13);
    return v11;
  }
  if ( !a3 )
    return v11;
  COREDEVICEACCESS::Release(a3);
  LOBYTE(v15) = a4;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL)
                                                                                         + 504LL))(
          v12,
          0LL,
          v15,
          v6);
  v16 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
    return v11;
  WdLogSingleEntry2(4LL, this, v16);
  COREDEVICEACCESS::AcquireSharedUncheck(a3, v18);
  return v17;
}
