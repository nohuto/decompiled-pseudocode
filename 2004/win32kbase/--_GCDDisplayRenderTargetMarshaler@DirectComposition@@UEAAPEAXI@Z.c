/*
 * XREFs of ??_GCDDisplayRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0910
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CDDisplayRenderTargetMarshaler *__fastcall DirectComposition::CDDisplayRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
