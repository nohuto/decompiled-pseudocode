/*
 * XREFs of ??_GCProjectedShadowSceneMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0005010
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
