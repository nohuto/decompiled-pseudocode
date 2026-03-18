/*
 * XREFs of ??_GKeyframeValue@@EEAAPEAXI@Z @ 0x18004D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

KeyframeValue *__fastcall KeyframeValue::`scalar deleting destructor'(KeyframeValue *this, char a2)
{
  *(_QWORD *)this = &KeyframeValue::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x68uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
