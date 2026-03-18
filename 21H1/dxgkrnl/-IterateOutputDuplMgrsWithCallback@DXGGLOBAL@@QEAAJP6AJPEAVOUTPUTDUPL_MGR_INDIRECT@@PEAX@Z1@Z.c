/*
 * XREFs of ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C00DD408
 * Callers:
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00DD38C (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        DXGGLOBAL *this,
        int (*a2)(struct OUTPUTDUPL_MGR_INDIRECT *, void *),
        void *a3)
{
  _QWORD **v4; // rsi
  __int64 v6; // rdx
  _QWORD *i; // rbx
  int v8; // edi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD **)((char *)this + 1360);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 1320), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  for ( i = *v4; i != v4 && i; i = (_QWORD *)*i )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD *, void *))a2)(i, a3);
    if ( v8 < 0 )
      goto LABEL_4;
  }
  v8 = 0;
LABEL_4:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v6);
  return (unsigned int)v8;
}
