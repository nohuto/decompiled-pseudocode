/*
 * XREFs of _InitPwSB @ 0x1C0027658
 * Callers:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F12F4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxShowScrollBar @ 0x1C010B104 (xxxShowScrollBar.c)
 * Callees:
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C002A9BC (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     DesktopAlloc @ 0x1C00ADCA0 (DesktopAlloc.c)
 */

__int64 __fastcall InitPwSB(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rax

  v1 = a1 + 152;
  v2 = 0LL;
  result = *(_QWORD *)(a1 + 152);
  if ( !result )
  {
    v4 = DesktopAlloc(*(_QWORD *)(a1 + 24), 36LL, 6LL);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v1, v4);
    if ( *(_QWORD *)v1 )
    {
      *(_DWORD *)(*(_QWORD *)v1 + 24LL) = 100;
      *(_DWORD *)(*(_QWORD *)v1 + 8LL) = 100;
      return *(_QWORD *)v1;
    }
    return v2;
  }
  return result;
}
