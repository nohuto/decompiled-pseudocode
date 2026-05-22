/*
 * XREFs of ?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x18015B664
 * Callers:
 *     ??1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ @ 0x180157C9C (--1CmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::details::DestroyThreadPoolWork<2>::Destroy(PTP_WORK pwk)
{
  CloseThreadpoolWork(pwk);
}
