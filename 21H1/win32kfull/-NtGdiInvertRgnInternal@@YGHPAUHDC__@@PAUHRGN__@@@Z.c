/*
 * XREFs of ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A
 * Callers:
 *     _NtGdiInvertRgn@8 @ 0x1FEC75 (_NtGdiInvertRgn@8.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0 (-GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z.c)
 */

int __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  int v2; // ebx
  DC *v4; // eax
  int v5; // edi
  DC *v6; // eax
  REGION *v7; // ecx
  DC *v8; // eax
  DC *v9; // esi
  REGION *v10; // edi
  int *v11; // ecx
  DC *v12; // ecx
  struct REGION *v13; // eax
  struct ECLIPOBJ *v14; // ecx
  int *v16; // [esp+24h] [ebp-130h]
  unsigned int v17; // [esp+28h] [ebp-12Ch]
  DC *v18[3]; // [esp+30h] [ebp-124h] BYREF
  REGION *v19; // [esp+3Ch] [ebp-118h] BYREF
  int v20; // [esp+40h] [ebp-114h]
  REGION *v21[3]; // [esp+44h] [ebp-110h] BYREF
  BOOL v22; // [esp+50h] [ebp-104h]
  REGION *v23; // [esp+54h] [ebp-100h]
  _DWORD v24[3]; // [esp+58h] [ebp-FCh] BYREF
  _DWORD v25[3]; // [esp+64h] [ebp-F0h] BYREF
  char v26; // [esp+70h] [ebp-E4h]
  _DWORD v27[3]; // [esp+78h] [ebp-DCh] BYREF
  __int16 v28; // [esp+84h] [ebp-D0h]
  LONG v29[4]; // [esp+ACh] [ebp-A8h] BYREF
  _DWORD v30[4]; // [esp+BCh] [ebp-98h] BYREF
  CLIPOBJ pco; // [esp+CCh] [ebp-88h] BYREF
  int v32; // [esp+110h] [ebp-44h]
  int v33; // [esp+114h] [ebp-40h]
  int v34; // [esp+13Ch] [ebp-18h]
  int v35; // [esp+144h] [ebp-10h]

  v2 = 0;
  memset(v18, 0, sizeof(v18));
  XDCOBJ::vLock((XDCOBJ *)v18, a1);
  v4 = v18[0];
  v5 = 0;
  v23 = 0;
  if ( !v18[0] || (*((_DWORD *)v18[0] + 6) & 0x10000) != 0 )
    goto LABEL_40;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v24, (struct XDCOBJ *)v18, -2147483132);
  v22 = DC::bWorldToDeviceIdentity(v18[0]);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1);
  if ( v21[0] )
  {
    if ( !v22 )
    {
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v25);
      if ( !v25[2] )
      {
        EngSetLastError(8u);
LABEL_7:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v25);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
        v4 = v18[0];
        goto LABEL_41;
      }
      if ( !v24[0] || !RGNOBJ::bCreate((RGNOBJ *)v21, (struct EPATHOBJ *)v25, (struct EXFORMOBJ *)v24) )
        goto LABEL_7;
      v20 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v19, (struct EPATHOBJ *)v25, 1u, 0);
      if ( !v19 )
      {
        EngSetLastError(8u);
        if ( v20 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
        goto LABEL_7;
      }
      v23 = v21[0];
      v21[0] = v19;
      if ( v20 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v25);
    }
    if ( RGNOBJ::iComplexity((RGNOBJ *)v21) == 1 )
      goto LABEL_36;
    v6 = v18[0];
    v30[0] = *((_DWORD *)v21[0] + 16);
    v30[1] = *((_DWORD *)v21[0] + 17);
    v30[2] = *((_DWORD *)v21[0] + 18);
    v30[3] = *((_DWORD *)v21[0] + 19);
    if ( (*((_BYTE *)v18[0] + 24) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v18, (struct ERECTL *)v30);
      v6 = v18[0];
    }
    if ( !*((_DWORD *)v6 + 126) )
    {
LABEL_36:
      v5 = 1;
LABEL_37:
      if ( !v22 )
      {
        REGION::vDeleteREGION(v21[0]);
        v21[0] = v23;
      }
      goto LABEL_39;
    }
    memset(v27, 0, sizeof(v27));
    v28 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)v18, 0);
    v7 = v21[0];
    v8 = v18[0];
    if ( !v21[0] )
      *((_DWORD *)v18[0] + 6) |= 0x10u;
    *((_DWORD *)v8 + 286) = v7;
    v9 = v18[0];
    v10 = (REGION *)*((_DWORD *)v18[0] + 126);
    v19 = v10;
    if ( (v26 & 1) != 0 )
    {
      if ( DC::bTightenRao(v18[0]) )
      {
        ERECTL::bOffsetAdd((ERECTL *)v30, (const struct _POINTL *)v18[0] + (*((_DWORD *)v18[0] + 7) & 1) + 131, 0);
        GreScaleValuesInternal(v11, v18, (struct XDCOBJ *)4, v16, v17);
        if ( DC::prgnRao(v18[0]) )
          v13 = DC::prgnRao(v12);
        else
          v13 = DC::prgnVisSnap(v12);
        v32 = 0;
        v33 = 0;
        v34 = 1;
        v35 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v13, (struct ERECTL *)v30, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_BYTE *)v18[0] + 24) & 0xE0) != 0 )
          {
            v29[0] = *(_DWORD *)v14;
            v29[1] = *((_DWORD *)v14 + 1);
            v29[2] = *((_DWORD *)v14 + 2);
            v29[3] = *((_DWORD *)v14 + 3);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v18, v14, v29);
            v10 = v19;
          }
          ++*((_DWORD *)v10 + 14);
          EngPaint((SURFOBJ *)((char *)v10 + 16), &pco, 0, 0, 0x606u);
        }
        v9 = v18[0];
        v5 = 1;
        goto LABEL_34;
      }
      v9 = v18[0];
    }
    v5 = XDCOBJ::bFullScreen(v18);
LABEL_34:
    *((_DWORD *)v9 + 6) |= 0x10u;
    *((_DWORD *)v9 + 286) = 0;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
    if ( v27[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v27);
    goto LABEL_37;
  }
LABEL_39:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v21);
  v4 = v18[0];
LABEL_40:
  v2 = v5;
LABEL_41:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v2;
}
