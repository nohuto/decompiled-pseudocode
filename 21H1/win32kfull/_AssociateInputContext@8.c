/*
 * XREFs of _AssociateInputContext@8 @ 0xAE6F0
 * Callers:
 *     _AssociateInputContextEx@12 @ 0xAE640 (_AssociateInputContextEx@12.c)
 *     _DestroyInputContext@4 @ 0x14F099 (_DestroyInputContext@4.c)
 * Callees:
 *     <none>
 */

int __fastcall AssociateInputContext(int a1, int *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax

  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(v2 + 132);
  if ( a2 )
    v4 = *a2;
  else
    v4 = 0;
  *(_DWORD *)(v2 + 132) = v4;
  return v3;
}
