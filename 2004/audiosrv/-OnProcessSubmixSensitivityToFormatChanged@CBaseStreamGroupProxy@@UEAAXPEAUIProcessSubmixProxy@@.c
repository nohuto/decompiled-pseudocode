/*
 * XREFs of ?OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800E6920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseStreamGroupProxy::OnProcessSubmixSensitivityToFormatChanged(
        CBaseStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a2 + 136LL))(a2);
  CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(this, v3 != 0 ? 1 : -1);
}
