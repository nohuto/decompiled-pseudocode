/*
 * XREFs of ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x18000B230
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18000B510 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SizeConstraintsQueried(
        CWin32ApplicationView *this,
        unsigned int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
  struct tagSIZE v10; // [rsp+40h] [rbp+18h] BYREF
  struct tagSIZE v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v4 = CWin32ApplicationView::SetSizeConstraintsForDpi((CWin32ApplicationView *)((char *)this - 160), &v9, &v10, &v11);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x393,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
