/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0063270
 * Callers:
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C005FB74 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  LONG top; // r11d
  int v6; // eax
  int v7; // ecx
  int v8; // r9d
  int v10; // r15d
  int v11; // ebp
  int v12; // r12d
  int v13; // edi
  int v14; // esi
  int v15; // ebp
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v17) = a4;
  top = a2->top;
  v6 = a2->right - a2->left;
  v7 = v6;
  v8 = a2->bottom - top;
  if ( v6 >= v8 )
    v7 = a2->bottom - top;
  v10 = (v6 - v7) / 2 + a2->left;
  v11 = (v8 - v7) / 2 + top;
  v12 = a3 & 0x100;
  GreSetTextColor(a1);
  v13 = a3 & 0x300;
  v14 = v11 + 1;
  if ( !v13 )
    v14 = v11;
  v15 = v10 + 1;
  if ( !v13 )
    v15 = v10;
  GreExtTextOutWInternal(a1, v15, v14, 0, 0LL, (unsigned __int16 *)&v17, 1u, 0LL, 0LL, 0);
  if ( v12 )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v15 - 1, v14 - 1, 0, 0LL, (unsigned __int16 *)&v17, 1u, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1);
  return 1LL;
}
