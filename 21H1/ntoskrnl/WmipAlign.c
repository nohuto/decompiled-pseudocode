/*
 * XREFs of WmipAlign @ 0x1402DF1A0
 * Callers:
 *     WmipInsertStaticNames @ 0x14068103C (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x1406812A0 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14092CE60 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipAlign(int a1, int *a2)
{
  int v2; // ecx
  char result; // al

  v2 = a1 - 1;
  if ( *a2 + v2 < (unsigned int)*a2 )
    return 0;
  result = 1;
  *a2 = (*a2 + v2) & ~v2;
  return result;
}
