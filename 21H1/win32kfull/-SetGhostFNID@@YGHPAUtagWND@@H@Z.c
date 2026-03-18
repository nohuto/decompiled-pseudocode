/*
 * XREFs of ?SetGhostFNID@@YGHPAUtagWND@@H@Z @ 0xC24DC
 * Callers:
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 * Callees:
 *     <none>
 */

int __fastcall SetGhostFNID(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  __int16 v4; // ax

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(_WORD *)(v2 + 30);
  if ( v4 >= 0 )
  {
    *(_WORD *)(v2 + 30) = a2 != 0 ? 0x2AA : 0;
    *(_WORD *)(*(_DWORD *)(a1 + 20) + 30) |= v4 & 0xC000;
    return 1;
  }
  return v3;
}
