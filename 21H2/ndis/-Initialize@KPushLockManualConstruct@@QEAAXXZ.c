/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00F89A8
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0145928 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C01469B4 (-ndisPcwInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
