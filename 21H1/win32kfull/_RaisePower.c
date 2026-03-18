/*
 * XREFs of _RaisePower @ 0x1BC9A2
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _HT_ComputeRGBGammaTable@24 @ 0x1BA3C7 (_HT_ComputeRGBGammaTable@24.c)
 *     _AdjustSrcDevGamma @ 0x1BCB73 (_AdjustSrcDevGamma.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 *     _BuildExpandAAInfo @ 0x1C17F7 (_BuildExpandAAInfo.c)
 * Callees:
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _FD6DivL @ 0xEDA24 (_FD6DivL.c)
 *     _AntiLog @ 0x1BC57A (_AntiLog.c)
 *     _Log @ 0x1BC88F (_Log.c)
 */

int __fastcall RaisePower(int a1, int a2, char a3)
{
  char v3; // al
  int v5; // ecx
  int v6; // edi
  int result; // eax
  char v8; // dl
  int v9; // esi
  int v10; // eax
  __int16 v11; // dx
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  char v15; // [esp+8h] [ebp-4h]

  v3 = a3;
  v5 = 1000000;
  v6 = a2;
  if ( (a3 & 2) != 0 )
  {
    if ( a2 == 1 )
      return a1;
  }
  else
  {
    if ( a2 == 1000000 )
      return a1;
    if ( a2 % 1000000 )
    {
      v3 = a3;
    }
    else
    {
      v6 = a2 / 1000000;
      v3 = a3 | 2;
      a3 |= 2u;
    }
  }
  v8 = v3;
  v9 = 0;
  v15 = v3;
  if ( a1 <= 0 )
  {
    v9 = 1;
    a1 = -a1;
    if ( !a1 )
      return 0;
  }
  if ( !v6 )
    return v9 != 0 ? -1000000 : 1000000;
  if ( a1 != 10000000 )
  {
    v10 = Log(a1);
    v8 = v15;
    v5 = v10;
    v3 = a3;
  }
  v11 = v8 & 1;
  if ( (v3 & 2) != 0 )
  {
    v12 = (v6 & 1) != 0 ? v9 : 0;
    if ( !v11 )
    {
      v14 = v6 * v5;
      goto LABEL_25;
    }
    v13 = FD6DivL(v5, v6);
  }
  else
  {
    if ( v11 )
      v13 = DivFD6(v5, v6);
    else
      v13 = MulFD6(v5, v6);
    v12 = v9;
  }
  v14 = v13;
LABEL_25:
  result = AntiLog(v14);
  if ( v12 )
    return -result;
  return result;
}
