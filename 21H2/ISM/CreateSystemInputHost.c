/*
 * XREFs of CreateSystemInputHost @ 0x18001EA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CreateSystemInputHost(void *a1, struct ISystemInputHost **a2, bool a3)
{
  return OneCoreUAPInputHost::Create(a1, a2, a3);
}
