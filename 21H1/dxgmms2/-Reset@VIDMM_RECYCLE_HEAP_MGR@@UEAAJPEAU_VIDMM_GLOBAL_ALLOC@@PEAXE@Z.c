/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00779D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077A78 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008539C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        unsigned __int8 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  VIDMM_PROCESS *v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE v14; // [rsp+30h] [rbp-58h] BYREF
  VIDMM_PROCESS *v15; // [rsp+60h] [rbp-28h]

  v15 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v15, &v14);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v8);
  v11 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, a4);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v9);
  VIDMM_PROCESS::SafeDetach(v10, &v14);
  return v11;
}
