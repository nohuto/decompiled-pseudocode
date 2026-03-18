/*
 * XREFs of ??_EFxMemoryBufferFromPool@@MEAAPEAXI@Z @ 0x1C000F310
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C000FB80 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 */

FxMemoryPagedBufferFromPool *__fastcall FxMemoryBufferFromPool::`vector deleting destructor'(
        FxMemoryPagedBufferFromPool *this,
        char a2)
{
  FX_POOL_TRACKER *p_Blink; // rcx

  FxMemoryBufferFromPool::~FxMemoryBufferFromPool(this);
  if ( (a2 & 1) != 0 )
  {
    p_Blink = (FX_POOL_TRACKER *)&this[-1].m_ChildEntry.Blink;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_Blink = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_Blink);
  }
  return this;
}
