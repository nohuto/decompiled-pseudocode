/*
 * XREFs of KiUpdateSpecCtrlEnhancedIBRS @ 0x140519EDC
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSpecCtrlEnhancedIBRS(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // al
  unsigned __int8 v5; // dl
  int v6; // eax
  __int64 v7; // r10
  int v9; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 240);
  v9 = KiSpeculationFeatures;
  if ( !v2 || v2 == *(_QWORD *)(a2 + 2528) || (KiSpeculationFeatures & 0x400) != 0 )
  {
    *(_BYTE *)(a1 + 248) &= 0xDBu;
  }
  else
  {
    v4 = *(_BYTE *)(a1 + 248) | 4;
    *(_BYTE *)(a1 + 248) = v4;
    if ( (v9 & 8) == 0 )
      *(_BYTE *)(a1 + 248) = v4 | 0x20;
  }
  v5 = *(_BYTE *)(a1 + 250) | 1;
  *(_BYTE *)(a1 + 251) = 1;
  *(_BYTE *)(a1 + 1744) = 1;
  *(_BYTE *)(a1 + 253) = 1;
  v6 = *(_DWORD *)(a2 + 2172);
  v7 = *(_QWORD *)(a2 + 2528);
  if ( (v6 & 0x400000) == 0 )
    v7 = 1LL;
  if ( (v9 & 0x400000) != 0 && KiSsbdMsr == 72 )
  {
    *(_BYTE *)(a1 + 251) |= 4u;
    *(_BYTE *)(a1 + 253) |= 4u;
    *(_BYTE *)(a1 + 1744) |= 4u;
    v5 |= 4u;
  }
  else if ( (v9 & 0x800000) != 0 )
  {
    if ( v7 )
    {
      *(_BYTE *)(a1 + 251) |= 4u;
      *(_BYTE *)(a1 + 1744) |= 4u;
      v5 |= 4u;
    }
    if ( (*(_DWORD *)(a2 + 2516) & 0x2000) != 0 )
      *(_BYTE *)(a1 + 253) |= 4u;
  }
  if ( !v7 && (v9 & 0x800) != 0 && ((*(_DWORD *)(a2 + 2172) & 0x1000) == 0 || (*(_BYTE *)(a1 + 250) & 1) == 0) )
  {
    LOBYTE(v6) = -2;
    *(_BYTE *)(a1 + 251) &= ~1u;
    v5 &= ~1u;
    *(_BYTE *)(a1 + 1744) &= ~1u;
    *(_BYTE *)(a1 + 253) &= ~1u;
  }
  if ( (v9 & 0x2000) != 0 )
  {
    *(_BYTE *)(a1 + 251) |= 0x80u;
    *(_BYTE *)(a1 + 1744) |= 0x80u;
  }
  if ( v5 != *(_BYTE *)(a1 + 250) )
  {
    *(_BYTE *)(a1 + 250) = v5;
    LOBYTE(v6) = v5;
    __writemsr(0x48u, v5);
  }
  return v6;
}
