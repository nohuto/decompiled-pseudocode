/*
 * XREFs of ??_ECPathEdgeSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DDFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
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
