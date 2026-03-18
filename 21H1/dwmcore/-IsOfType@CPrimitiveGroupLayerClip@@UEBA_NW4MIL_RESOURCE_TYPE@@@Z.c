/*
 * XREFs of ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180173E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroupLayerClip::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 45 )
    return (unsigned int)(a2 - 127) <= 1;
  return v2;
}
