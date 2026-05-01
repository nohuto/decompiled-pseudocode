/*
 * XREFs of ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x180005B7C
 * Callers:
 *     ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800057C0 (-IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(PVOID P)
{
  BOOLEAN result; // al

  if ( P )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
