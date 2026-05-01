/*
 * XREFs of ?v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803A88D0
 * Callers:
 *     ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803A8780 (-v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionTargetBase::v_PrepareAppRects(
        CAppTransitionTargetBase *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, char *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)a2 + 56LL))(
    a2,
    0LL,
    (char *)this + 172,
    a4);
  (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, char *))(*(_QWORD *)a2 + 72LL))(
    a2,
    0LL,
    (char *)this + 188);
  (*(void (__fastcall **)(struct IAppLayoutOperationItem *, __int64, char *))(*(_QWORD *)a2 + 56LL))(
    a2,
    1LL,
    (char *)this + 204);
  (*(void (__fastcall **)(struct IAppLayoutOperationItem *, __int64, char *))(*(_QWORD *)a2 + 72LL))(
    a2,
    1LL,
    (char *)this + 220);
  if ( (*(unsigned __int8 (__fastcall **)(CAppTransitionTargetBase *))(*(_QWORD *)this + 72LL))(this) )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct ITemporaryAppVisual *, _QWORD, char *))(*(_QWORD *)a3 + 24LL))(
        a3,
        0LL,
        (char *)this + 236);
      (*(void (__fastcall **)(struct ITemporaryAppVisual *, __int64, char *))(*(_QWORD *)a3 + 24LL))(
        a3,
        1LL,
        (char *)this + 252);
    }
  }
}
