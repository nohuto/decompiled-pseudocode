/*
 * XREFs of ??_GCSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FA700
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *__fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
