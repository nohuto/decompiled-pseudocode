/*
 * XREFs of _ClientFrame@24 @ 0x1B78B9
 * Callers:
 *     ?DWP_DrawItem@@YGXPAUtagDRAWITEMSTRUCT@@@Z @ 0xC593E (-DWP_DrawItem@@YGXPAUtagDRAWITEMSTRUCT@@@Z.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetSignFromMappingMode@@YGHPAUHDC__@@PAUtagPOINT@@@Z @ 0x1B7851 (-GetSignFromMappingMode@@YGHPAUHDC__@@PAUtagPOINT@@@Z.c)
 */

BOOL __fastcall ClientFrame(HDC a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v13; // [esp+14h] [ebp-6Ch]
  int v14; // [esp+18h] [ebp-68h] BYREF
  int v15; // [esp+1Ch] [ebp-64h]
  int v16; // [esp+20h] [ebp-60h]
  int v17; // [esp+24h] [ebp-5Ch]
  _DWORD v18[13]; // [esp+28h] [ebp-58h] BYREF
  int v19; // [esp+5Ch] [ebp-24h]
  int v20; // [esp+60h] [ebp-20h]
  int v21; // [esp+64h] [ebp-1Ch]
  int v22; // [esp+68h] [ebp-18h]
  int v23; // [esp+6Ch] [ebp-14h]
  int v24; // [esp+70h] [ebp-10h]
  int v25; // [esp+74h] [ebp-Ch]

  v14 = 0;
  v15 = 0;
  if ( !GetSignFromMappingMode((int)a1, &v14) )
    return 0;
  v7 = a2[3];
  v8 = v7 - a2[1];
  v16 = a2[1];
  if ( v8 < 0 )
    return 0;
  v9 = a2[2];
  v17 = *a2;
  v13 = v9;
  v10 = v9 - v17;
  if ( (v10 ^ v14) < 0 || (v8 ^ v15) < 0 )
    return 0;
  v18[2] = v10;
  v18[7] = v10;
  v18[0] = v17;
  v18[3] = v15;
  v18[8] = v15;
  v18[1] = v16;
  v18[5] = v17;
  v18[11] = v15 + v16;
  v18[10] = v17;
  v19 = v8 - 2 * v15;
  v24 = v19;
  v18[12] = v14;
  v22 = v15 + v16;
  v23 = v14;
  v18[4] = a3;
  v18[6] = v7 - v15;
  v18[9] = a3;
  v20 = a3;
  v21 = v13 - v14;
  v25 = a3;
  return GrePolyPatBlt(a1, 0x5A0049u, (struct XDCOBJ *)v18, 4u, v14);
}
