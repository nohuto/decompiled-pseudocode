/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039550
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800394A0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180046B20 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *a1, char a2, __int128 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rcx
  int v17; // eax
  _BYTE v18[80]; // [rsp+30h] [rbp-39h] BYREF
  int v19; // [rsp+80h] [rbp+17h]
  __int128 v20; // [rsp+90h] [rbp+27h]

  *(_QWORD *)v18 = 0LL;
  *(_DWORD *)&v18[8] = 0;
  *(_DWORD *)&v18[76] = 0;
  LOBYTE(v19) = a2;
  v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  CScopedClipStack::GetClipBoundsWorld(a1);
  if ( a3 )
  {
    v12 = *a3;
    v13 = a3[1];
    *(_DWORD *)&v18[76] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v18[12] = v12;
    v14 = a3[2];
    *(_OWORD *)&v18[28] = v13;
    v15 = a3[3];
    *(_OWORD *)&v18[44] = v14;
    *(_OWORD *)&v18[60] = v15;
  }
  else
  {
    *(_QWORD *)&v18[64] = 0LL;
    *(_OWORD *)&v18[16] = 0LL;
    *(_OWORD *)&v18[48] = _xmm;
    *(_DWORD *)&v18[12] = 1065353216;
    *(_OWORD *)&v18[32] = _xmm;
    *(_DWORD *)&v18[72] = 1065353216;
    *(_WORD *)&v18[76] = 32085;
  }
  v6 = *((unsigned int *)a1 + 6);
  v7 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v8 = 0;
    if ( v7 <= *((_DWORD *)a1 + 5) )
    {
      v9 = *(_QWORD *)a1;
      v10 = 84 * v6;
      *(_OWORD *)(v10 + v9) = *(_OWORD *)v18;
      *(_OWORD *)(v10 + v9 + 16) = *(_OWORD *)&v18[16];
      *(_OWORD *)(v10 + v9 + 32) = *(_OWORD *)&v18[32];
      *(_OWORD *)(v10 + v9 + 48) = *(_OWORD *)&v18[48];
      *(_OWORD *)(v10 + v9 + 64) = *(_OWORD *)&v18[64];
      *(_DWORD *)(v10 + v9 + 80) = v19;
      *((_DWORD *)a1 + 6) = v7;
      return (unsigned int)v8;
    }
    v17 = DynArrayImpl<0>::AddMultipleAndSet(a1, 84LL, 1LL, v18);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0xC0u, 0LL);
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v8, 0x41u, 0LL);
  return (unsigned int)v8;
}
