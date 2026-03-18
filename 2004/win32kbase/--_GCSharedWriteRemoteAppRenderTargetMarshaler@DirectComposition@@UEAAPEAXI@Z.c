/*
 * XREFs of ??_GCSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F4CD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
