/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C004B0D8
 * Callers:
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024275C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     xxxHandleHealthyWindow @ 0x1C00035A0 (xxxHandleHealthyWindow.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C004B224 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C004B3E8 (InternalBeginDeferWindowPos.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsWindowGhosted @ 0x1C00CF8CC (IsWindowGhosted.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CFB60 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(struct tagWND *a1, __int64 a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  __int16 v7; // bx
  int v8; // esi
  unsigned int v11; // r8d
  _BYTE *v12; // rdx
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rax
  struct tagSMWP *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a4;
  v21 = a3;
  v7 = a7;
  v8 = 0;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted(a1) )
    xxxHandleHealthyWindow(a1);
  v11 = 1;
  if ( (v7 & 0xC0) != 0 )
  {
    v18 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v18 + 21) & 1) == 0 )
    {
      v7 |= 3u;
      if ( (v7 & 0x40) != 0 && (*(_BYTE *)(v18 + 31) & 0x10) != 0 )
        v8 = 1;
    }
  }
  v12 = (_BYTE *)*((_QWORD *)a1 + 5);
  v13 = a6;
  v14 = a5;
  if ( (v12[21] & 4) == 0
    && *(_DWORD *)*gpDispInfo > 1u
    && (v7 & 2) == 0
    && (v12[31] & 0x50) == 0
    && (v12[30] & 0xC0) == 0xC0 )
  {
    v19 = *((_QWORD *)a1 + 15);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 40);
      if ( (*(_BYTE *)(v20 + 31) & 0x10) != 0 && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v20 + 88)) )
      {
        FixBogusSWP(a1, &v21, &v22, v14, v13, v7);
        v11 = 1;
      }
    }
  }
  v15 = InternalBeginDeferWindowPos(v11, v12);
  if ( !v15 )
    return 0LL;
  v16 = (struct tagSMWP *)_DeferWindowPos(v15, a1, a2);
  if ( !v16 || !(unsigned int)xxxEndDeferWindowPosEx(v16, v7 & 0x4000) )
    return 0LL;
  if ( v8 )
    xxxRedrawWindow(a1, 0LL, 0LL, 1157);
  return 1LL;
}
