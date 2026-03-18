/*
 * XREFs of ?IsOfType@CDDisplayRenderTargetMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C01D7470
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0016920 (-IsOfType@CResourceMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 50 )
    return 1;
  v2 = DirectComposition::CResourceMarshaler::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
