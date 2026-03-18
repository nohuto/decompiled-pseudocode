/*
 * XREFs of ?GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C020E7FC
 * Callers:
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C020E77C (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 * Callees:
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C014D904 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::GetAllocationsForAllPlanesUnsafe(
        DISPLAY_SOURCE *this,
        struct _EX_RUNDOWN_REF **a2,
        unsigned int a3)
{
  struct _EX_RUNDOWN_REF **v4; // r14
  __int64 v6; // rax
  unsigned int i; // esi
  struct _EX_RUNDOWN_REF *v8; // rbp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 536LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 9246LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 934) < a3 )
    a3 = *((_DWORD *)this + 934);
  for ( i = 0; i < a3; ++v4 )
  {
    v8 = 0LL;
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal )
    {
      if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        v8 = *(struct _EX_RUNDOWN_REF **)LatestPlaneConfigInternal;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v11, v8);
    DXGALLOCATIONREFERENCE::MoveAssign(v4, &v11);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v11, v10);
    ++i;
  }
}
