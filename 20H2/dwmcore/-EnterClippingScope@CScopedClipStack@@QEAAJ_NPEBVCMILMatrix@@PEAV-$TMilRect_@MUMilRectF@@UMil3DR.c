/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800771F4
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800752FC (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180076BEC (-GetClipBoundsWorld@CScopedClipStack@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *a1, char a2, __int128 *a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r8d
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  int v18; // eax
  _BYTE v19[80]; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+80h] [rbp+17h]
  __int128 v21; // [rsp+90h] [rbp+27h] BYREF

  *(_QWORD *)v19 = 0LL;
  *(_DWORD *)&v19[8] = 0;
  *(_DWORD *)&v19[76] = 0;
  LOBYTE(v20) = a2;
  v21 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  CScopedClipStack::GetClipBoundsWorld(a1, &v21, a4);
  if ( a3 )
  {
    v13 = *a3;
    v14 = a3[1];
    *(_DWORD *)&v19[76] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v19[12] = v13;
    v15 = a3[2];
    *(_OWORD *)&v19[28] = v14;
    v16 = a3[3];
    *(_OWORD *)&v19[44] = v15;
    *(_OWORD *)&v19[60] = v16;
  }
  else
  {
    *(_QWORD *)&v19[64] = 0LL;
    *(_OWORD *)&v19[16] = 0LL;
    *(_OWORD *)&v19[48] = _xmm;
    *(_DWORD *)&v19[12] = 1065353216;
    *(_OWORD *)&v19[32] = _xmm;
    *(_DWORD *)&v19[72] = 1065353216;
    *(_WORD *)&v19[76] = 32085;
  }
  v7 = *((unsigned int *)a1 + 6);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v9 = 0;
    if ( v8 <= *((_DWORD *)a1 + 5) )
    {
      v10 = *(_QWORD *)a1;
      v11 = 84 * v7;
      *(_OWORD *)(v11 + v10) = *(_OWORD *)v19;
      *(_OWORD *)(v11 + v10 + 16) = *(_OWORD *)&v19[16];
      *(_OWORD *)(v11 + v10 + 32) = *(_OWORD *)&v19[32];
      *(_OWORD *)(v11 + v10 + 48) = *(_OWORD *)&v19[48];
      *(_OWORD *)(v11 + v10 + 64) = *(_OWORD *)&v19[64];
      *(_DWORD *)(v11 + v10 + 80) = v20;
      *((_DWORD *)a1 + 6) = v8;
      return (unsigned int)v9;
    }
    v18 = DynArrayImpl<0>::AddMultipleAndSet(a1, 84LL, 1LL, v19);
    v9 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v18, 0xC0u, 0LL);
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v9, 0x41u, 0LL);
  return (unsigned int)v9;
}
