/*
 * XREFs of ??_GCSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F9C10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedMatrixTransform3DMarshaler *__fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedMatrixTransform3DMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
