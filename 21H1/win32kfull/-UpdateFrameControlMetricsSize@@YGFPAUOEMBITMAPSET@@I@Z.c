/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z @ 0x9139A
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z @ 0x91206 (-EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetDPIMETRICSForDpi@4 @ 0x91A1E (_GetDPIMETRICSForDpi@4.c)
 */

int __fastcall UpdateFrameControlMetricsSize(int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // esi
  __int16 v5; // dx
  int v6; // eax
  int DpiDependentMetric; // eax
  int result; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]
  int v15; // [esp+14h] [ebp-4h]

  v13 = 0;
  v2 = 0;
  v12 = (_WORD *)(a1 + 18);
  do
  {
    v4 = 0;
    v5 = word_250F5A[2 * v2];
    LOWORD(v6) = 0;
    switch ( word_250F58[2 * v2] )
    {
      case 1:
        if ( (v5 & 0x80u) != 0 )
        {
          v14 = 24;
          DpiDependentMetric = GetDpiDependentMetric(23, a2);
        }
        else if ( (v5 & 0x40) != 0 )
        {
          v14 = 26;
          DpiDependentMetric = GetDpiDependentMetric(25, a2);
        }
        else
        {
          v14 = 13;
          DpiDependentMetric = GetDpiDependentMetric(12, a2);
        }
        v4 = DpiDependentMetric - 2;
        LOWORD(v6) = GetDpiDependentMetric(v14, a2) - 4;
        break;
      case 2:
        goto LABEL_27;
      case 3:
        if ( (v5 & 8) != 0 )
        {
          v15 = 1;
LABEL_24:
          v9 = 0;
        }
        else
        {
          if ( (v5 & 2) == 0 )
          {
            v15 = 10;
            goto LABEL_24;
          }
          v15 = 1;
          v9 = 11;
        }
        v10 = GetDpiDependentMetric(v9, a2);
        v11 = v15;
        v4 = v10;
LABEL_26:
        LOWORD(v6) = GetDpiDependentMetric(v11, a2);
        break;
      case 4:
        if ( (v5 & 0x408) != 8 )
        {
          v6 = (a2 >> 3) + 1;
LABEL_16:
          v4 = v6;
          break;
        }
        v4 = 0;
        LOWORD(v6) = v2 - 8;
        break;
      case 5:
LABEL_27:
        if ( (v5 & 0x18) != 0 )
          v6 = *(_DWORD *)(GetDPIMETRICSForDpi(a2) + 24);
        else
          v6 = GetDpiDependentMetric(28, a2);
        goto LABEL_16;
      default:
        if ( (unsigned __int16)word_250F58[2 * v2] != 0xFFFF )
          break;
        if ( (v5 & 1) == 0 )
        {
          v6 = GetDpiDependentMetric(13, a2);
          goto LABEL_16;
        }
        v4 = 4 * GetDpiDependentMetric(12, a2);
        v11 = 13;
        goto LABEL_26;
    }
    *v12 = v6;
    *(v12 - 1) = v4;
    if ( v4 > (__int16)v13 )
    {
      result = (unsigned __int16)v4;
      v13 = (unsigned __int16)v4;
    }
    else
    {
      result = v13;
    }
    ++v2;
    v12 += 4;
  }
  while ( v2 < 0x5D );
  return result;
}
