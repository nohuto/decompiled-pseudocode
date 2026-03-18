/*
 * XREFs of RaisePower @ 0x1C00C8EB8
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00CA454 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeRGBLUTAA @ 0x1C00D5DAC (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C00D6484 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00D6E04 (AdjustSrcDevGamma.c)
 *     BuildExpandAAInfo @ 0x1C00E9C30 (BuildExpandAAInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x1C02621F0 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C0262968 (ComputeBGRMappingTable.c)
 * Callees:
 *     AntiLog @ 0x1C00C8FAC (AntiLog.c)
 *     Log @ 0x1C00C90EC (Log.c)
 *     FD6DivL @ 0x1C00C91C4 (FD6DivL.c)
 *     MulFD6 @ 0x1C00D6350 (MulFD6.c)
 *     DivFD6 @ 0x1C00D7050 (DivFD6.c)
 */

__int64 __fastcall RaisePower(int a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  int v7; // edi
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // r9d
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_5;
    return (unsigned int)a1;
  }
  if ( (_DWORD)a2 == 1000000 )
    return (unsigned int)a1;
  a2 = (unsigned int)((int)a2 / 1000000);
  if ( v4 == 1000000 * (_DWORD)a2 )
  {
    v4 = a2;
    v3 = a3 | 2;
  }
LABEL_5:
  if ( a1 <= 0 )
  {
    v5 = -a1;
    v7 = 1;
    if ( !a1 )
      return 0LL;
  }
  else
  {
    v7 = 0;
  }
  if ( !v4 )
    return v7 != 0 ? -1000000 : 1000000;
  if ( v5 != 10000000 )
    v6 = Log(v5, a2, a3, 1000000LL);
  v8 = v3 & 1;
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 1) != 0 )
      v9 = DivFD6(v6, v4);
    else
      v9 = MulFD6(v6, v4);
    v10 = v7;
    goto LABEL_14;
  }
  v10 = (v4 & 1) != 0 ? v7 : 0;
  if ( v8 )
  {
    v9 = FD6DivL(v6, v4);
LABEL_14:
    v11 = v9;
    goto LABEL_15;
  }
  v11 = v4 * v6;
LABEL_15:
  result = AntiLog(v11);
  if ( v10 )
    return (unsigned int)-(int)result;
  return result;
}
