/*
 * XREFs of ??1CThreadContext@@AEAA@XZ @ 0x18020DF10
 * Callers:
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800DD0F8 (-FreeCurrent@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x18020DFE0 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void __fastcall CThreadContext::~CThreadContext(CThreadContext *this)
{
  CObjectCache::Destroy((CThreadContext *)((char *)this + 264));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 248));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 232));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 216));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 200));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 184));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 168));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 152));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 136));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 120));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 104));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 88));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 72));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 56));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 40));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 24));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 8));
  CPtrArrayBase::Clear(this);
}
