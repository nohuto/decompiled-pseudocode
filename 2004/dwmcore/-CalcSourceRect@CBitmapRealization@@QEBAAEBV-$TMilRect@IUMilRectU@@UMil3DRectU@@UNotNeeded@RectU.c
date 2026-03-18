/*
 * XREFs of ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180019AB4
 * Callers:
 *     ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180019AA0 (-GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeede.c)
 *     ?GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802641FC (-GetSourceRect@CDxHandleYUVBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNe.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080388 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CBitmapRealization::CalcSourceRect(__int64 a1)
{
  int v1; // edi
  _DWORD *result; // rax
  int *v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64 *); // rcx
  bool v6; // zf
  int v7; // r10d
  int v8; // r11d
  bool v9; // cl
  int v10; // ecx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-20h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 280) )
    return (_DWORD *)(a1 + 264);
  v4 = (int *)(a1 + 144);
  v5 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16);
  (**v5)(v5, &v11);
  v6 = *(_DWORD *)(a1 + 80) == 3;
  v7 = v11;
  v8 = HIDWORD(v11);
  v12[1] = v11;
  v12[0] = 0LL;
  v9 = 0;
  if ( v6 )
  {
    v9 = *v4 <= v4[2]
      && v4[1] <= v4[3]
      && (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(v12, v4);
  }
  else if ( *(_BYTE *)(a1 + 281) && v4[2] - *v4 > 0 )
  {
    v9 = v4[3] - v4[1] > 0;
  }
  result = (_DWORD *)(a1 + 264);
  if ( v9 )
  {
    v8 = *(_DWORD *)(a1 + 156);
    v7 = *(_DWORD *)(a1 + 152);
    v1 = *(_DWORD *)(a1 + 148);
    v10 = *v4;
  }
  else
  {
    v10 = 0;
  }
  *result = v10;
  *(_DWORD *)(a1 + 268) = v1;
  *(_DWORD *)(a1 + 272) = v7;
  *(_DWORD *)(a1 + 276) = v8;
  *(_BYTE *)(a1 + 280) = 1;
  return result;
}
