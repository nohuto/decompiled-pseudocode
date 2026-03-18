/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001BF10 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C001C064 (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int updated; // ecx
  __int64 v8; // rdx

  updated = 0;
  *a5 = 0;
  if ( a3 > 0x15 )
  {
    switch ( a3 )
    {
      case 0x16u:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 64) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 64) = a4;
        break;
      case 0x1Bu:
        if ( *((_QWORD *)this + 21) == a4 )
          return updated;
        *((_QWORD *)this + 21) = a4;
        break;
      case 0x1Cu:
        if ( *((_QWORD *)this + 22) == a4 )
          return updated;
        *((_QWORD *)this + 22) = a4;
        break;
      case 0x1Du:
        if ( a4 > 1 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 61) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 61) = a4;
        break;
      case 0x22u:
        if ( a4 <= 1 )
        {
          if ( *((_DWORD *)this + 63) == a4 )
            return updated;
          *((_DWORD *)this + 4) &= ~0x4000u;
          *((_DWORD *)this + 63) = a4;
          goto LABEL_13;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
LABEL_12:
    *((_DWORD *)this + 4) &= ~0x400u;
LABEL_13:
    *a5 = 1;
    return updated;
  }
  switch ( a3 )
  {
    case 0x15u:
      if ( *((_DWORD *)this + 58) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 58) = a4;
      if ( !*((_DWORD *)this + 60) )
      {
LABEL_26:
        *((_DWORD *)this + 4) &= ~0x800u;
        goto LABEL_13;
      }
      v8 = 0LL;
LABEL_25:
      updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, v8);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      goto LABEL_26;
    case 0xBu:
      if ( *((_DWORD *)this + 38) == a4 )
        return updated;
      *((_DWORD *)this + 38) = a4;
      goto LABEL_12;
    case 0xDu:
      if ( *((_QWORD *)this + 17) == a4 )
        return updated;
      *((_QWORD *)this + 17) = a4;
      goto LABEL_12;
    case 0xEu:
      if ( *((_QWORD *)this + 18) == a4 )
        return updated;
      *((_QWORD *)this + 18) = a4;
      goto LABEL_12;
    case 0x12u:
      if ( a4 > 4 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 59) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 59) = a4;
      goto LABEL_12;
    case 0x13u:
      if ( a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 62) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 62) = a4;
      goto LABEL_12;
    case 0x14u:
      if ( a4 <= 2 )
      {
        if ( *((_DWORD *)this + 60) == (_DWORD)a4 )
          return updated;
        v8 = (unsigned int)a4;
        goto LABEL_25;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
