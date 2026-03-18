/*
 * XREFs of _GreRectVisible@8 @ 0x53700
 * Callers:
 *     _NtGdiRectVisible@8 @ 0x5369E (_NtGdiRectVisible@8.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 */

int __fastcall GreRectVisible(HDC a1, LONG *a2)
{
  int v3; // ebx
  DC *v4; // ecx
  struct REGION *v5; // eax
  LONG *v6; // esi
  struct _RECTL *v7; // ecx
  DC *v8; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v10; // esi
  LONG v12; // eax
  LONG v13; // edx
  int v14; // eax
  int v15; // esi
  _DWORD v16[2]; // [esp+34h] [ebp-DCh] BYREF
  DC *v17; // [esp+3Ch] [ebp-D4h] BYREF
  int v18; // [esp+40h] [ebp-D0h]
  int v19; // [esp+44h] [ebp-CCh]
  int v20; // [esp+48h] [ebp-C8h] BYREF
  int v21; // [esp+4Ch] [ebp-C4h]
  struct REGION *v22; // [esp+50h] [ebp-C0h] BYREF
  _DWORD v23[3]; // [esp+54h] [ebp-BCh] BYREF
  _BYTE v24[20]; // [esp+60h] [ebp-B0h] BYREF
  _DWORD v25[3]; // [esp+74h] [ebp-9Ch] BYREF
  char v26; // [esp+80h] [ebp-90h]
  char v27; // [esp+81h] [ebp-8Fh]
  _DWORD v28[19]; // [esp+90h] [ebp-80h] BYREF
  struct _RECTL v29; // [esp+DCh] [ebp-34h] BYREF
  struct _POINTL v30; // [esp+ECh] [ebp-24h] BYREF
  struct _POINTL v31; // [esp+F4h] [ebp-1Ch] BYREF
  LONG v32; // [esp+FCh] [ebp-14h]
  int v33; // [esp+100h] [ebp-10h]
  LONG v34; // [esp+104h] [ebp-Ch]
  int v35; // [esp+108h] [ebp-8h]

  v16[0] = a2;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v17, a1);
  if ( !v17 )
  {
    EngSetLastError(6u);
    v3 = -1;
    goto LABEL_13;
  }
  memset(v25, 0, sizeof(v25));
  v26 = 0;
  v3 = 1;
  v27 = 1;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)&v17, 1);
  if ( (v24[12] & 1) != 0 )
  {
    if ( DC::prgnRao(v17) )
      v5 = DC::prgnRao(v4);
    else
      v5 = DC::prgnVisSnap(v4);
    v22 = v5;
    v29.left = *a2;
    v6 = a2 + 1;
    v29.top = *v6++;
    v29.right = *v6;
    v29.bottom = v6[1];
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v23, (struct XDCOBJ *)&v17, 0x80000204);
    if ( (*(_BYTE *)(v23[0] + 56) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)v23, &v29);
      if ( (*(_BYTE *)(v23[0] + 56) & 0x43) != 0x43 )
        bCvtPts1(v23[0], &v29, 2);
      if ( v23[2] )
      {
        ++v29.left;
        ++v29.right;
      }
      ERECTL::bOffsetAdd((ERECTL *)&v29, (const struct _POINTL *)v17 + (*((_DWORD *)v17 + 7) & 1) + 131, 0);
      v3 = RGNOBJ::bInside((RGNOBJ *)&v22, v7) == 2;
      goto LABEL_11;
    }
    v12 = *(_DWORD *)(v16[0] + 8);
    v13 = *(_DWORD *)v16[0];
    v30.y = *(_DWORD *)(v16[0] + 4);
    v31.x = v12;
    v31.y = v30.y;
    v32 = v12;
    v14 = *(_DWORD *)(v16[0] + 12);
    v30.x = v13;
    v33 = v14;
    v34 = v13;
    v35 = v14;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v28);
    if ( v28[2] )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v28, (struct EXFORMOBJ *)v23, &v30)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v28, (struct EXFORMOBJ *)v23, &v31, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v28) )
      {
        v21 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v20, (struct EPATHOBJ *)v28, 1u, 0);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
        if ( v20 && v16[0] )
        {
          if ( !RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v20, 8u)
            || RGNOBJ::iComplexity((RGNOBJ *)v16) == 1 )
          {
            v15 = 1;
          }
          else
          {
            v15 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v15 = -1;
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v16);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
        if ( v16[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v16);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
        if ( v21 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
        goto LABEL_28;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v15 = -1;
LABEL_28:
    v3 = v15;
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v28);
  }
LABEL_11:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
  if ( v25[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v25);
LABEL_13:
  v8 = v17;
  if ( v17 )
  {
    if ( v18 && (*((_BYTE *)v17 + 32) & 2) != 0 )
    {
      if ( !v19 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v17);
        v8 = v17;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v17, UserAttr);
          v8 = v17;
        }
      }
      *((_DWORD *)v8 + 8) &= ~2u;
      v18 = 0;
      v8 = v17;
    }
    v16[0] = 0;
    v10 = *(_DWORD *)v8;
    HmgDecrementExclusiveReferenceCountEx(v8, v19, v16);
    if ( v16[0] )
      bDeleteDCInternalEx(v10, 0);
  }
  return v3;
}
