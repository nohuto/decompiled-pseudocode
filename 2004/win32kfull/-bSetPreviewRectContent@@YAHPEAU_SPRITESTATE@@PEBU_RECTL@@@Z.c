/*
 * XREFs of ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C0280B38
 * Callers:
 *     bMoveDevPreviewRect @ 0x1C028696C (bMoveDevPreviewRect.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027EB4C (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall bSetPreviewRectContent(void **a1, const struct _RECTL *a2)
{
  unsigned int updated; // r14d
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  HDEV HDEV; // rax
  void *v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v14; // [rsp+88h] [rbp-78h] BYREF
  __int64 v15; // [rsp+90h] [rbp-70h] BYREF
  char v16; // [rsp+98h] [rbp-68h]
  int v17; // [rsp+9Ch] [rbp-64h]
  struct PALETTE *v18; // [rsp+A0h] [rbp-60h] BYREF
  int v19; // [rsp+A8h] [rbp-58h]
  __int128 v20; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-40h]
  _QWORD v22[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h] BYREF
  char v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+ECh] [rbp-14h]
  __m128i v26; // [rsp+F0h] [rbp-10h] BYREF
  struct PALETTE *v27; // [rsp+100h] [rbp+0h] BYREF
  int v28; // [rsp+108h] [rbp+8h]
  struct _RECTL v29; // [rsp+110h] [rbp+10h] BYREF
  struct _RECTL v30; // [rsp+120h] [rbp+20h] BYREF
  __m128i si128; // [rsp+130h] [rbp+30h] BYREF
  int v32; // [rsp+140h] [rbp+40h]
  __m128i v33; // [rsp+144h] [rbp+44h]

  v14.cx = a2->right - a2->left;
  updated = 0;
  v14.cy = a2->bottom - a2->top;
  v20 = 0LL;
  v21 = 0LL;
  CompatibleDC = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v6 = (HDC)CompatibleDC;
  if ( CompatibleDC )
  {
    GreSetDCOwnerEx(CompatibleDC, 0LL, 0LL, 0LL);
    v22[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v22, v6);
    if ( v22[0] )
    {
      XDCOBJ::vUnlockFast((XDCOBJ *)v22);
      v28 = 0;
      v27 = 0LL;
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v27, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x300u, 1) )
      {
        v19 = 0;
        v18 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v18, 8u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu, 0x200u, 1) )
        {
          *(struct tagSIZE *)((char *)&v20 + 4) = v14;
          v19 = 1;
          LODWORD(v20) = 6;
          HIDWORD(v20) = 0;
          *(_QWORD *)&v21 = *(_QWORD *)v18;
          DWORD2(v21) = 1;
          v15 = 0LL;
          v16 = 0;
          v17 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v15, (struct _DEVBITMAPINFO *)&v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
            && v15 )
          {
            LOBYTE(v7) = 5;
            HmgSetOwner(*(_QWORD *)(v15 + 32), 0LL, v7);
            *((_QWORD *)&v20 + 1) = 0x2400000003LL;
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            v32 = 1174412344;
            v33 = si128;
            *(_QWORD *)&v20 = 0x300000006LL;
            *(_QWORD *)&v21 = *(_QWORD *)v18;
            DWORD2(v21) = 1;
            v23 = 0LL;
            v24 = 0;
            v25 = 0;
            if ( SURFMEM::bCreateDIB(
                   (SURFMEM *)&v23,
                   (struct _DEVBITMAPINFO *)&v20,
                   &si128,
                   0LL,
                   0,
                   0LL,
                   0LL,
                   0,
                   1,
                   0,
                   0) )
            {
              if ( v23 )
              {
                *(struct tagSIZE *)&v29.right = v14;
                *(_QWORD *)&v29.left = 0LL;
                v30 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
                v26 = _mm_load_si128((const __m128i *)&_xmm);
                updated = EngNineGridHelper(
                            (struct XDCOBJ *)v22,
                            v18,
                            v27,
                            (struct _SURFOBJ *)(v15 + 24),
                            (struct _SURFOBJ *)(v23 + 24),
                            &v29,
                            &v30,
                            (struct _MARGINS *)&v26);
                if ( updated )
                {
                  v8 = *(_QWORD *)(v15 + 32);
                  *(_DWORD *)(v15 + 112) |= 0x4000000u;
                  v9 = GreSelectBitmap(v6, v8);
                  *(_DWORD *)(v15 + 112) &= ~0x4000000u;
                  v29.left = a2->left;
                  v29.top = a2->top;
                  v13 = 33488896;
                  v26.m128i_i64[0] = 0LL;
                  HDEV = (HDEV)UserGetHDEV();
                  LODWORD(v12) = 2;
                  updated = GreUpdateSprite(
                              HDEV,
                              0LL,
                              a1[145],
                              0LL,
                              (struct tagPOINT *)&v29,
                              &v14,
                              v6,
                              (struct tagPOINT *)&v26,
                              0,
                              (struct _BLENDFUNCTION *)&v13,
                              v12,
                              0LL,
                              0LL,
                              1,
                              0);
                  *(_DWORD *)(v15 + 112) |= 0x4000000u;
                  GreSelectBitmap(v6, v9);
                  *(_DWORD *)(v15 + 112) &= ~0x4000000u;
                }
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v23);
          }
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v18);
          SURFMEM::~SURFMEM((SURFMEM *)&v15);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v27);
    }
    GreSetDCOwnerEx(v6, 2147483650LL, 0LL, 0LL);
    GreDeleteDC(v6);
  }
  return updated;
}
