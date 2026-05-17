/*
 * XREFs of _TpDisassociateCallback@4 @ 0x4B384690
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpDisassociateCallback(int a1)
{
  int v1; // esi
  char v2; // cl
  unsigned int v3; // ecx
  int v4; // edx

  if ( !a1 || (v1 = *(_DWORD *)(a1 + 108)) == 0 || *(_DWORD *)(a1 + 104) || (v2 = *(_BYTE *)(a1 + 40), (v2 & 2) != 0) )
    TppRaiseInvalidParameter();
  *(_BYTE *)(a1 + 40) = v2 | 2;
  v3 = *(_DWORD *)(a1 + 80) & 0xFFFFFFBF;
  *(_DWORD *)(a1 + 80) = v3;
  v4 = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(a1 + 104) = v4;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 80) = v3 | 0x20;
    TppBarrierAdjust((signed __int64 *)(v4 + 24), 1, 0);
  }
  return TppBarrierAdjust((signed __int64 *)(v1 + 32), -1, 0);
}
