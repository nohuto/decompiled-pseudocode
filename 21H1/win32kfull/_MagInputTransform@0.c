/*
 * XREFs of _MagInputTransform@0 @ 0x178E27
 * Callers:
 *     _AddMagnificationOutputTransform@4 @ 0xEF322 (_AddMagnificationOutputTransform@4.c)
 *     _ApplyMagInputTransform@8 @ 0x13ECD5 (_ApplyMagInputTransform@8.c)
 *     _TransformForInputMagnification@12 @ 0x13EFD9 (_TransformForInputMagnification@12.c)
 *     _EditionMagnificationMousePosition@4 @ 0x178DE8 (_EditionMagnificationMousePosition@4.c)
 * Callees:
 *     <none>
 */

int __stdcall MagInputTransform()
{
  if ( _grpdeskRitInput )
    return *(_DWORD *)(_grpdeskRitInput + 128);
  else
    return 0;
}
