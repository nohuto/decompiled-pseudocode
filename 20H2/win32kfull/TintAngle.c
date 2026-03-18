/*
 * XREFs of TintAngle @ 0x1C02621BC
 * Callers:
 *     pDCIAdjClr @ 0x1C006EC28 (pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TintAngle(int a1, __int64 a2, int *a3, int *a4)
{
  __int64 result; // rax
  int v7; // edi
  int v8; // r8d
  int v9; // ebx
  int v10; // r11d
  int v11; // ebp
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // r8d

  result = (unsigned int)(a1 + 100);
  if ( (unsigned int)result > 0xC8 )
    a1 = 100;
  if ( a1 > 0 )
  {
    v7 = 0;
  }
  else
  {
    a1 = -a1;
    v7 = 1;
    if ( !a1 )
    {
      *a4 = 0;
      *a3 = 0;
      return result;
    }
  }
  v8 = 6 * a1;
  if ( 6 * a1 >= 900 )
    v8 = 6 * (300 - a1);
  v9 = SinNumber[v8 / 10];
  v10 = v8 / 10 + 1;
  v11 = 10 * (v8 / 10);
  v12 = v8 % 10;
  if ( v8 != v11 )
    v9 += (v12 * (SinNumber[v10] - v9) + 5) / 10;
  if ( !v7 )
    v9 = -v9;
  *a3 = v9;
  if ( v12 )
    v12 = v11 - v8 + 10;
  if ( !(v8 % 10) )
    v10 = v8 / 10;
  v13 = 90 - v10;
  v14 = SinNumber[v13];
  if ( v12 )
    v14 += (v12 * (SinNumber[v13 + 1] - v14) + 5) / 10;
  result = (unsigned int)-v14;
  if ( 6 * a1 >= 900 )
    v14 = -v14;
  *a4 = v14;
  return result;
}
