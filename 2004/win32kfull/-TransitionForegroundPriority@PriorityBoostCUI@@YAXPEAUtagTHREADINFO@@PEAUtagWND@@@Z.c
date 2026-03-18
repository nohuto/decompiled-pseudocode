/*
 * XREFs of ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00351B8
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034CC4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035304 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035450 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003548C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00354C8 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0035800 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C0035864 (_lambda_6b19aae8bfffc3c0d0465fc64ed598e8_--operator().c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C0035894 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 */

void __fastcall PriorityBoostCUI::TransitionForegroundPriority(
        PriorityBoostCUI *this,
        struct tagTHREADINFO *a2,
        struct tagWND *a3)
{
  const struct tagWND *NearestCoreWindowAncestor; // rax
  struct tagWND *TopLevelHost; // r14
  const struct tagWND *v7; // rax
  struct tagWND *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(a2);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
  v7 = CoreWindowProp::GetNearestCoreWindowAncestor(qword_1C033C6C8);
  v8 = CoreWindowProp::GetTopLevelHost(v7);
  if ( TopLevelHost != v8
    || !TopLevelHost && (!this || !gptiForeground || *((_QWORD *)this + 52) != *(_QWORD *)(gptiForeground + 416LL)) )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
    if ( gptiForeground )
      anonymous_namespace_::RequestPriorityUpdate(gptiForeground, 1LL);
    if ( v8 )
      anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)v8 + 2), 1LL);
    CoreWindowProp::ForEachDescendantInComponentHierarchy<void (*)(tagWND const *)>(v8);
    if ( this )
      anonymous_namespace_::RequestPriorityUpdate(this, 0LL);
    lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator()(v9, TopLevelHost);
    LOBYTE(v10) = v12;
    CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(TopLevelHost, v10);
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( qword_1C033C6C8 != a2 )
  {
    if ( qword_1C033C6C8 )
      HMAssignmentUnlock(&qword_1C033C6C8);
    if ( a2 )
    {
      v11[0] = &qword_1C033C6C8;
      v11[1] = a2;
      HMAssignmentLock(v11);
    }
  }
}
