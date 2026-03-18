/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x18028CBA8
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1800FEB2C (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x18028D0D4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this)
{
  void (***v2)(void); // rcx
  void (**v3)(void); // rdx

  v2 = (void (***)(void))*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    if ( *(_QWORD *)this )
      (*v3)();
    else
      v3[1]();
  }
}
