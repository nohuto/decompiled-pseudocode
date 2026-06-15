/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x18013DC70
 * Callers:
 *     ??1?$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ @ 0x18013CFA4 (--1-$CAutoPtrList@VWorkItemBase@@@ATL@@QEAA@XZ.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x18013CFB0 (--1AudioDeviceMgr@@MEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18013D3B8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x18013DD30 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1800525EC (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18013D3B8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 */

void __fastcall ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
