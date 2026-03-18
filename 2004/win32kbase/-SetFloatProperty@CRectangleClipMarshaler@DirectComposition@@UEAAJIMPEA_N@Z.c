/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0079A90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C01E4A70 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  char v4; // di
  float v8; // xmm0_4
  int v9; // eax
  __int64 v10; // rcx
  float *v11; // r9
  unsigned int v12; // edx
  float v13; // xmm1_4
  bool v14; // cl

  v4 = *((_BYTE *)this + 145);
  v8 = 0.0;
  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        v10 = 124LL;
        goto LABEL_32;
      case 0xCu:
        v10 = 128LL;
        goto LABEL_32;
      case 0xDu:
        v10 = 132LL;
        goto LABEL_32;
      case 0xEu:
        v10 = 136LL;
LABEL_32:
        v9 = -2049;
        goto LABEL_9;
      case 0xFu:
        v10 = 140LL;
        goto LABEL_32;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0xAu:
      v10 = 120LL;
      goto LABEL_32;
    case 4u:
      v8 = FLOAT_N2097152_0;
      v9 = -4097;
      v10 = 96LL;
      goto LABEL_9;
    case 5u:
      v8 = FLOAT_N2097152_0;
      v9 = -8193;
      v10 = 100LL;
      goto LABEL_9;
    case 6u:
      v8 = FLOAT_N2097152_0;
      v9 = -16385;
      v10 = 104LL;
      goto LABEL_9;
  }
  if ( a2 != 7 )
  {
    if ( a2 == 8 )
    {
      v10 = 112LL;
      goto LABEL_32;
    }
    if ( a2 == 9 )
    {
      v10 = 116LL;
      goto LABEL_32;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v8 = FLOAT_N2097152_0;
  v9 = -32769;
  v10 = 108LL;
LABEL_9:
  v11 = (float *)((char *)this + v10);
  v12 = v4 != 0 ? 0xC000000D : 0;
  if ( (DirectComposition::CRectangleClipMarshaler *)((char *)this + v10) && !v4 )
  {
    v13 = FLOAT_2097152_0;
    if ( a3 <= 2097152.0 )
      v13 = fmaxf(a3, v8);
    if ( *v11 == v13 )
    {
      v14 = 0;
    }
    else
    {
      *v11 = v13;
      v14 = 1;
    }
    *a4 = v14;
    if ( a2 <= 7 && a2 >= 4 )
    {
      *a4 = 1;
      v14 = 1;
    }
    if ( v14 )
      *((_DWORD *)this + 4) &= v9;
  }
  return v12;
}
