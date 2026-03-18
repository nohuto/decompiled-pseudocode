/*
 * XREFs of ??_ECSharedReadScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FA300
 * Callers:
 *     ??_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00D4F90 (--_ECSharedReadScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedReadScalarMarshaler *__fastcall DirectComposition::CSharedReadScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedReadScalarMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *((_QWORD *)this + 2) = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
