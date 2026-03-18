/*
 * XREFs of WmipAlign @ 0x14023FE70
 * Callers:
 *     WmipInsertStaticNames @ 0x1406474CC (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x140647730 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x140933F40 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x140934C1C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
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
