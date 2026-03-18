/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YGXPAUtagTHREADINPUTPOINTERLIST@@PAUtagTHREADPOINTERDATA@@@Z @ 0x15B23F
 * Callers:
 *     _xxxCleanupThreadPointerInputInfo@4 @ 0x9AFC6 (_xxxCleanupThreadPointerInputInfo@4.c)
 *     _EditionUnlinkAndFreeThreadPointerData@8 @ 0x15BA6E (_EditionUnlinkAndFreeThreadPointerData@8.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkAndFreeThreadPointerData(int a1, int *a2)
{
  int v4; // edx
  int **v5; // eax

  v4 = *a2;
  if ( *(int **)(v4 + 4) != a2 || (v5 = (int **)a2[1], *v5 != a2) )
    __fastfail(3u);
  *v5 = (int *)v4;
  *(_DWORD *)(v4 + 4) = v5;
  CTouchProcessor::UnreferenceMsgDataExternal(_gpTouchProcessor, a2[4], 4, a2);
  Win32FreePool(a2);
  --*(_DWORD *)(a1 + 8);
}
