/*
 * XREFs of _xxxCompositedPaint@4 @ 0x19D911
 * Callers:
 *     ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0 (-xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?xxxCompositedTraverse@@YGHPAUtagWND@@@Z @ 0x19D7D9 (-xxxCompositedTraverse@@YGHPAUtagWND@@@Z.c)
 */

void __thiscall xxxCompositedPaint(_DWORD *this)
{
  int Prop; // eax
  int *v3; // esi
  _DWORD *v4; // edi
  BOOL v5; // eax
  int EmptyRgnPublic; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // ebx
  HDC DCEx; // edi
  _DWORD *v16; // edi
  int v17; // [esp-4h] [ebp-34h]
  _BYTE v18[8]; // [esp+10h] [ebp-20h] BYREF
  int v19; // [esp+18h] [ebp-18h] BYREF
  int v20; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  _DWORD *v22; // [esp+24h] [ebp-Ch]
  int v23; // [esp+2Ch] [ebp-4h]

  v22 = this;
  SetOrClrWF(1, (int)this, 0xB10u, 1);
  v20 = xxxCompositedTraverse(this);
  SetOrClrWF(0, (int)this, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  Prop = _GetProp((int)this, (unsigned __int16)atomLayer, 1);
  v3 = (int *)Prop;
  if ( Prop )
  {
    v4 = (_DWORD *)(Prop + 8);
    v23 = Prop + 8;
    v5 = ERECTL::bWrapped((ERECTL *)(Prop + 8));
    if ( v20 || v5 )
    {
      v7 = v5;
    }
    else
    {
      EmptyRgnPublic = v3[7];
      if ( EmptyRgnPublic || (EmptyRgnPublic = CreateEmptyRgnPublic(), (v3[7] = EmptyRgnPublic) != 0) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(_ghrgnInv2, v3 + 2);
          GreCombineRgn(v3[7], v3[7], _ghrgnInv2, 2);
        }
      }
      else
      {
        v3[7] = 1;
      }
      *v4 = 0;
      v3[3] = 0;
      v3[4] = 0;
      v3[5] = 0;
      v7 = 1;
    }
    v8 = v3[7];
    if ( v8 )
    {
      xxxInternalInvalidate((int)this, v8, 1157);
      DeleteMaybeSpecialRgn(v3[7]);
      v3[7] = 0;
    }
    if ( !v7 )
    {
      v17 = *v3;
      if ( (*(_BYTE *)(this[5] + 18) & 8) != 0 )
      {
        v19 = 0;
        v20 = 0;
        v9 = GreSelectBitmap(_ghdcMem, v17);
        v10 = (_DWORD *)this[5];
        v11 = v9;
        v21 = v10[15] - v10[13];
        v22 = (_DWORD *)(v10[16] - v10[14]);
        UpdateSprite(
          *(_DWORD *)(_gpDispInfo + 20),
          this,
          0,
          0,
          0,
          (int)&v21,
          _ghdcMem,
          (int)&v19,
          0,
          0,
          0x40000000,
          v23);
        GreSelectBitmap(_ghdcMem, v11);
      }
      else
      {
        v12 = GreSelectBitmap(_ghdcMem, v17);
        v13 = (int)v22;
        v14 = v12;
        SetOrClrWF(0, (int)v22, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(v13, 0, 1073807363);
        NtGdiBitBltInternal(
          DCEx,
          *(_DWORD *)v23,
          *(struct XDCOBJ **)(v23 + 4),
          *(_DWORD *)(v23 + 8) - *(_DWORD *)v23,
          *(_DWORD *)(v23 + 12) - *(_DWORD *)(v23 + 4),
          _ghdcMem,
          *(struct ECLIPOBJ **)v23,
          *(struct ECLIPOBJ **)(v23 + 4),
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (int)v22, 0xB20u, 1);
        GreSelectBitmap(_ghdcMem, v14);
      }
      v16 = (_DWORD *)v23;
      *(_DWORD *)v23 = 0;
      *++v16 = 0;
      *++v16 = 0;
      v16[1] = 0;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
}
