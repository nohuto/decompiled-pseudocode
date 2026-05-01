/*
 * XREFs of ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x180429288
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180428C38 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDragVisual::s_IsPointerIdTouch(__int64 a1)
{
  int PointerType; // eax
  char v2; // cl
  int v4; // [rsp+38h] [rbp+10h] BYREF

  PointerType = GetPointerType(a1, &v4);
  v2 = 0;
  if ( PointerType )
    return v4 == 2;
  return v2;
}
