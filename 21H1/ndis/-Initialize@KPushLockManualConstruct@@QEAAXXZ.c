/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00F87F8
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01458D8 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1C0146964 (-ndisPcwInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
