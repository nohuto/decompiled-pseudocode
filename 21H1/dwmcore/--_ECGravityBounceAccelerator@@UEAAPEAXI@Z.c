/*
 * XREFs of ??_ECGravityBounceAccelerator@@UEAAPEAXI@Z @ 0x1801DB098
 * Callers:
 *     ??_ECGravityBounceAccelerator@@W7EAAPEAXI@Z @ 0x1800EDE90 (--_ECGravityBounceAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::`vector deleting destructor'(
        CGravityBounceAccelerator *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
