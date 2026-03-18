/*
 * XREFs of ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0088898
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C009FBA4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  int v5; // ecx
  int v6; // eax

  v4 = a2;
  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + a2 + 143));
  v5 = *((_DWORD *)this + v4 + 414);
  if ( v5 != *((_DWORD *)this + v4 + 478) || *((_DWORD *)this + v4 + 542) != *((_DWORD *)this + v4 + 606) )
  {
    WdLogSingleEntry5(0LL, 270LL, 33LL, this, 0LL, 0LL);
    v5 = *((_DWORD *)this + v4 + 414);
  }
  v6 = *((_DWORD *)this + v4 + 542);
  *((_DWORD *)this + v4 + 964) = 0;
  *((_DWORD *)this + v4 + 1092) = v6;
  *((_DWORD *)this + v4 + 1028) = v5;
}
