/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00E7398
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00E7300 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0081428 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00E6938 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00E7558 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebp
  unsigned __int64 v5; // r8
  int v6; // edi
  VIDMM_RECYCLE_MULTIRANGE *v7; // rbx
  int v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // eax
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v6 = 0;
  v13 = 0LL;
  v7 = this;
  v14 = v5;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, v5, a4) + 24) = this;
    v5 = v14;
  }
  if ( !*((_BYTE *)v7 + 153) )
  {
    v8 = 1028;
    v9 = **(_DWORD **)(*((_QWORD *)v7 + 10) + 32LL);
    if ( (unsigned int)(v9 - 3) > 3 )
    {
      v13 = (void *)*((_QWORD *)v7 + 6);
      v10 = 4;
      if ( v9 != 2 )
        v10 = 1028;
      v8 = v10;
    }
    else
    {
      if ( v9 != 3 )
        v8 = 4;
      VIDMM_RECYCLE_MULTIRANGE::Map(v7, 0LL, v5, 1u);
      if ( *((_BYTE *)v7 + 152) && (this = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v7 + 20)) != 0LL )
      {
        this = (VIDMM_RECYCLE_MULTIRANGE *)((char *)this + *((_QWORD *)v7 + 21));
        v4 = 1;
        v13 = this;
      }
      else
      {
        v6 = -1071775472;
      }
      if ( v6 < 0 )
      {
LABEL_19:
        if ( v6 != -1071775472 )
          goto LABEL_23;
        goto LABEL_20;
      }
    }
    v11 = VidMmAllocateVirtualMemory(&v13, &v14, 0x1000000, v8);
    v6 = v11;
    if ( v11 < 0 )
      WdLogSingleEntry1(4LL, v11);
    goto LABEL_19;
  }
  v6 = -1071775472;
LABEL_20:
  if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventPerformanceWarning, v5, 18);
LABEL_23:
  if ( v4 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(v7);
  return (unsigned int)v6;
}
