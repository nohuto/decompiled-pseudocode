/*
 * XREFs of _ValidateCalibrationData@12 @ 0x13F15C
 * Callers:
 *     ?ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z @ 0x13E304 (-ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z.c)
 *     ?ReadLinearityDataImp@@YGHPAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PAKPAPAE@Z @ 0x13E720 (-ReadLinearityDataImp@@YGHPAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PAKPAPAE@Z.c)
 *     __SetCalibrationData@16 @ 0x1448D3 (__SetCalibrationData@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ValidateCalibrationData(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // edi
  BOOL v5; // edx
  unsigned __int16 *v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v10; // [esp-8h] [ebp-20h]
  unsigned __int16 v11; // [esp+Ch] [ebp-Ch]
  unsigned __int16 *v12; // [esp+10h] [ebp-8h]
  unsigned int v13; // [esp+14h] [ebp-4h]
  int i; // [esp+20h] [ebp+8h]

  v4 = 0;
  v5 = 0;
  if ( a1 < 0x40 || !a2 || *(_DWORD *)(a2 + 4) != 2 || *(_DWORD *)a2 >= 0xFFFFu )
    return v5;
  if ( *(_DWORD *)(a2 + 16) != 0x8000 || *(_DWORD *)(a2 + 20) != 0x8000 )
  {
    v5 = 0;
    goto LABEL_23;
  }
  v5 = 1;
  switch ( a3 )
  {
    case 1:
      v4 = *(unsigned __int16 *)(a2 + 28) * *(unsigned __int16 *)(a2 + 30);
      break;
    case 2:
      v5 = *(_WORD *)(a2 + 28) == 4 && *(_WORD *)(a2 + 30) == 4;
      v10 = 16;
      goto LABEL_20;
    case 3:
      v5 = *(_WORD *)(a2 + 28) == 2 && *(_WORD *)(a2 + 30) == 2;
      v10 = 4;
LABEL_20:
      v4 = v10;
      break;
  }
LABEL_23:
  if ( a1 == 8 * v4 + 32 )
  {
    v6 = (unsigned __int16 *)(a2 + 34);
    v7 = 0;
    v12 = (unsigned __int16 *)(a2 + 34);
    for ( i = *(unsigned __int16 *)(a2 + 34); v7 < v4; v12 = v6 )
    {
      if ( !v5 )
        break;
      v13 = *(unsigned __int16 *)(a2 + 28);
      if ( !(v7 % v13) )
        i = *v6;
      v11 = *(v6 - 1);
      if ( v11 <= 0x8000u
        && (v8 = *v6, (unsigned __int16)v8 <= 0x8000u)
        && v6[1] <= 0x8000u
        && v6[2] <= 0x8000u
        && v8 == i )
      {
        v5 = 1;
        if ( v7 > v13 )
        {
          v6 = v12;
          v5 = v11 == *(_WORD *)(a2 + 8 * (v7 % v13) + 32);
        }
      }
      else
      {
        v5 = 0;
      }
      ++v7;
      v6 += 4;
    }
  }
  return v5;
}
