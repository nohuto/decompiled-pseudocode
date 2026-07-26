/*
 * XREFs of ?CallbackThunk@?$KWorkItemBase@UBindEngine@Ndis@@V?$KWorkItem@UBindEngine@Ndis@@@@@@CAXPEAX@Z @ 0x1C010B770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KWorkItemBase<Ndis::BindEngine,KWorkItem<Ndis::BindEngine>>::CallbackThunk(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 40))(*(_QWORD *)(a1 + 32));
}
