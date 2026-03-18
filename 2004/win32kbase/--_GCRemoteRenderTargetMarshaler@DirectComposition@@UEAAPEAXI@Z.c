/*
 * XREFs of ??_GCRemoteRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00CC540
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CRemoteRenderTargetMarshaler *__fastcall DirectComposition::CRemoteRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRemoteRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
