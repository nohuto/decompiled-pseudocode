/*
 * XREFs of ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0137670
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01373DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     NtGdiFrameRgn @ 0x1C01336A0 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C013B480 (NtGdiFillRgn.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029E348 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall DrawWindowShadow(struct tagWND *a1, HDC a2, int a3, int a4, int *a5)
{
  unsigned int v8; // r14d
  __int64 RectRgn; // rdi
  __int64 v10; // rax
  HRGN v11; // rsi
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  unsigned __int8 *v21; // r15
  HBRUSH SolidBrush; // rax
  HBRUSH v23; // r12
  __int64 v24; // rcx
  __int128 v26; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0;
  v26 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v10 = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  v11 = (HRGN)v10;
  if ( RectRgn && v10 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v12 + 168) || (*(_BYTE *)(v12 + 21) & 8) != 0 )
    {
      v13 = -(int)v26;
      LODWORD(v26) = 0;
      v14 = HIDWORD(v26) - DWORD1(v26);
      DWORD1(v26) = 0;
      HIDWORD(v26) = v14;
      DWORD2(v26) += v13;
      GreSetRectRgn(RectRgn, 0LL, 0LL, DWORD2(v26), v14);
      v15 = 1;
    }
    else
    {
      SetRectRgnIndirect(RectRgn, &v26);
      GreCombineRgn(RectRgn, RectRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL), 1LL);
      GreOffsetRgn(RectRgn, (unsigned int)-(int)v26, (unsigned int)-DWORD1(v26));
      v15 = 0;
    }
    *a5 = v15;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                    + 64LL) & 1) != 0
      && (v16 = *((_QWORD *)a1 + 5), v17 = *(_DWORD *)(v16 + 288), (v17 & 0xF) == 0)
      && (v17 & 0x40000000) != 0
      && (v24 = *(unsigned __int16 *)(v16 + 284), (_WORD)v24 != 96) )
    {
      v8 = GreScaleRgnToDestLogPixel(v24, RectRgn);
      if ( !v8 )
        goto LABEL_16;
    }
    else
    {
      v8 = 1;
    }
    v18 = 5;
    GreCombineRgn(v11, RectRgn, 0LL, 5LL);
    v19 = 5LL;
    if ( a3 )
    {
      GreOffsetRgn(RectRgn, 5LL, 0LL);
      v19 = 0LL;
    }
    GreOffsetRgn(v11, v19, 5LL);
    if ( !*a5 || a4 )
    {
      v21 = (unsigned __int8 *)&unk_1C02EE754;
      while ( 1 )
      {
        SolidBrush = (HBRUSH)GreCreateSolidBrush(*v21 | (*v21 << 16) | (*v21 << 8));
        v23 = SolidBrush;
        if ( !SolidBrush )
          break;
        NtGdiFrameRgn(a2, v11, SolidBrush, v18, v18);
        GreDeleteObject(v23);
        --v18;
        --v21;
        if ( v18 <= 0 )
        {
          GreGetStockObject(4LL);
          goto LABEL_15;
        }
      }
      v8 = 0;
    }
    else
    {
      GreCombineRgn(v11, v11, RectRgn, 4LL);
      GreGetStockObject(0LL);
LABEL_15:
      NtGdiFillRgn(a2);
    }
  }
LABEL_16:
  GreDeleteObject(RectRgn);
  GreDeleteObject(v11);
  return v8;
}
