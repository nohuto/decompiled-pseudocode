/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x18007DC30
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x1800953F0 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSparseStorage::~CSparseStorage(void **this)
{
  void *v1; // rax

  v1 = *this;
  if ( *this != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *((_DWORD *)v1 + 1) && *((_BYTE *)v1 + 8) )
    {
      RaiseFailFastException(0LL, 0LL, 0);
      operator delete(*this);
    }
    else
    {
      operator delete(v1);
    }
  }
}
