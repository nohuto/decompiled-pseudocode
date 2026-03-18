/*
 * XREFs of InvalidateGDIWindows @ 0x1C01E8E70
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C02884BC (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  struct EWNDOBJ *v3; // rdi
  unsigned int v4; // r9d
  __int64 i; // rbx
  HRGN v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp(a1, (unsigned __int16)atomWndObj, 1LL);
    v3 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v6 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v4 = (4 * (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 4)) | 1;
      else
        v4 = 24;
      CalcVisRgn(&v6, a1, (struct tagWND *)a1, v4);
      GreSetClientRgn(v3);
    }
    for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
