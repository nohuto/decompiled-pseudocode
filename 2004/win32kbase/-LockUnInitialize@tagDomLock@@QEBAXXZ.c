/*
 * XREFs of ?LockUnInitialize@tagDomLock@@QEBAXXZ @ 0x1C0057990
 * Callers:
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C0057870 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockUnInitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
