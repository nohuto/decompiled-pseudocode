/*
 * XREFs of xxxDrawAnimatedRects @ 0x1C023EBA4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     NtUserDrawAnimatedRects @ 0x1C01F7C40 (NtUserDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  struct tagRECT v6; // xmm0
  __int64 v7; // rdi
  __int64 DesktopWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 DCEx; // rax
  _DWORD *v12; // rcx
  HDC v13; // r14
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a3;
  v21 = 0LL;
  v6 = *a4;
  v22 = v5;
  v23 = v6;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 || a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    return 1LL;
  if ( !*((_QWORD *)a1 + 13) )
    goto LABEL_12;
  DesktopWindow = GetDesktopWindow(*((_QWORD *)a1 + 13));
  v10 = 0LL;
  if ( v9 != DesktopWindow )
    v10 = v9;
  if ( v10 )
  {
    DCEx = _GetDCEx(v10, 1LL, 65665LL);
    v12 = *(_DWORD **)(v10 + 40);
    v13 = (HDC)DCEx;
    v14 = v12[22];
    v15 = v12[26];
    v16 = v12[23];
    v17 = v12[27];
    do
    {
      *(&v22.left + 2 * v7) += v15 - v14;
      *(&v22.top + 2 * v7++) += v17 - v16;
    }
    while ( v7 < 4 );
  }
  else
  {
LABEL_12:
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    v21 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v19 = GreCreateRectRgnIndirect(&v21);
    if ( !v19 )
      v19 = 1LL;
    v13 = (HDC)_GetDCEx(ThreadDesktopWindow, v19, 1155LL);
  }
  xxxAnimateCaption(a1, v13, &v22, &v23);
  _ReleaseDC(v13);
  return 1LL;
}
