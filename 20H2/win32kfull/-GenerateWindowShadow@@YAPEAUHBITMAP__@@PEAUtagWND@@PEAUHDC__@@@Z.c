/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01373DC
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013709C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0093A7C (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C01368D0 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0136EF4 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0137670 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023DA90 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 */

__int64 __fastcall GenerateWindowShadow(struct tagWND *a1, HDC a2)
{
  __int64 v2; // rax
  int v3; // r15d
  __m128i v6; // xmm0
  int v7; // ecx
  int v8; // r13d
  signed int v9; // r14d
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  LONG bottom; // edi
  LONG right; // esi
  __int64 v19; // rax
  __int64 v20; // rbx
  HBRUSH StockObject; // rax
  __int64 v22; // rdx
  __int64 v24; // rcx
  HBITMAP ScaledWindowShadowFromDIB; // rax
  HBITMAP v26; // rdi
  RECT v27; // [rsp+70h] [rbp-49h] BYREF
  int v28; // [rsp+80h] [rbp-39h] BYREF
  int v29; // [rsp+84h] [rbp-35h]
  void *v30; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v31; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+98h] [rbp-21h]
  _DWORD v33[3]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v34; // [rsp+ACh] [rbp-Dh]
  __int128 v35; // [rsp+B4h] [rbp-5h]
  __int64 v36; // [rsp+C4h] [rbp+Bh]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v31 = a1;
  v36 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v6 = *(__m128i *)(v2 + 88);
  v7 = *(_BYTE *)(v2 + 26) & 0x40;
  v28 = 0;
  v8 = 0;
  v9 = 1;
  v29 = v7;
  v27.top = 0;
  v27.left = 0;
  v27.right = v6.m128i_i32[2] - _mm_cvtsi128_si32(v6);
  v27.bottom = v6.m128i_i32[3] - v6.m128i_i32[1];
  if ( IsRectEmptyInl(&v27) )
    return 0LL;
  v27.right = v10 + 5;
  v27.bottom = v11 + 5;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (v15 = *((_QWORD *)a1 + 5), v16 = *(_DWORD *)(v15 + 288), (v16 & 0xF) == 0)
    && (v16 & 0x40000000) != 0
    && (v24 = *(unsigned __int16 *)(v15 + 284), (_WORD)v24 != 96) )
  {
    v9 = (unsigned __int16)GreGetScaledLogPixels(v24, v12, v13, v14) / 0x60u;
    right = v9 * v27.right;
    bottom = v9 * v27.bottom;
    v27.right *= v9;
    v27.bottom *= v9;
  }
  else
  {
    bottom = v27.bottom;
    right = v27.right;
  }
  v36 = 0LL;
  v35 = 0LL;
  v33[0] = 40;
  v33[1] = right;
  v33[2] = bottom;
  v34 = 2097153LL;
  v19 = GreCreateDIBitmapReal(a2, 0, 0LL, (__int64)v33, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v30);
  v20 = v19;
  if ( !v19 )
    return 0LL;
  v32 = GreSelectBitmap(a2, v19);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v27, StockObject);
  if ( right < 15 || bottom < 15 )
    v8 = 1;
  if ( DrawWindowShadow(v31, a2, v29, v8, &v28) )
  {
    if ( !v28 || v8 )
      DrawRegionalShadow((char *)v30, right, bottom);
    else
      DrawRoundedRectangularShadow(v30, right, bottom, v29, v9);
    v3 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v20, v22);
  if ( !v3 )
    goto LABEL_29;
  if ( v9 > 1 )
  {
    ScaledWindowShadowFromDIB = CreateScaledWindowShadowFromDIB(v31, a2, v9);
    v26 = ScaledWindowShadowFromDIB;
    if ( ScaledWindowShadowFromDIB )
    {
      GreSelectBitmap(a2, ScaledWindowShadowFromDIB);
      GreDeleteObject(v20);
      v20 = (__int64)v26;
    }
    else
    {
      v3 = 0;
    }
  }
  if ( !v3 )
  {
LABEL_29:
    GreSelectBitmap(a2, v32);
    GreDeleteObject(v20);
    return 0LL;
  }
  return v20;
}
