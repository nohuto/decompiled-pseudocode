/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18004ECD8
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18004EBB0 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // r8d

  v2 = 0;
  v4 = 2;
  if ( a1 > 20 )
  {
    if ( a1 > 27 )
    {
      v5 = 28;
      if ( a1 == 69 )
        goto LABEL_7;
    }
    else if ( a1 != 27 && a1 != 21 && a1 != 22 )
    {
      if ( a1 == 23 )
      {
        v5 = 11;
        goto LABEL_7;
      }
      if ( a1 == 26 )
      {
        v5 = 2;
        goto LABEL_7;
      }
    }
  }
  else
  {
    if ( a1 == 20 )
    {
      v5 = 24;
      goto LABEL_7;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          v5 = 61;
          goto LABEL_7;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          v5 = 49;
          goto LABEL_7;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        v5 = 88;
        goto LABEL_7;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v5 = 87;
        goto LABEL_7;
      }
    }
  }
  v5 = 0;
LABEL_7:
  *a2 = v5;
  if ( !v5 )
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292288, 0x328u);
    return v2;
  }
  v6 = 1;
  if ( a1 <= 21 )
  {
    if ( a1 < 17 && a1 > 0 && (a1 <= 4 || a1 > 14) )
      goto LABEL_13;
LABEL_24:
    v7 = 3;
    goto LABEL_15;
  }
  if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
    goto LABEL_24;
LABEL_13:
  if ( a1 == 16 || a1 == 23 || a1 == 26 )
    v7 = 1;
  else
    v7 = 2;
LABEL_15:
  a2[1] = v7;
  if ( a1 <= 23 )
  {
    if ( a1 < 20 )
    {
      if ( a1 > 0 )
      {
        if ( a1 > 16 )
          goto LABEL_20;
        goto LABEL_19;
      }
LABEL_48:
      v2 = -2003292344;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292344, 0x33Cu);
      return v2;
    }
LABEL_19:
    v4 = 1;
    goto LABEL_20;
  }
  if ( a1 > 27 )
  {
    if ( (unsigned int)(a1 - 68) > 1 )
      goto LABEL_48;
    goto LABEL_19;
  }
LABEL_20:
  v8 = v4 - 1;
  if ( !v8 || v8 != 1 )
    v6 = 0;
  a2[2] = v6;
  return v2;
}
