/*
 * XREFs of ??1FxRegKey@@UEAA@XZ @ 0x1C0015B88
 * Callers:
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0015B10 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C0015B50 (--1FxPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxRegKey::~FxRegKey(FxRegKey *this, unsigned int a2, unsigned int a3)
{
  void *m_Key; // rcx

  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  m_Key = this->m_Key;
  if ( m_Key )
  {
    ZwClose(m_Key);
    this->m_Key = 0LL;
  }
  FxPagedObject::~FxPagedObject(this, a2, a3);
}
