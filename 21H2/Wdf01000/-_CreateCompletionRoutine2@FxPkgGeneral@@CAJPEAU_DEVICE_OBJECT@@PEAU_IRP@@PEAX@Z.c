/*
 * XREFs of ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C008E180
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x1C000CAB0 (-PropagatePendingReturned@FxIrp@@QEAAXXZ.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049B14 (-Complete@FxRequest@@QEAAJJ@Z.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine2(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        void *Context)
{
  __int64 v3; // r9
  FxRequest *v4; // r8
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxIrp::PropagatePendingReturned(&irp);
  FxRequest::Complete(v4, *(_DWORD *)(v3 + 48), (__int64)v4, v3);
  return 3221225494LL;
}
