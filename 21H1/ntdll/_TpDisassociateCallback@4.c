/*
 * XREFs of _TpDisassociateCallback@4 @ 0x4B384690
 * Callers:
 *     <none>
 * Callees:
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpDisassociateCallback(PTP_CALLBACK_INSTANCE Instance)
{
  int v1; // esi
  char v2; // cl
  unsigned int v3; // ecx
  int v4; // edx

  if ( !Instance
    || (v1 = *((_DWORD *)Instance + 27)) == 0
    || *((_DWORD *)Instance + 26)
    || (v2 = *((_BYTE *)Instance + 40), (v2 & 2) != 0) )
  {
    TppRaiseInvalidParameter();
  }
  *((_BYTE *)Instance + 40) = v2 | 2;
  v3 = *((_DWORD *)Instance + 20) & 0xFFFFFFBF;
  *((_DWORD *)Instance + 20) = v3;
  v4 = *(_DWORD *)(v1 + 8);
  *((_DWORD *)Instance + 26) = v4;
  if ( v4 )
  {
    *((_DWORD *)Instance + 20) = v3 | 0x20;
    TppBarrierAdjust((signed __int64 *)(v4 + 24), 1, 0);
  }
  TppBarrierAdjust((signed __int64 *)(v1 + 32), -1, 0);
}
