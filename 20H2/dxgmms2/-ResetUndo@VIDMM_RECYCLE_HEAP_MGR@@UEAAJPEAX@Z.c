/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00C2AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084CE4 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084D04 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00C2B68 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ResetUndo(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx
  VIDMM_PROCESS *v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE v11; // [rsp+30h] [rbp-48h] BYREF
  PRKPROCESS *v12; // [rsp+60h] [rbp-18h]

  v12 = (PRKPROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v12, &v11);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10, v5);
  v8 = VIDMM_RECYCLE_MULTIRANGE::ResetUndo(a2);
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v6);
  VIDMM_PROCESS::SafeDetach(v7, &v11);
  return v8;
}
