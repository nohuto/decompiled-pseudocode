/*
 * XREFs of ??_GCSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F41E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSharedMatrixTransform3DMarshaler *__fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedMatrixTransform3DMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
