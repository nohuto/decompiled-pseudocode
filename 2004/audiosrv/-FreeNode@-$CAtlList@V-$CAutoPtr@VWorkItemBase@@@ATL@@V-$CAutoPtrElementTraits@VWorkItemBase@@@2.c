/*
 * XREFs of ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18013E048
 * Callers:
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x18013E900 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAA?AV?$CAutoPtr@VWorkItemBase@@@2@XZ @ 0x18013E968 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x18013E900 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll(a1);
  return result;
}
