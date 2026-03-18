/*
 * XREFs of ??_ECSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FA020
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedWritePrimitiveColorMarshaler *__fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWritePrimitiveColorMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedWritePrimitiveColorMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
