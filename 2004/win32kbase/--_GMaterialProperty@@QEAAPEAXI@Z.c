/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C001DA5C
 * Callers:
 *     FindOrCreateMaterialProperty @ 0x1C000DCD8 (FindOrCreateMaterialProperty.c)
 *     DCompositionSessionUninitialize @ 0x1C001C61C (DCompositionSessionUninitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

MaterialProperty *__fastcall MaterialProperty::`scalar deleting destructor'(MaterialProperty *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool(this);
  return this;
}
