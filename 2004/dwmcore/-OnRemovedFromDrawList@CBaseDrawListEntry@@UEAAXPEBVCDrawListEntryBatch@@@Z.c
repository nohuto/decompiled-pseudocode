/*
 * XREFs of ?OnRemovedFromDrawList@CBaseDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x180014C64
 * Callers:
 *     ?OnRemovedFromDrawList@CStateSettingDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z @ 0x180014BC0 (-OnRemovedFromDrawList@CStateSettingDrawListEntry@@UEAAXPEBVCDrawListEntryBatch@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBaseDrawListEntry::OnRemovedFromDrawList(
        CBaseDrawListEntry *this,
        const struct CDrawListEntryBatch *a2)
{
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  *((_DWORD *)this + 2) = v2 - 1;
}
