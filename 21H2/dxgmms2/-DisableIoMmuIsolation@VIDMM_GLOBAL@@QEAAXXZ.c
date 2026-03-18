/*
 * XREFs of ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D6248
 * Callers:
 *     ?VidMmDisableIoMmuIsolation@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C002CCC0 (-VidMmDisableIoMmuIsolation@@YAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00149D0 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0018008 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ @ 0x1C001CEA4 (-Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C009BAE4 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DisableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v3[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v2,
      (VIDMM_GLOBAL *)((char *)this + 3832));
    *((_BYTE *)this + 40181) = 0;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v2);
    *((_BYTE *)this + 40179) = 0;
  }
  else
  {
    memset(&v3[1], 0, 0x54uLL);
    v3[0] = 131;
    if ( (unsigned int)Feature_Servicing_VidMmFlushEvictQueue__private_IsEnabled() )
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3, 1);
    else
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3);
  }
}
