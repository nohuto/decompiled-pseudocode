/*
 * XREFs of ?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18015B1A4
 * Callers:
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x1801577DC (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::details::DestroyThreadPoolWork<2>::Destroy(PTP_WORK pwk)
{
  CloseThreadpoolWork(pwk);
}
