/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00F57B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F8F90 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C029FC1C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  char *v13; // r14
  struct _KTHREAD **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax

  if ( *((_BYTE *)this + 457) )
    return 0LL;
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 616LL)
                                                                               + 8LL)
                                                                   + 184LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                   a2,
                   0LL);
  if ( (_DWORD)v10 != -1071775486 )
    goto LABEL_3;
  if ( !a3 )
    goto LABEL_30;
  v13 = (char *)a4 + 8;
  if ( !*((_BYTE *)a4 + 32) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v19[3] = 275LL;
    v19[4] = 4LL;
    v19[5] = v13;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  v14 = (struct _KTHREAD **)*((_QWORD *)a4 + 3);
  *((_BYTE *)a4 + 32) = 0;
  if ( KeGetCurrentThread() != v14[23] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v14, *((char **)a4 + 5));
  *((_QWORD *)a4 + 5) = 0LL;
  if ( *((_BYTE *)a4 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  LOBYTE(v11) = 1;
  v10 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 616LL)
                                                                   + 8LL)
                                                       + 184LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          a2,
          v11);
  if ( *((_BYTE *)a4 + 144) )
  {
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a4 + 72), 0LL);
    v15 = *(unsigned int *)(*((_QWORD *)a4 + 11) + 200LL);
    if ( (_DWORD)v15 != 1 )
      goto LABEL_28;
  }
  if ( *((_BYTE *)a4 + 32) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v20[3] = 275LL;
    v20[4] = 4LL;
    v20[5] = v13;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  v9 = *((_QWORD *)a4 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v9 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v9 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventBlockThread, v18, 72);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a4 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a4 + 3), 0LL);
  }
  *((_QWORD *)a4 + 5) = 0LL;
  *((_BYTE *)a4 + 32) = 1;
  v8 = *(unsigned int *)(*((_QWORD *)a4 + 17) + 576LL);
  if ( (_DWORD)v8 == 1 )
  {
LABEL_3:
    if ( (int)v10 >= 0 )
      return (unsigned int)v10;
LABEL_30:
    v25 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v25 + 24) = (int)v10;
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdEvent(v25);
    if ( (_DWORD)v10 != -1071775486 && (_DWORD)v10 != -1073741130 && (_DWORD)v10 != -1071775232 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v28 + 24) = 3423LL;
      WdLogEvent5_WdAssertion(v28);
    }
    return (unsigned int)v10;
  }
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 8));
  if ( *((_BYTE *)a4 + 144) )
LABEL_28:
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  v23 = WdLogNewEntry5_WdEvent(v22, v21);
  *(_QWORD *)(v23 + 24) = v10;
  WdLogEvent5_WdEvent(v23);
  COREDEVICEACCESS::AcquireSharedUncheck(a4, v24);
  return 3221226166LL;
}
