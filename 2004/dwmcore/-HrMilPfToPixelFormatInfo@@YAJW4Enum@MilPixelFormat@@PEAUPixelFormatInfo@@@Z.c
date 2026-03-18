/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800903EC
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800902CC (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(__int64 a1, int *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ebx

  if ( (int)a1 > 20 )
  {
    if ( (int)a1 > 27 )
    {
      v3 = 28;
      if ( (_DWORD)a1 == 69 )
        goto LABEL_6;
    }
    else if ( (_DWORD)a1 != 27 && (_DWORD)a1 != 21 && (_DWORD)a1 != 22 )
    {
      if ( (_DWORD)a1 == 23 )
      {
        v3 = 11;
        goto LABEL_6;
      }
      if ( (_DWORD)a1 == 26 )
      {
        v3 = 2;
        goto LABEL_6;
      }
    }
  }
  else
  {
    if ( (_DWORD)a1 == 20 )
    {
      v3 = 24;
      goto LABEL_6;
    }
    if ( (int)a1 <= 13 )
    {
      if ( (int)a1 < 12 && (int)a1 >= 8 )
      {
        if ( (_DWORD)a1 == 8 )
        {
          v3 = 61;
          goto LABEL_6;
        }
        if ( (_DWORD)a1 != 9 && (_DWORD)a1 != 10 )
        {
          v3 = 49;
          goto LABEL_6;
        }
      }
    }
    else
    {
      if ( (_DWORD)a1 == 14 )
      {
        v3 = 88;
        goto LABEL_6;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v3 = 87;
        goto LABEL_6;
      }
    }
  }
  v3 = 0;
LABEL_6:
  *a2 = v3;
  if ( !v3 )
  {
    v6 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292288, 0x34Bu, 0LL);
    return v6;
  }
  v4 = 1;
  if ( (int)a1 > 21 )
  {
    if ( (int)a1 > 23 && ((int)a1 <= 24 || (int)a1 > 26) )
      goto LABEL_12;
  }
  else if ( (int)a1 >= 17 || (int)a1 <= 0 || (int)a1 > 4 && (int)a1 <= 14 )
  {
LABEL_12:
    v5 = 3;
    goto LABEL_13;
  }
  if ( (_DWORD)a1 == 16 || (_DWORD)a1 == 23 || (_DWORD)a1 == 26 )
    v5 = 1;
  else
    v5 = 2;
LABEL_13:
  a2[1] = v5;
  if ( (int)a1 > 23 )
  {
    if ( (int)a1 <= 27 )
      goto LABEL_23;
    if ( (unsigned int)(a1 - 68) <= 1 )
      goto LABEL_17;
    goto LABEL_44;
  }
  if ( (int)a1 < 20 )
  {
    if ( (int)a1 > 0 )
    {
      if ( (int)a1 <= 16 )
        goto LABEL_17;
LABEL_23:
      v4 = 2;
      goto LABEL_17;
    }
LABEL_44:
    v6 = -2003292344;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292344, 0x35Fu, 0LL);
    return v6;
  }
LABEL_17:
  v6 = 0;
  a2[2] = v4 == 2;
  return v6;
}
