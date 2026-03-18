/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C000ADC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 160);
  if ( v2 )
  {
    *v2 = &CBaseProcessor::`vftable';
    Win32FreePool(v2);
  }
  *((_QWORD *)this + 160) = 0LL;
}
