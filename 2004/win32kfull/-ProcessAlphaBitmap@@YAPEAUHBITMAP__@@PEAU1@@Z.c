/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0065070
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     GreDecBitmapExclusiveRefCnt @ 0x1C006503C (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     GreGetDIBitsInternal @ 0x1C0075B1C (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  __int64 DIBitmapReal; // rdi
  __int64 v2; // rdx
  int DIBitsInternal; // ebx
  unsigned int v4; // ecx
  __int64 v5; // r10
  _BYTE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  unsigned int v9; // r8d
  __int64 v11; // [rsp+70h] [rbp-19h] BYREF
  __int128 v12; // [rsp+78h] [rbp-11h]
  __int128 v13; // [rsp+88h] [rbp-1h]
  tagBITMAPINFO v14; // [rsp+98h] [rbp+Fh] BYREF

  if ( !a1 )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1) || (_DWORD)v13 != 2097153 )
    return 0LL;
  *(_QWORD *)&v14.bmiHeader.biWidth = *(_QWORD *)((char *)&v12 + 4);
  memset(&v14.bmiHeader.biSizeImage, 0, 24);
  v14.bmiHeader.biSize = 40;
  *(_QWORD *)&v14.bmiHeader.biPlanes = 2097153LL;
  v11 = 0LL;
  DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 56LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, (__int64)&v11);
  if ( DIBitmapReal )
  {
    *(_QWORD *)&v14.bmiHeader.biWidth = *(_QWORD *)((char *)&v12 + 4);
    memset(&v14.bmiHeader.biSizeImage, 0, 24);
    v14.bmiHeader.biSize = 40;
    *(_QWORD *)&v14.bmiHeader.biPlanes = 2097153LL;
    DIBitsInternal = GreGetDIBitsInternal(
                       *(HDC *)(gpDispInfo + 56LL),
                       v11,
                       &v14,
                       0,
                       DWORD2(v12) * (((32 * DWORD1(v12)) >> 3) & 0xFFFFFFFC),
                       0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v2 = (unsigned int)(v14.bmiHeader.biWidth * v14.bmiHeader.biHeight);
      v4 = 0;
      v5 = v11;
      if ( (_DWORD)v2 )
      {
        v6 = (_BYTE *)(v11 + 3);
        while ( !*v6 )
        {
          ++v4;
          v6 += 4;
          if ( v4 >= (unsigned int)v2 )
            goto LABEL_12;
        }
        DIBitsInternal = 1;
      }
LABEL_12:
      if ( DIBitsInternal && (_DWORD)v2 )
      {
        v7 = 0LL;
        v8 = (unsigned int)v2;
        while ( 1 )
        {
          v9 = *(_DWORD *)(v7 + v5);
          v7 += 4LL;
          *(_BYTE *)(v7 + v5 - 2) = HIBYTE(v9) * BYTE2(v9) / 0xFFu;
          *(_BYTE *)(v7 + v11 - 3) = HIBYTE(v9) * BYTE1(v9) / 0xFFu;
          v2 = HIBYTE(v9) * (unsigned __int8)v9 / 0xFFu;
          *(_BYTE *)(v7 + v11 - 4) = v2;
          if ( !--v8 )
            break;
          v5 = v11;
        }
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal, v2);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
