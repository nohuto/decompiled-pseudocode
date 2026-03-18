/*
 * XREFs of ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x1C000D990
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x1C000D9BC (--_GCCompositionFrameCollection@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CCompositionFrameCollection::Release(CCompositionFrameCollection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    CCompositionFrameCollection::`scalar deleting destructor'(this, a2);
  return v2;
}
