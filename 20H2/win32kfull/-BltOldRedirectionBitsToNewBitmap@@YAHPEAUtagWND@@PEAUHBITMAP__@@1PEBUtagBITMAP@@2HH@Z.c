/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 * Callees:
 *     FillRect @ 0x1C0037B08 (FillRect.c)
 *     GreExcludeClipRect @ 0x1C0067A70 (GreExcludeClipRect.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00FA368 (GreConvertMemToRedirectionDC.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 *     GreConvertRedirectionToMemDC @ 0x1C029FF4C (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v11; // ebx
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // r15d
  __int64 SolidBrush; // rdi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  RECT v20; // [rsp+78h] [rbp-50h] BYREF

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  v12 = GreSelectBitmap(ghdcMem, a2);
  v13 = GreSelectBitmap(ghdcMem2, a3);
  v14 = GreConvertMemToRedirectionDC(ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a2,
    (unsigned int)-a6,
    -a7,
    a4->bmWidth - a6,
    a4->bmHeight - a7,
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a3,
    0,
    0,
    a4->bmWidth + a6,
    a4->bmHeight,
    0);
  SolidBrush = 0LL;
  v16 = NtGdiBitBltInternal(ghdcMem2, -a6, -a7, a4->bmWidth, a4->bmHeight, ghdcMem, 0, 0, -2134114272, 0, 2);
  if ( v11 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
    if ( v17
      || (v18 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1092LL), (_DWORD)v18)
      && (SolidBrush = GreCreateSolidBrush(v18), (v17 = SolidBrush) != 0) )
    {
      if ( v17 <= 0x1F )
        v17 = *(_QWORD *)(gpsi + 8 * v17 + 4688);
      GreExcludeClipRect(ghdcMem2, -a6, -a7, a4->bmWidth - a6, a4->bmHeight - a7);
      v20.left = 0;
      v20.top = 0;
      v20.right = a5->bmWidth;
      v20.bottom = a5->bmHeight;
      FillRect(ghdcMem2, &v20, (HBRUSH)v17);
      GreExtSelectClipRgnInternal(ghdcMem2);
      if ( SolidBrush )
        GreDeleteObject(SolidBrush);
    }
  }
  if ( v14 )
    GreConvertRedirectionToMemDC(ghdcMem2);
  GreSelectBitmap(ghdcMem, v12);
  GreSelectBitmap(ghdcMem2, v13);
  return v16;
}
