/*
 * XREFs of ??_ECPathEdgeSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DEAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

EmitterShapes::CPathEdgeSpawner *__fastcall EmitterShapes::CPathEdgeSpawner::`vector deleting destructor'(
        EmitterShapes::CPathEdgeSpawner *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
