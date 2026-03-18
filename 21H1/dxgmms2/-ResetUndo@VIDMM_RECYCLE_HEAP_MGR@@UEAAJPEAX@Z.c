/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00C30A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008539C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00C3138 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ResetUndo(VIDMM_RECYCLE_HEAP_MGR *this, VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  VIDMM_PROCESS *v6; // rcx
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE v10; // [rsp+30h] [rbp-48h] BYREF
  PRKPROCESS *v11; // [rsp+60h] [rbp-18h]

  v11 = (PRKPROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v11, &v10);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9, v4);
  v7 = VIDMM_RECYCLE_MULTIRANGE::ResetUndo(a2);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v5);
  VIDMM_PROCESS::SafeDetach(v6, &v10);
  return v7;
}
