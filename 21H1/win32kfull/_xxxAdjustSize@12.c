/*
 * XREFs of _xxxAdjustSize@12 @ 0x2D59A
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ?ConstrainIntToPositive2xShortRange@@YGHH@Z @ 0x302E8 (-ConstrainIntToPositive2xShortRange@@YGHH@Z.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxAdjustSize(int a1, int *a2, int *a3)
{
  int result; // eax
  int v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+0h] [ebp-40h]
  int v13; // [esp+Ch] [ebp-34h]
  _DWORD v14[10]; // [esp+14h] [ebp-2Ch] BYREF

  memset(v14, 0, sizeof(v14));
  result = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(result + 23) & 0xC0) == 0 || (*(_BYTE *)(result + 22) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1, 0, 0);
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x20) != 0 )
    {
      v6 = v14[0];
      v7 = v14[1];
      v8 = v14[2];
      v9 = v14[3];
    }
    else
    {
      v6 = v14[6];
      v7 = v14[7];
      v8 = v14[8];
      v9 = v14[9];
    }
    v13 = *a2;
    if ( *a2 >= v8 )
      v13 = v8;
    if ( v6 <= v13 )
    {
      v6 = *a2;
      if ( *a2 >= v8 )
        v6 = v8;
    }
    *a2 = v6;
    v10 = *a3;
    if ( *a3 >= v9 )
      v10 = v9;
    if ( v7 <= v10 )
    {
      v7 = *a3;
      if ( *a3 >= v9 )
        v7 = v9;
    }
    *a3 = v7;
    *a2 = ConstrainIntToPositive2xShortRange(v11);
    result = ConstrainIntToPositive2xShortRange(v12);
    *a3 = result;
  }
  return result;
}
