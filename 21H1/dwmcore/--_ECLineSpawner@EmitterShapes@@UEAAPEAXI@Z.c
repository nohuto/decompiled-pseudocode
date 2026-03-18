/*
 * XREFs of ??_ECLineSpawner@EmitterShapes@@UEAAPEAXI@Z @ 0x1801DB070
 * Callers:
 *     ??_ECFrictionAccelerator@@W7EAAPEAXI@Z @ 0x1800EDE80 (--_ECFrictionAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

EmitterShapes::CLineSpawner *__fastcall EmitterShapes::CLineSpawner::`vector deleting destructor'(
        EmitterShapes::CLineSpawner *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
