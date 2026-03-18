/*
 * XREFs of ??_ECLineSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x1801D6860
 * Callers:
 *     ??_ECFrictionAccelerator@@W7EAAPEAXI@Z @ 0x1800F0A60 (--_ECFrictionAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CLineSpawner *__fastcall EmitterShapes::CLineSpawner::`vector deleting destructor'(
        EmitterShapes::CLineSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
