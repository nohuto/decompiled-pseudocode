/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D68C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01D65D0 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = a2;
  DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool((__int64)this, v5, v6);
  return this;
}
