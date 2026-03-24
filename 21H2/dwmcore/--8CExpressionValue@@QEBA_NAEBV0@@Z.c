/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074830
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180074090 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800E2CF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800F47CF (memcmp_0.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801B182C (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18021C094 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValue::operator==(_DWORD *Buf1, _DWORD *a2, __int64 a3)
{
  int v4; // ecx
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  LOBYTE(a3) = 0;
  v4 = Buf1[18];
  if ( v4 != a2[18] )
    return (unsigned __int8)a3;
  v5 = *((_BYTE *)Buf1 + 76);
  if ( v5 != *((_BYTE *)a2 + 76) )
    return (unsigned __int8)a3;
  if ( !v5 )
    goto LABEL_6;
  if ( v4 == 18 )
  {
    if ( *(float *)Buf1 != *(float *)a2 )
      return (unsigned __int8)a3;
LABEL_6:
    LOBYTE(a3) = 1;
    return (unsigned __int8)a3;
  }
  switch ( v4 )
  {
    case 11:
      v11 = *((_QWORD *)Buf1 + 8);
      if ( v11 && *((_QWORD *)a2 + 8) )
        LOBYTE(a3) = CPathData::operator==(*((_QWORD *)Buf1 + 8), *((_QWORD *)a2 + 8), a3);
      else
        LOBYTE(a3) = v11 == *((_QWORD *)a2 + 8);
      return (unsigned __int8)a3;
    case 17:
      LOBYTE(a3) = *(_BYTE *)Buf1 == *(_BYTE *)a2;
      return (unsigned __int8)a3;
    case 35:
      result = *(_QWORD *)Buf1 == *(_QWORD *)a2;
      break;
    case 42:
      if ( *(float *)Buf1 != *(float *)a2 )
        return (unsigned __int8)a3;
      goto LABEL_6;
    case 52:
      v9 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v9 = (unsigned int)Buf1[2] - (unsigned __int64)(unsigned int)a2[2];
      if ( v9 )
        return (unsigned __int8)a3;
      result = 1LL;
      break;
    case 69:
      v10 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v10 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
      LOBYTE(a3) = v10 == 0;
      return (unsigned __int8)a3;
    case 70:
      v7 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
        v7 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
      if ( !v7 )
        goto LABEL_6;
      result = 0LL;
      break;
    case 71:
      LOBYTE(a3) = (unsigned int)D2DQuaternion::operator==(Buf1, a2, a3) != 0;
      return (unsigned __int8)a3;
    case 104:
      v8 = *(_QWORD *)Buf1 - *(_QWORD *)a2;
      if ( *(_QWORD *)Buf1 == *(_QWORD *)a2 )
      {
        v8 = *((_QWORD *)Buf1 + 1) - *((_QWORD *)a2 + 1);
        if ( !v8 )
          v8 = *((_QWORD *)Buf1 + 2) - *((_QWORD *)a2 + 2);
      }
      if ( v8 )
        return (unsigned __int8)a3;
      result = 1LL;
      break;
    case 265:
      if ( !memcmp_0(Buf1, a2, 0x40uLL) )
        goto LABEL_6;
      result = 0LL;
      break;
    default:
      return (unsigned __int8)a3;
  }
  return result;
}
