/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0062C10
 * Callers:
 *     DrawFrameControl @ 0x1C00623A8 (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     FillRect @ 0x1C0062024 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011241C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, struct tagRECT *a2, __int16 a3)
{
  unsigned __int16 *v3; // r14
  int v5; // r15d
  int v8; // eax
  int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  int v15; // r12d
  int v16; // r13d
  unsigned __int16 *v17; // r14
  __int64 i; // rbx
  HBRUSH *v20; // r8
  int v21; // [rsp+20h] [rbp-49h]
  int v22; // [rsp+50h] [rbp-19h]
  int v23; // [rsp+54h] [rbp-15h]
  _DWORD v24[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h]
  int v26; // [rsp+70h] [rbp+7h]
  __int64 v27; // [rsp+74h] [rbp+Bh]
  __int64 v28; // [rsp+7Ch] [rbp+13h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v20 = (HBRUSH *)ghbrWhite;
    v28 = 0LL;
    v27 = 0LL;
    v26 = 0;
    goto LABEL_20;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4592LL);
    LODWORD(v28) = v8;
    HIDWORD(v27) = v8;
    LODWORD(v27) = v8;
  }
  else
  {
    LODWORD(v27) = *(_DWORD *)(gpsi + 4656LL);
    HIDWORD(v27) = *(_DWORD *)(gpsi + 4652LL);
    LODWORD(v28) = *(_DWORD *)(gpsi + 4648LL);
    v8 = *(_DWORD *)(gpsi + 4632LL);
  }
  HIDWORD(v28) = v8;
  if ( (a3 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 4628LL);
  }
  else if ( v5 == 1032 )
  {
    v9 = *(_DWORD *)(gpsi + 4648LL);
  }
  else
  {
    v9 = *(_DWORD *)(gpsi + 4588LL);
  }
  v26 = v9;
  if ( (a3 & 1) != 0 )
  {
    v20 = (HBRUSH *)ghbrBlack;
LABEL_20:
    FillRect(a1, a2, *v20);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = (const wchar_t *)L"nmlkji";
  v3 = (unsigned __int16 *)v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v23 = v12;
  v22 = v13;
  v14 = v13;
  if ( v13 >= v12 )
    v14 = a2->bottom - top;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF) )
  {
    GreSetBkColor(a1);
    GreSetTextColor(a1);
    v24[0] = v15;
    v24[2] = v22;
    v24[3] = v23;
    v24[1] = v16;
    v25 = *(_QWORD *)(gpsi + 4944LL);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v24, 1u);
    GreSetBkColor(a1);
  }
  else
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v3, 1u, 0LL, 0LL, 0);
  }
  v17 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v17++, 1u, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    GreSetTextColor(a1);
    FlipUserTextOutW(a1, v15, v16, v17, v21);
  }
  GreSetTextColor(a1);
  return 1LL;
}
