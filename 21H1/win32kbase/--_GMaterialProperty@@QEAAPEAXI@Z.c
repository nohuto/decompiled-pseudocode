/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C0007938
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C0006AEC (DCompositionSessionUninitialize.c)
 *     FindOrCreateMaterialProperty @ 0x1C0039B38 (FindOrCreateMaterialProperty.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
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
