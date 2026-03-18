/*
 * XREFs of SetRedirectedWindow @ 0x1C009100C
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C003CC6C (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxPrintWindow @ 0x1C01E7A70 (xxxPrintWindow.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UpdateWindowSpriteDPI @ 0x1C0090E4C (UpdateWindowSpriteDPI.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     RedirectDCEs @ 0x1C0091AD0 (RedirectDCEs.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00F50CC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E76E0 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v4; // r12d
  int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // rsi
  BOOL v8; // esi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  __int64 v14; // rcx
  __int64 SolidBrush; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  HBRUSH v18; // r8
  __int64 v19; // r13
  HBITMAP RedirectionBitmap; // rax
  __int64 Prop; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-28h] BYREF
  RECT v25; // [rsp+38h] [rbp-18h] BYREF
  HBITMAP v26; // [rsp+A0h] [rbp+50h] BYREF
  HBRUSH v27; // [rsp+A8h] [rbp+58h]

  v26 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v24, 0LL);
  v4 = a2 & 0x10;
  v5 = 0;
  v6 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap((__int64)a1) )
  {
    if ( v6 == 1 )
    {
      RedirectionBitmap = (HBITMAP)GetRedirectionBitmap((__int64)a1);
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0);
    }
    goto LABEL_39;
  }
  v7 = *((_QWORD *)a1 + 17);
  if ( v7 != *(_QWORD *)v24[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v24);
    if ( v7 )
    {
      v24[0] = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v24[0] + 8LL);
    }
    else
    {
      v24[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v8 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v8 = v6 == 1;
    if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24[0] + 8LL) + 8LL) & 0x40) == 0
      && v6 == 1 )
    {
      v8 = 1;
    }
    if ( !v8 )
    {
      v9 = -2143420411;
      goto LABEL_42;
    }
  }
  v9 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (HSURF *)&v26);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap((void **)a1, v26, 0) )
    {
      SetOrClrWF(1LL, a1, 2848LL, 1LL);
      v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v10);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v26, 0LL);
      v9 = -1073741801;
    }
    if ( v9 >= 0 )
    {
      if ( v6 == 2 )
        IncrementCompositedCount(a1);
      if ( v6 == 1 )
      {
        v11 = *((_QWORD *)a1 + 5);
        if ( (*(_QWORD *)(v11 + 88) != *(_QWORD *)(v11 + 104)
           || *(_QWORD *)(v11 + 96) != *(_QWORD *)(v11 + 112)
           || *(_QWORD *)(v11 + 168))
          && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v11 + 88)) )
        {
          v13 = 0LL;
          v27 = (HBRUSH)ghbrWhite;
          v14 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1092LL);
          if ( (_DWORD)v14 )
          {
            SolidBrush = GreCreateSolidBrush(v14);
            v12 = *((_QWORD *)a1 + 5);
            v13 = (HBRUSH)SolidBrush;
          }
          v16 = *(__m128i *)(v12 + 88);
          v25.bottom = v16.m128i_i32[3] - v16.m128i_i32[1];
          v25.top = 0;
          v25.right = v16.m128i_i32[2] - _mm_cvtsi128_si32(v16);
          v25.left = 0;
          v17 = GreSelectBitmap(ghdcMem, v26);
          v18 = v13;
          v19 = v17;
          if ( !v13 )
            v18 = v27;
          FillRect(ghdcMem, &v25, v18);
          if ( v13 )
            GreDeleteObject(v13);
          GreSelectBitmap(ghdcMem, v19);
          v5 = 1;
        }
        HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, v26, v5);
      }
      RedirectDCEs(a1);
LABEL_39:
      if ( !v4 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
      }
      Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
      *(_DWORD *)(Prop + 32) |= v6;
      v9 = 0;
    }
  }
LABEL_42:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v24);
  return (unsigned int)v9;
}
