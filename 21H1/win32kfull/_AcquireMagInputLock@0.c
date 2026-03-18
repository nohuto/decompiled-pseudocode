/*
 * XREFs of _AcquireMagInputLock@0 @ 0x178DBA
 * Callers:
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 *     _AddMagnificationOutputTransform@4 @ 0xEF322 (_AddMagnificationOutputTransform@4.c)
 *     _ApplyMagInputTransform@8 @ 0x13ECD5 (_ApplyMagInputTransform@8.c)
 *     _TransformForInputMagnification@12 @ 0x13EFD9 (_TransformForInputMagnification@12.c)
 *     _EditionMagnificationMousePosition@4 @ 0x178DE8 (_EditionMagnificationMousePosition@4.c)
 * Callees:
 *     _KeGetCurrentThread@0 @ 0xED867 (_KeGetCurrentThread@0.c)
 */

signed __int32 __stdcall AcquireMagInputLock()
{
  PKTHREAD CurrentThread; // esi
  signed __int32 result; // eax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&gpMagInputLock, (signed __int32)CurrentThread, 0);
    if ( !result )
      break;
    UserSleep(1);
  }
  return result;
}
