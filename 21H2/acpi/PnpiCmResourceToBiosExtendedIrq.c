/*
 * XREFs of PnpiCmResourceToBiosExtendedIrq @ 0x1C00B4430
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C00B3A40 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00228E4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 */

__int64 __fastcall PnpiCmResourceToBiosExtendedIrq(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  int v4; // ebx
  int v5; // eax
  __int64 i; // rdi
  char *v7; // rsi
  char Polarity; // al
  char v9; // cl
  __int16 v10; // r8
  char v11; // cl
  char v12; // r8
  char v13; // cl
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v4 = 0;
  v15 = 0;
  v5 = 0;
  if ( v3 )
  {
    for ( i = a3 + 20; *(_BYTE *)i != 2; i += 20LL )
    {
      if ( ++v5 >= v3 )
        return v4 == 0 ? 0xC0000001 : 0;
    }
    v7 = (char *)(a2 + 3);
    *(_DWORD *)(a2 + 5) = *(unsigned __int16 *)(i + 4);
    *(_BYTE *)(a2 + 3) = 0;
    Polarity = ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a1 + 784), *(_DWORD *)(i + 8), &v15);
    v9 = *v7;
    v10 = *(_WORD *)(i + 2) & 1;
    if ( Polarity )
    {
      v11 = v9 | 2;
      if ( !v10 )
        v11 = *v7;
      v12 = v11 | 4;
      if ( (v15 & 2) == 0 )
        v12 = v11;
      v13 = v12;
    }
    else
    {
      if ( v10 )
        v13 = v9 | 2;
      else
        v13 = v9 | 4;
      v12 = v13;
    }
    *v7 = v13;
    if ( *(_BYTE *)(i + 1) == 3 )
      v12 |= 8u;
    *v7 = v12 | 1;
    *(_BYTE *)i = 0;
    v4 = 1;
  }
  return v4 == 0 ? 0xC0000001 : 0;
}
