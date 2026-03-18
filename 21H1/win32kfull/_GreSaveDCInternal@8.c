/*
 * XREFs of _GreSaveDCInternal@8 @ 0xF7458
 * Callers:
 *     _NtGdiSaveDC@4 @ 0x9305C (_NtGdiSaveDC@4.c)
 *     _GreSaveDC@4 @ 0x93070 (_GreSaveDC@4.c)
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bSavePath@@YGHAAVXDCOBJ@@J@Z @ 0x93078 (-bSavePath@@YGHAAVXDCOBJ@@J@Z.c)
 *     ?bSaveRegion@@YGHAAVDCOBJ@@J@Z @ 0x9309C (-bSaveRegion@@YGHAAVDCOBJ@@J@Z.c)
 *     ?bRedirection@DC@@QAEXH@Z @ 0x9311E (-bRedirection@DC@@QAEXH@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRestorePath@@YGXAAVXDCOBJ@@J@Z @ 0x1E6350 (-vRestorePath@@YGXAAVXDCOBJ@@J@Z.c)
 */

int __fastcall GreSaveDCInternal(HDC a1, int a2)
{
  DC *v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  DC **v9; // edi
  int v10; // esi
  int v11; // eax
  DC *v12; // ecx
  int v13; // edx
  int v15; // [esp+10h] [ebp-3Ch] BYREF
  int v16; // [esp+14h] [ebp-38h]
  int v17; // [esp+18h] [ebp-34h]
  DC **v18; // [esp+1Ch] [ebp-30h]
  int v19; // [esp+20h] [ebp-2Ch]
  int v20; // [esp+24h] [ebp-28h]
  int v21; // [esp+28h] [ebp-24h]
  int v22; // [esp+2Ch] [ebp-20h] BYREF
  DC *v23[3]; // [esp+30h] [ebp-1Ch] BYREF
  DC *v24[4]; // [esp+3Ch] [ebp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  v3 = v23[0];
  v4 = 0;
  if ( !v23[0] )
    goto LABEL_39;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v23[0]) + 4) & 0xFFFFFFFE) != 0 )
    {
      v3 = v23[0];
      goto LABEL_5;
    }
LABEL_39:
    EngSetLastError(6u);
    goto LABEL_40;
  }
LABEL_5:
  v5 = *((_DWORD *)v3 + 255);
  v6 = *(_DWORD *)(v5 + 184);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_DWORD *)(v5 + 188));
    v3 = v23[0];
  }
  if ( (v6 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3, *(_DWORD *)(*((_DWORD *)v3 + 255) + 192));
    v3 = v23[0];
  }
  v7 = *((_DWORD *)v3 + 9);
  v15 = v7;
  if ( (*(_BYTE *)(v7 + 24) & 1) != 0 )
    GreLockVisRgn(v7);
  v22 = _ghsemPalette;
  GreAcquireSemaphore(_ghsemPalette);
  v8 = *((_DWORD *)v23[0] + 6) & 0x800;
  if ( v8 )
    DC::bMakeInfoDC(v23[0], 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v24, (struct DCOBJ *)v23);
  if ( v24[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
    v9 = v23;
    v21 = *((_DWORD *)v23[0] + 19);
    *((_DWORD *)v23[0] + 19) = *(_DWORD *)v24[0];
    v20 = *((_DWORD *)v24[0] + 17);
    v17 = bSavePath((struct XDCOBJ *)v23, v20 + 1);
    if ( !v17 )
      goto LABEL_33;
    v19 = *((_DWORD *)v24[0] + 17);
    v16 = bSaveRegion((struct DCOBJ *)v23, v19 + 1);
    if ( v16 )
    {
      if ( GreSetDCOwnerEx(*(_DWORD *)v24[0], -2147483630, 0, 0) )
      {
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v24[3] = (DC *)1;
        PDEVOBJ::vUnreferencePdev(&v15, 0);
        if ( (*((_DWORD *)v23[0] + 6) & 0x4000) != 0 )
          DC::bRedirection(v24[0], 1);
        v10 = *((_DWORD *)v24[0] + 126);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 72);
          if ( (v11 & 0x800) != 0 )
          {
            INC_SHARE_REF_CNT(*((_DWORD *)v24[0] + 126));
          }
          else if ( v11 >= 0 )
          {
            INC_SHARE_REF_CNT(*((_DWORD *)v24[0] + 126));
            ++*(_DWORD *)(v10 + 112);
          }
        }
        INC_SHARE_REF_CNT(*((_DWORD *)v23[0] + 23));
        INC_SHARE_REF_CNT(*((_DWORD *)v23[0] + 24));
        INC_SHARE_REF_CNT(*((_DWORD *)v23[0] + 25));
        INC_SHARE_REF_CNT(*((_DWORD *)v23[0] + 16));
        v12 = v23[0];
        v13 = *((_DWORD *)v23[0] + 15);
        if ( (struct PALETTE *)v13 != ppalDefault )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 40));
          v12 = v23[0];
        }
        v4 = *((_DWORD *)v12 + 17);
        v9 = v18;
        *((_DWORD *)v12 + 17) = v4 + 1;
      }
      if ( v16 )
        vRestoreRegion(v23, v19);
    }
    if ( v17 )
      vRestorePath((struct XDCOBJ *)v23, v20);
    if ( v9 )
LABEL_33:
      *((_DWORD *)*v9 + 19) = v21;
  }
  else
  {
    EngSetLastError(8u);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v24);
  if ( v8 )
    DC::bMakeInfoDC(v23[0], 1);
  if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
    GreUnlockVisRgn(v15);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
LABEL_40:
  if ( v23[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v23);
  return v4;
}
