/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C010B744
 * Callers:
 *     ?ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0039BC4 (-ndisInitialBindCompleted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
