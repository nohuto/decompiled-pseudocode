/*
 * XREFs of ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C40FC
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C2134 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C00C17B4 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C00C17E4 (_lambda_6b19aae8bfffc3c0d0465fc64ed598e8_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00C1814 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00C3490 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C4248 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C77C0 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C77FC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall PriorityBoostCUI::TransitionForegroundPriority(
        PriorityBoostCUI *this,
        struct tagTHREADINFO *a2,
        struct tagWND *a3)
{
  const struct tagWND *NearestCoreWindowAncestor; // rax
  const struct tagWND *TopLevelHost; // r14
  const struct tagWND *v7; // rax
  struct tagWND *v8; // rbp
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a2);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
  v7 = CoreWindowProp::GetNearestCoreWindowAncestor(qword_1C033B6E8);
  v8 = CoreWindowProp::GetTopLevelHost(v7);
  if ( TopLevelHost != v8
    || !TopLevelHost && (!this || !gptiForeground || *((_QWORD *)this + 53) != *(_QWORD *)(gptiForeground + 424LL)) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
    if ( gptiForeground )
      anonymous_namespace_::RequestPriorityUpdate(gptiForeground, 1);
    if ( v8 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)v8 + 2), 1);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v8);
    if ( this )
      anonymous_namespace_::RequestPriorityUpdate((__int64)this, 0);
    lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator()(v9, (__int64)TopLevelHost);
    CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(TopLevelHost, v11);
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( qword_1C033B6E8 != a2 )
  {
    if ( qword_1C033B6E8 )
      HMAssignmentUnlock(&qword_1C033B6E8);
    if ( a2 )
    {
      v10[0] = &qword_1C033B6E8;
      v10[1] = a2;
      HMAssignmentLock(v10);
    }
  }
}
