/*
 * XREFs of ??_GCArithmeticCompositeEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6610
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CArithmeticCompositeEffectMarshaler *__fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &DirectComposition::CFilterEffectMarshaler::`vftable';
  v4 = a2;
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    Win32FreePool(v5, a2, a3);
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
    Win32FreePool(v6, a2, a3);
  if ( (v4 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
