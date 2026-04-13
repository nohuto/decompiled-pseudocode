/*
 * XREFs of ?GetWellKnownWnfStateByName@WnfNameResolver@WnfHelper@@UEAAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180058190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WnfHelper::WnfNameResolver::GetWellKnownWnfStateByName(
        WnfHelper::WnfNameResolver *this,
        const unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  return CreativeFramework::Triggers::GetWellKnownWnfStateByName(a2, (const unsigned __int16 *)a3, a3);
}
