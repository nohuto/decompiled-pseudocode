/*
 * XREFs of ??1CThreadContext@@AEAA@XZ @ 0x180261A1C
 * Callers:
 *     ?FreeCurrent@CThreadContext@@SAXXZ @ 0x18002550C (-FreeCurrent@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x180261B0C (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void __fastcall CThreadContext::~CThreadContext(CThreadContext *this)
{
  CObjectCache::Destroy((CThreadContext *)((char *)this + 320));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 304));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 288));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 272));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 256));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 240));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 224));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 208));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 192));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 176));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 160));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 144));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 128));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 112));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 96));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 80));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 64));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 48));
  CObjectCache::Destroy((CThreadContext *)((char *)this + 32));
  CPtrArrayBase::Clear((CThreadContext *)((char *)this + 24));
}
