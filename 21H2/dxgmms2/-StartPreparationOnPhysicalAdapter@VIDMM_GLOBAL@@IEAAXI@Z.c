/*
 * XREFs of ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00669C8
 * Callers:
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C00640E4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023FCC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax

  v4 = (unsigned int)a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)this,
      &EventPagingStartPreparation,
      a3,
      *((_QWORD *)this + (unsigned int)a2 + 143));
  v5 = *((unsigned int *)this + v4 + 414);
  if ( (_DWORD)v5 != *((_DWORD *)this + v4 + 478) || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    v7 = WdLogNewEntry5_WdCriticalError(v5, a2);
    *(_QWORD *)(v7 + 24) = 270LL;
    *(_QWORD *)(v7 + 32) = 33LL;
    *(_QWORD *)(v7 + 40) = this;
    *(_OWORD *)(v7 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v7);
    LODWORD(v5) = *((_DWORD *)this + v4 + 414);
  }
  v6 = *((_DWORD *)this + v4 + 542);
  *((_DWORD *)this + v4 + 960) = 0;
  *((_DWORD *)this + v4 + 1088) = v6;
  *((_DWORD *)this + v4 + 1024) = v5;
}
