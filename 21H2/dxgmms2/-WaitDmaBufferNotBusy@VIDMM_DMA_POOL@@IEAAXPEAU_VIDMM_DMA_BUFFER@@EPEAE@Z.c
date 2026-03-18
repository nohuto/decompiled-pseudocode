/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0098658
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0098370 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00E0D38 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchIsWorkerThread @ 0x1C00134F0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  char v5; // r15
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  _QWORD v14[20]; // [rsp+38h] [rbp-59h] BYREF

  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v13 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[2]) = 0;
  v8 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 632LL)) )
  {
    WdLogSingleEntry5(0LL, 270LL, 22LL, a2, *((_QWORD *)a2 + 5), *((unsigned int *)a2 + 12));
    v8 = *(_QWORD *)this;
  }
  v9 = *((_DWORD *)a2 + 7);
  LOBYTE(v14[19]) = v5;
  if ( (v9 & 2) == 0 )
  {
    v10 = *((_QWORD *)this + 3);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 404) & 0x10) != 0 )
      {
        v14[3] = *(_QWORD *)(v10 + 280);
        v11 = v14[3] != 0LL ? 4 : 0;
        v12 = v14[4] & 0xFFFFFFFB;
      }
      else
      {
        v14[3] = *(_QWORD *)(v10 + 256);
        v11 = v14[3] != 0LL ? 2 : 0;
        v12 = v14[4] & 0xFFFFFFFD;
      }
      LODWORD(v14[4]) = v12 | v11;
    }
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 632LL), (__int64)v14);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(
                         *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 632LL),
                         (__int64)v14,
                         1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 632LL) + 1744LL),
    v14,
    0LL);
}
