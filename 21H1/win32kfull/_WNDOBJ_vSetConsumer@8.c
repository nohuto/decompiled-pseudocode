/*
 * XREFs of _WNDOBJ_vSetConsumer@8 @ 0x1E7447
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WNDOBJ_vSetConsumer(WNDOBJ *pwo, PVOID pvConsumer)
{
  if ( pwo != *(WNDOBJ **)(pwo[2].rclClient.right + 8) )
    pwo->pvConsumer = pvConsumer;
}
