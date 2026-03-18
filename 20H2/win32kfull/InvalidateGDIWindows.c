/*
 * XREFs of InvalidateGDIWindows @ 0x1C01E81B0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E81B0 (InvalidateGDIWindows.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     InvalidateGDIWindows @ 0x1C01E81B0 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C0286F4C (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(struct tagWND *a1)
{
  __int64 Prop; // rax
  struct EWNDOBJ *v3; // rdi
  unsigned int v4; // r9d
  __int64 i; // rbx
  HRGN v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp((__int64)a1, (unsigned __int16)atomWndObj, 1LL);
    v3 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v6 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v4 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 1;
      else
        v4 = 24;
      CalcVisRgn(&v6, a1, a1, v4);
      GreSetClientRgn(v3);
    }
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
