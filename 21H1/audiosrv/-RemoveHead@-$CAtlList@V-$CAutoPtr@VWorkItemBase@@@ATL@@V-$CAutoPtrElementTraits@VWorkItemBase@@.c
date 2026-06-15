/*
 * XREFs of ?RemoveHead@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAA?AV?$CAutoPtr@VWorkItemBase@@@2@XZ @ 0x18013ECB8
 * Callers:
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x18006962C (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18013E398 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 */

__int64 *__fastcall ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveHead(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = (__int64 *)*a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = v3[2];
  v3[2] = 0LL;
  *a2 = v4;
  v5 = *v3;
  *a1 = *v3;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode((__int64)a1, v3);
  return a2;
}
