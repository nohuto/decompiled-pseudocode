/*
 * XREFs of ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C00824D8
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00821F0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C008CA80 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C00BB2A4 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00112D0 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsWorkerThread @ 0x1C0011C40 (VidSchIsWorkerThread.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0082620 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0082740 (VidSchRegisterCompletionEvent.c)
 */

void __fastcall VIDMM_DMA_POOL::WaitDmaBufferNotBusy(
        VIDMM_DMA_POOL *this,
        struct _VIDMM_DMA_BUFFER *a2,
        char a3,
        unsigned __int8 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _QWORD v19[20]; // [rsp+28h] [rbp-59h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v15 + 32) = a2;
  }
  if ( a4 )
    *a4 = 0;
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[2]) = 0;
  v8 = *(_QWORD *)this;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 624LL)) )
  {
    v16 = *((unsigned int *)a2 + 12);
    v17 = *((_QWORD *)a2 + 5);
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v18[3] = 270LL;
    v18[4] = 22LL;
    v18[5] = a2;
    v18[6] = v17;
    v18[7] = v16;
    WdLogEvent5_WdCriticalError(v18);
    v8 = *(_QWORD *)this;
  }
  v11 = *((_DWORD *)a2 + 7);
  LOBYTE(v19[19]) = a3;
  if ( (v11 & 2) == 0 )
  {
    v12 = *((_QWORD *)this + 3);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 420) & 0x10) != 0 )
      {
        v19[3] = *(_QWORD *)(v12 + 296);
        v13 = v19[3] != 0LL ? 4 : 0;
        v14 = v19[4] & 0xFFFFFFFB;
      }
      else
      {
        v19[3] = *(_QWORD *)(v12 + 272);
        v13 = v19[3] != 0LL ? 2 : 0;
        v14 = v19[4] & 0xFFFFFFFD;
      }
      LODWORD(v19[4]) = v14 | v13;
    }
  }
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 624LL), v19);
  while ( *((_BYTE *)a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 624LL), v19, 1LL) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      break;
    }
  }
  VidSchiInterlockedRemoveEntryList(
    (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 624LL) + 1728LL),
    v19,
    0LL);
}
