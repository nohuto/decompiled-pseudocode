/*
 * XREFs of _GetDstBFInfo @ 0x1BB40C
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ValidateRGBBitFields @ 0x1BB7F9 (_ValidateRGBBitFields.c)
 *     _ComputeInputColorInfo @ 0x1C2EEC (_ComputeInputColorInfo.c)
 *     _SetGrayColorTable @ 0x1C309D (_SetGrayColorTable.c)
 */

int __fastcall GetDstBFInfo(int a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v8; // eax
  _DWORD v11[6]; // [esp+14h] [ebp-1Ch] BYREF

  memset(v11, 0, sizeof(v11));
  BYTE1(v11[0]) = a3;
  if ( a3 >= 5u )
  {
    if ( a3 <= 6u )
    {
      v4 = 16711680;
      v5 = 65280;
      v6 = 255;
      goto LABEL_7;
    }
    if ( a3 == 0xFC )
    {
      v4 = 63488;
      v5 = 2016;
      goto LABEL_6;
    }
    if ( a3 == 0xFD )
    {
      v4 = 31744;
      v5 = 992;
LABEL_6:
      v6 = 31;
LABEL_7:
      v11[2] = v4;
      v11[3] = v5;
      v11[4] = v6;
      goto LABEL_12;
    }
  }
  a4 = 2 * (*(_BYTE *)a2 & 2);
  if ( *(_DWORD *)(a2 + 4) )
    goto LABEL_19;
  v6 = v11[4];
  v5 = v11[3];
  v4 = v11[2];
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v8 = v5;
    v5 = v6;
    v6 = v8;
    v11[3] = v5;
    v11[4] = v8;
  }
  if ( (a4 & 2) != 0 )
  {
    v11[2] = v5;
    v11[3] = v4;
  }
  else if ( (a4 & 4) != 0 )
  {
    v11[2] = v6;
    v11[4] = v4;
  }
  ValidateRGBBitFields(v11);
LABEL_19:
  ComputeInputColorInfo(a4, v11, a1 + 64);
  return SetGrayColorTable(0);
}
