/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00937E0
 * Callers:
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 * Callees:
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0093A7C (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C009B01C (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  __int64 DIBitmapReal; // rdi
  int DIBitsInternal; // ebx
  unsigned int v3; // edx
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
  DIBitmapReal = GreCreateDIBitmapReal(
                   *(_QWORD *)(gpDispInfo + 56LL),
                   0,
                   0,
                   (unsigned int)&v14,
                   0,
                   44,
                   0,
                   0LL,
                   0,
                   0LL,
                   0,
                   0LL,
                   (__int64)&v11);
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
      v3 = v14.bmiHeader.biWidth * v14.bmiHeader.biHeight;
      v4 = 0;
      v5 = v11;
      if ( v14.bmiHeader.biWidth * v14.bmiHeader.biHeight )
      {
        v6 = (_BYTE *)(v11 + 3);
        while ( !*v6 )
        {
          ++v4;
          v6 += 4;
          if ( v4 >= v3 )
            goto LABEL_12;
        }
        DIBitsInternal = 1;
      }
LABEL_12:
      if ( DIBitsInternal && v3 )
      {
        v7 = 0LL;
        v8 = v3;
        while ( 1 )
        {
          v9 = *(_DWORD *)(v7 + v5);
          v7 += 4LL;
          *(_BYTE *)(v7 + v5 - 2) = HIBYTE(v9) * BYTE2(v9) / 0xFFu;
          *(_BYTE *)(v7 + v11 - 3) = HIBYTE(v9) * BYTE1(v9) / 0xFFu;
          *(_BYTE *)(v7 + v11 - 4) = HIBYTE(v9) * (unsigned __int8)v9 / 0xFFu;
          if ( !--v8 )
            break;
          v5 = v11;
        }
      }
    }
    GreDecBitmapExclusiveRefCnt(DIBitmapReal);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(DIBitmapReal);
      return 0LL;
    }
  }
  return DIBitmapReal;
}
