/*
 * XREFs of WmipAlign @ 0x140272840
 * Callers:
 *     WmipInsertStaticNames @ 0x140645EDC (WmipInsertStaticNames.c)
 *     WmipQueryAllData @ 0x140646140 (WmipQueryAllData.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14092E110 (WmipAllocateSingleInstanceWnode.c)
 *     WmipDereferenceEvent @ 0x14092EDEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
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
