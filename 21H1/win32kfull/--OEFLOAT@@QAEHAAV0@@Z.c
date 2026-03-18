/*
 * XREFs of ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48
 * Callers:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     _FLOATOBJ_GreaterThan@8 @ 0x1F315E (_FLOATOBJ_GreaterThan@8.c)
 *     _FLOATOBJ_GreaterThanLong@8 @ 0x1F3177 (_FLOATOBJ_GreaterThanLong@8.c)
 *     _FLOATOBJ_LessThan@8 @ 0x1F31C1 (_FLOATOBJ_LessThan@8.c)
 *     _FLOATOBJ_LessThanLong@8 @ 0x1F31DA (_FLOATOBJ_LessThanLong@8.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _GreSetMiterLimit@12 @ 0x211440 (_GreSetMiterLimit@12.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 *     ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87 (-bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z.c)
 *     ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329 (-vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 *     ?bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z @ 0x235446 (-bMiterInLimit@WIDENER@@IAEHVEVECTORFX@@@Z.c)
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EFLOAT::operator>(int *this, int *a2)
{
  int v3; // ebx
  BOOL result; // eax
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx

  v3 = *this;
  result = 0;
  v5 = *a2;
  v6 = *this >> 31;
  if ( SHIDWORD(v5) < v6 )
    return 1;
  if ( SHIDWORD(v5) > v6 )
    return result;
  v7 = this[1];
  v8 = a2[1];
  if ( v7 == v8 )
    return v3 > (int)v5;
  if ( *a2 < 0 )
  {
    if ( v7 >= v8 )
      return result;
    return 1;
  }
  if ( v7 > v8 && v3 || !(_DWORD)v5 )
    return 1;
  return result;
}
