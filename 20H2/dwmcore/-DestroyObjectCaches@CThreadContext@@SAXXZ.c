/*
 * XREFs of ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18020E020
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801548C0 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180062CE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x18020DFE0 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void CThreadContext::DestroyObjectCaches(void)
{
  int Current; // eax
  struct CThreadContext *v1; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v3; // [rsp+30h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v3);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v1 = v3;
  CObjectCache::Destroy((struct CThreadContext *)((char *)v3 + 8));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 24));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 56));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 72));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 88));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 104));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 120));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 136));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 152));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 168));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 184));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 200));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 216));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 232));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 248));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 264));
}
