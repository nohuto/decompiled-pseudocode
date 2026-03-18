/*
 * XREFs of ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDevice@@@Z @ 0x180248D38
 * Callers:
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180249904 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180249C6C (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasEntry::NotifyOwner(CAtlasEntry *this, const struct CD3DDevice *a2)
{
  void (__fastcall ***v3)(_QWORD, const struct CD3DDevice *); // rcx
  void (__fastcall **v4)(_QWORD, const struct CD3DDevice *); // r8

  v3 = (void (__fastcall ***)(_QWORD, const struct CD3DDevice *))*((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    if ( *(_QWORD *)this )
      (*v4)(v3, a2);
    else
      v4[1](v3, a2);
  }
}
