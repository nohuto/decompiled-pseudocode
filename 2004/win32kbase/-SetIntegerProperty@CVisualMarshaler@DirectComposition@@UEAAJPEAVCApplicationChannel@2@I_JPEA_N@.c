/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00315C0
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C004D3E0 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01D9BE0 (-SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00318C0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  bool v7; // dl
  char v8; // al
  char v9; // cl
  char v11; // al
  char v12; // cl
  char v13; // al
  char v14; // al
  char v15; // cl
  bool v16; // dl
  int v17; // ecx
  char v18; // al
  char v19; // dl
  char v20; // al
  char v21; // cl
  unsigned __int8 v22; // r8
  char v23; // cl
  char v24; // al
  char v25; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1B )
  {
    switch ( a3 )
    {
      case '%':
        v8 = *((_BYTE *)this + 288);
        v9 = v8 & 0x10;
        if ( (_DWORD)a4 )
        {
          if ( v9 )
            return v5;
          v13 = v8 | 0x10;
        }
        else
        {
          if ( !v9 )
            return v5;
          v13 = v8 & 0xEF;
        }
        break;
      case '&':
        if ( *((unsigned __int8 *)this + 288) >> 7 == (a4 != 0) )
          return v5;
        v13 = *((_BYTE *)this + 288) & 0x7F | (a4 != 0 ? 0x80 : 0);
        *((_DWORD *)this + 4) |= 0x800000u;
        goto LABEL_24;
      case ')':
        v24 = *((_BYTE *)this + 288);
        v25 = v24 & 0x40;
        if ( (_DWORD)a4 )
        {
          if ( v25 )
            return v5;
          v13 = v24 | 0x40;
        }
        else
        {
          if ( !v25 )
            return v5;
          v13 = v24 & 0xBF;
        }
        break;
      case '*':
        if ( (unsigned int)a4 > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 64) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x8000000u;
        *((_DWORD *)this + 64) = a4;
LABEL_25:
        *a5 = 1;
        return v5;
      case '+':
        v23 = *((_BYTE *)this + 288);
        if ( (v23 & 1) == ((_DWORD)a4 != 0) )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000000u;
        *((_BYTE *)this + 288) = ((_DWORD)a4 != 0) | v23 & 0xFE;
        goto LABEL_25;
      case ',':
        if ( *((_DWORD *)this + 65) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x20000000u;
        *((_DWORD *)this + 65) = a4;
        goto LABEL_25;
      case '-':
        v22 = *((_BYTE *)this + 289);
        if ( ((_DWORD)a4 != 0) == ((v22 >> 1) & 1) )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000u;
        *((_BYTE *)this + 289) = v22 & 0xFD | ((_DWORD)a4 != 0 ? 2 : 0);
        goto LABEL_25;
      case '2':
        v20 = *((_BYTE *)this + 288);
        v21 = v20 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v21 )
            return v5;
          v13 = v20 | 0x20;
        }
        else
        {
          if ( !v21 )
            return v5;
          v13 = v20 & 0xDF;
        }
        *((_DWORD *)this + 4) |= 0x20000u;
LABEL_24:
        *((_BYTE *)this + 288) = v13;
        goto LABEL_25;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
LABEL_23:
    *((_DWORD *)this + 4) |= 0x10000u;
    goto LABEL_24;
  }
  if ( a3 == 27 )
  {
    v11 = *((_BYTE *)this + 288);
    v12 = v11 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v12 )
        return v5;
      v13 = v11 | 8;
    }
    else
    {
      if ( !v12 )
        return v5;
      v13 = v11 & 0xF7;
    }
    goto LABEL_23;
  }
  if ( a3 > 0x11 )
  {
    switch ( a3 )
    {
      case 0x12u:
        v14 = *((_BYTE *)this + 288);
        v15 = v14 & 2;
        if ( (_DWORD)a4 )
        {
          if ( v15 )
            return v5;
          v13 = v14 | 2;
        }
        else
        {
          if ( !v15 )
            return v5;
          v13 = v14 & 0xFD;
        }
        break;
      case 0x13u:
        v18 = *((_BYTE *)this + 288);
        v19 = v18 & 4;
        if ( (_DWORD)a4 )
        {
          if ( v19 )
            return v5;
          v13 = v18 | 4;
        }
        else
        {
          if ( !v19 )
            return v5;
          v13 = v18 & 0xFB;
        }
        break;
      case 0x14u:
        if ( (unsigned __int64)(a4 + 1) <= 2 )
        {
          if ( *((_DWORD *)this + 62) == (_DWORD)a4 )
            goto LABEL_9;
          *((_DWORD *)this + 62) = a4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741811;
      case 0x15u:
        if ( (unsigned __int64)(a4 + 1) > 4 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 63) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 63) = a4;
          v16 = 1;
          goto LABEL_59;
        }
        goto LABEL_76;
      case 0x16u:
        if ( (unsigned __int64)(a4 + 1) <= 2 || a4 == 3 )
        {
          if ( *((_DWORD *)this + 63) == (_DWORD)a4 )
            goto LABEL_9;
          *((_DWORD *)this + 63) = a4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x80000u;
    goto LABEL_24;
  }
  switch ( a3 )
  {
    case 0x11u:
      if ( *((_DWORD *)this + 71) == a4 )
        return v5;
      *((_DWORD *)this + 71) = a4;
LABEL_77:
      *((_DWORD *)this + 4) |= 0x40000u;
      goto LABEL_25;
    case 7u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 59) == (_DWORD)a4 )
          goto LABEL_9;
        *((_DWORD *)this + 59) = a4;
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    case 8u:
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 58) == (_DWORD)a4 )
        {
LABEL_9:
          v7 = 0;
          goto LABEL_10;
        }
        *((_DWORD *)this + 58) = a4;
LABEL_20:
        v7 = 1;
LABEL_10:
        *a5 = v7;
        if ( v7 )
          *((_DWORD *)this + 4) |= 0x8000u;
        return v5;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 9 )
  {
    if ( a3 == 14 )
    {
      if ( (unsigned __int64)(a4 + 1) <= 2 )
      {
        if ( *((_DWORD *)this + 61) == (_DWORD)a4 )
          goto LABEL_9;
        *((_DWORD *)this + 61) = a4;
        goto LABEL_20;
      }
      return (unsigned int)-1073741811;
    }
    if ( a3 == 16 )
    {
      if ( (unsigned __int64)a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 70) == a4 )
        return v5;
      *((_DWORD *)this + 70) = a4;
      goto LABEL_77;
    }
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  if ( a4 < -1 || a4 > 2 )
    return (unsigned int)-1073741811;
  v16 = 1;
  if ( (_DWORD)a4 == -1 )
  {
    v17 = 5;
  }
  else if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
      v17 = 2;
    else
      v17 = 4;
  }
  else
  {
    v17 = 0;
  }
  if ( *((_DWORD *)this + 60) != v17 )
  {
    *((_DWORD *)this + 60) = v17;
    goto LABEL_59;
  }
LABEL_76:
  v16 = 0;
LABEL_59:
  *a5 = v16;
  if ( v16 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}
