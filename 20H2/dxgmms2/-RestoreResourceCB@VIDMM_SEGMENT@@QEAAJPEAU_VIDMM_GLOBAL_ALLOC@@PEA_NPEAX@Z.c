/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B4550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015BD0 (VidSchMarkDeviceAsError.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C006DBB0 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C82D0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::RestoreResourceCB(VIDMM_SEGMENT *this, struct _KTHREAD ***a2, bool *a3, void *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  struct _VIDMM_GLOBAL_ALLOC *i; // rdi
  _QWORD *j; // rsi
  __int64 v19; // rdx

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((struct _VIDMM_GLOBAL_ALLOC *)a2) )
  {
    v8 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdEvent(v8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v9, &EventVidMmRestoreResource, v10, a2);
    v11 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, 1u);
    v15 = v11;
    if ( v11 < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdAssertion(v16);
      for ( i = (struct _VIDMM_GLOBAL_ALLOC *)a2[36];
            i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 36);
            i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
      {
        for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL));
      }
    }
    *((_BYTE *)a2 + 90) = 1;
    ExReleasePushLockExclusiveEx(a2 + 59, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release(a2[39], v19);
  }
  return 0LL;
}
