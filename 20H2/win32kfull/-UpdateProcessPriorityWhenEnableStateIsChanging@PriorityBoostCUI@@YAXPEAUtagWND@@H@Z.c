/*
 * XREFs of ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00C3490 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C4248 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C776C (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C77C0 (-GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C77FC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(
        PriorityBoostCUI *this,
        struct tagWND *a2)
{
  int v2; // esi
  const struct tagWND *NearestCoreWindowAncestor; // rdi
  struct tagWND *TopLevelHost; // rax
  int v6; // edx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (int)a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  NearestCoreWindowAncestor = CoreWindowProp::GetNearestCoreWindowAncestor(this);
  if ( (unsigned int)CoreWindowProp::IsPartOfCompositeApplication(NearestCoreWindowAncestor) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(NearestCoreWindowAncestor);
    if ( v2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)TopLevelHost + 2) + 424LL) + 820LL) & 0x60000) == 0 )
        goto LABEL_2;
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)this + 2), v6);
  }
LABEL_2:
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
