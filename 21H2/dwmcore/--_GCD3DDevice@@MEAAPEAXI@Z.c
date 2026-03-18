/*
 * XREFs of ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x180020CC0
 * Callers:
 *     ??_ECD3DDevice@@OBA@EAAPEAXI@Z @ 0x1801082B0 (--_ECD3DDevice@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CD3DDevice *__fastcall CD3DDevice::`scalar deleting destructor'(CD3DDevice *this, char a2)
{
  CD3DDevice::~CD3DDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x900uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
