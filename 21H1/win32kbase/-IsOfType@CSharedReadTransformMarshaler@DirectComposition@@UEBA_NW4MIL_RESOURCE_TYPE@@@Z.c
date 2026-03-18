/*
 * XREFs of ?IsOfType@CSharedReadTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0042950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedReadTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 0;
  switch ( a2 )
  {
    case 186:
      return 1;
    case 54:
      return 1;
    case 185:
      v3 = *(_DWORD *)(a1 + 64);
      if ( v3 == 107 || v3 == 104 )
        return 1;
      break;
  }
  return result;
}
