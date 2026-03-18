/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C006C540
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006C5E8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084CE4 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0084D04 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        unsigned __int8 a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  VIDMM_PROCESS *v11; // rcx
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE v15; // [rsp+30h] [rbp-58h] BYREF
  VIDMM_PROCESS *v16; // [rsp+60h] [rbp-28h]

  v16 = (VIDMM_PROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v16, &v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14, v9);
  v12 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, a4);
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v10);
  VIDMM_PROCESS::SafeDetach(v11, &v15);
  return v12;
}
