/*
 * XREFs of ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAA_N_NPEA_N@Z @ 0x1C00DF104
 * Callers:
 *     ?FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z @ 0x1C00DE83C (-FlushDeferredEvictions@VIDMM_WORKER_THREAD@@AEAA_NPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C000211C (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 */

char __fastcall VIDMM_WORKER_THREAD::ProcessPendingTerminations(KSPIN_LOCK **this, char a2, bool *a3)
{
  char v6; // bl
  struct VIDMM_ALLOC *NextPendingTermination; // rdi
  KSPIN_LOCK *v8; // rcx
  _QWORD v10[10]; // [rsp+40h] [rbp-68h] BYREF
  bool v11; // [rsp+B0h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v12; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 0;
  NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*this, a3);
  if ( NextPendingTermination )
  {
    v6 = 1;
    do
    {
      memset(v10, 0, sizeof(v10));
      v8 = *this;
      v12 = 0LL;
      v10[2] = NextPendingTermination;
      LODWORD(v10[0]) = 200;
      v11 = 0;
      VIDMM_GLOBAL::ProcessDeferredCommand(
        (VIDMM_GLOBAL *)v8,
        (unsigned __int64)v10,
        (__int64)&v11,
        0,
        0LL,
        0LL,
        0,
        &v12);
      if ( !a2 )
        break;
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*this, a3);
    }
    while ( NextPendingTermination );
  }
  return v6;
}
