/*
 * XREFs of ??1CSparseStorage@@QEAA@XZ @ 0x180049DFC
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
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
      DefaultHeap::Free(*this);
    }
    else
    {
      DefaultHeap::Free(v1);
    }
  }
}
