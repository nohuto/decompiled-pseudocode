/*
 * XREFs of XmGetStringAddress @ 0x1403C05AC
 * Callers:
 *     XmStosOp @ 0x1403C04C0 (XmStosOp.c)
 *     XmInsOp @ 0x1404E47E0 (XmInsOp.c)
 *     XmOutsOp @ 0x1404E4870 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1404E4AD0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1404E4CF0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E4D70 (XmMovsOp.c)
 *     XmScasOp @ 0x1404E4E00 (XmScasOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403976E0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403CFD00 (longjmp.c)
 */

int *__fastcall XmGetStringAddress(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r10
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r8d

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 120) + 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v5 = -v5;
  if ( *(_BYTE *)(a1 + 137) )
  {
    v6 = *(_DWORD *)(a1 + 4LL * a3 + 24);
    *(_DWORD *)(a1 + 4LL * a3 + 24) = v6 + v5;
  }
  else
  {
    v6 = *(unsigned __int16 *)(a1 + 4LL * a3 + 24);
    *(_WORD *)(a1 + 4LL * a3 + 24) = v5 + v6;
  }
  v7 = *(unsigned __int16 *)(a1 + 2 * v4 + 68);
  if ( v6 > v7 || v6 + *(_DWORD *)(a1 + 120) > v7 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v4 + 56), v6);
}
