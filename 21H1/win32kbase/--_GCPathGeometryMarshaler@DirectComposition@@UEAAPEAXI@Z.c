/*
 * XREFs of ??_GCPathGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003C770
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CPathGeometryMarshaler *__fastcall DirectComposition::CPathGeometryMarshaler::`scalar deleting destructor'(
        DirectComposition::CPathGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
