/*
 * XREFs of GreExcludeClipRect @ 0x1C0067A70
 * Callers:
 *     NtGdiExcludeClipRect @ 0x1C0067A50 (NtGdiExcludeClipRect.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DAF0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  ULONG v12; // ecx
  int v14; // eax
  DC *v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v17; // [rsp+50h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v8 = 0;
  if ( !v15[0] )
  {
LABEL_7:
    v12 = 6;
LABEL_8:
    EngSetLastError(v12);
    goto LABEL_9;
  }
  v9 = *((unsigned __int16 *)v15[0] + 6);
  if ( (unsigned __int16)v9 > 1u )
  {
    v10 = *((_QWORD *)v15[0] + 6);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 40);
    else
      v11 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(10LL, v11, v9);
    goto LABEL_7;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, (struct XDCOBJ *)v15, 0x80000204);
  v17.left = a2;
  v17.top = a3;
  v17.right = a4;
  v17.bottom = a5;
  if ( (*(_DWORD *)(v16[0] + 32LL) & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v16, (struct ERECTL *)&v17);
    ERECTL::vOrder((ERECTL *)&v17);
    v14 = DC::iCombine(v15[0], &v17, 4);
  }
  else
  {
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v12 = 87;
      goto LABEL_8;
    }
    v14 = DC::iCombine(v15[0], (struct EXFORMOBJ *)v16, &v17, 4);
  }
  v8 = v14;
  if ( v14 > 1 )
    v8 = 3;
LABEL_9:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v8;
}
