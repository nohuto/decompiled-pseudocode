/*
 * XREFs of ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5
 * Callers:
 *     ?PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F56EE (-PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F57FD (-PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1F62D2 (-PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1F68ED (-PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15 (-bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z @ 0x1F6E6B (-vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z.c)
 *     ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z @ 0x1F6EE6 (-vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QAEXH@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F7199 (-vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

MULTIPANSURFLOCK *__thiscall MULTIPANSURFLOCK::MULTIPANSURFLOCK(
        MULTIPANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _SURFOBJ **a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int *a7,
        struct _CLIPOBJ *a8)
{
  struct _SURFOBJ *v9; // eax
  struct _SURFOBJ *v10; // ebx
  struct _SURFOBJ *v11; // edx
  int iType; // ecx
  USHORT v13; // ax
  int *v14; // edx
  USHORT v15; // ax
  int v16; // ebx
  int v17; // eax
  bool v18; // zf
  struct _SURFOBJ *v20; // eax
  struct _SURFOBJ *v21; // eax
  int v22; // [esp+10h] [ebp-10h]
  int v23; // [esp+14h] [ebp-Ch]
  signed __int32 v24; // [esp+18h] [ebp-8h] BYREF
  signed __int32 v25; // [esp+1Ch] [ebp-4h] BYREF

  v23 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_WORD *)this + 12) = 0;
  v22 = 0;
  memset((char *)this + 26, 0, 0xA2u);
  *a7 = 0;
  v9 = *a4;
  v10 = *a3;
  if ( *a4 > *a3 )
  {
    v11 = *a3;
    v10 = *a4;
  }
  else
  {
    v11 = *a4;
  }
  v24 = 3;
  if ( !v11 )
    goto LABEL_14;
  if ( v11 == v10 )
  {
    iType = v9->iType;
    if ( iType == 3 )
    {
      *(_DWORD *)this = v9;
      MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, 0);
    }
    else if ( (_WORD)iType == 1 )
    {
      *((_DWORD *)this + 4) = a2;
      do
      {
        MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
        v24 = 0;
        _InterlockedOr(&v24, 0);
      }
      while ( !MULTIPANSURFLOCK::bTryLockShadowR(this, a6, 0) );
      *a4 = (struct _SURFOBJ *)*((_DWORD *)a2 + 13);
      *a3 = (struct _SURFOBJ *)*((_DWORD *)a2 + 13);
      *a7 = 1;
    }
    return this;
  }
  v13 = v11->iType;
  if ( v13 == (_WORD)v24 )
  {
    *(_DWORD *)this = v11;
    MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, v11 == *a4);
LABEL_14:
    v14 = a7;
    goto LABEL_15;
  }
  if ( v13 != 1 )
    goto LABEL_14;
  *((_DWORD *)this + 4) = a2;
  v20 = (struct _SURFOBJ *)*((_DWORD *)a2 + 13);
  if ( v11 == *a4 )
  {
    *a4 = v20;
    v23 = 1;
    goto LABEL_14;
  }
  v22 = 1;
  *a3 = v20;
  v14 = a7;
  *a7 = 1;
LABEL_15:
  v25 = 0;
  _InterlockedOr(&v25, 0);
  if ( !v10 )
  {
LABEL_18:
    v16 = v23;
LABEL_19:
    v17 = v22;
    goto LABEL_20;
  }
  v15 = v10->iType;
  if ( v15 == (_WORD)v24 )
  {
    *((_DWORD *)this + 2) = v10;
    MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(this, v10 == *a4);
    goto LABEL_18;
  }
  if ( v15 != 1 )
    goto LABEL_18;
  *((_DWORD *)this + 5) = a2;
  v21 = (struct _SURFOBJ *)*((_DWORD *)a2 + 13);
  if ( v10 == *a4 )
  {
    *a4 = v21;
    v16 = 1;
    goto LABEL_19;
  }
  v16 = v23;
  *v14 = 1;
  *a3 = v21;
  v17 = 1;
  v22 = 1;
  do
  {
LABEL_20:
    if ( v17 )
      MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
    v25 = 0;
    _InterlockedOr(&v25, 0);
    if ( !v16 )
      break;
    v18 = MULTIPANSURFLOCK::bTryLockShadowR(this, a6, 0) == 0;
    v17 = v22;
  }
  while ( v18 );
  return this;
}
