/*
 * XREFs of ??_ECSharedWriteScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FA330
 * Callers:
 *     ??_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00D4FA0 (--_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteScalarMarshaler *__fastcall DirectComposition::CSharedWriteScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteScalarMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CSharedWriteScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
