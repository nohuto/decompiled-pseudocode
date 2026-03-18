/*
 * XREFs of xxxPrintWindow @ 0x1C01E8730
 * Callers:
 *     NtUserPrintWindow @ 0x1C0200F20 (NtUserPrintWindow.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C0024D40 (GetRedirectionFlags.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, char a3)
{
  _DWORD *v3; // r9
  int v5; // edi
  int v6; // r12d
  int v7; // r14d
  int v8; // r13d
  int v9; // r15d
  struct tagWND *StyleWindow; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND *v13; // rbx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // rcx
  HDC DCEx; // rbx
  __int128 v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+70h] [rbp+7h] BYREF
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  int v27[16]; // [rsp+80h] [rbp+17h] BYREF
  int v29; // [rsp+E0h] [rbp+77h]

  v29 = 0;
  v3 = (_DWORD *)*((_QWORD *)a1 + 5);
  *(_OWORD *)v27 = 0LL;
  v5 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v6 = v3[26] - v3[22];
    v7 = v3[28] - v3[26];
    v8 = v3[27] - v3[23];
    v9 = v3[29] - v3[27];
  }
  else
  {
    v6 = 0;
    v7 = v3[24] - v3[22];
    v8 = 0;
    v9 = v3[25] - v3[23];
  }
  if ( (a3 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v13 = StyleWindow) != 0LL) )
  {
    if ( StyleWindow != a1 )
    {
      v14 = *((_QWORD *)a1 + 5);
      if ( v5 )
        v15 = *(_OWORD *)(v14 + 104);
      else
        v15 = *(_OWORD *)(v14 + 88);
      v16 = *((_QWORD *)v13 + 5);
      v23 = v15;
      v17 = *(__m128i *)(v16 + 88);
      LODWORD(v16) = _mm_cvtsi128_si32(v17);
      HIDWORD(v23) -= v17.m128i_i32[1];
      DWORD1(v23) -= v17.m128i_i32[1];
      LODWORD(v23) = v23 - v16;
      DWORD2(v23) -= v16;
      v25 = v17.m128i_i32[2] - v16;
      v26 = v17.m128i_i32[3] - v17.m128i_i32[1];
      v24 = 0LL;
      v18 = IntersectRect(v27, (int *)&v24, (int *)&v23);
      if ( !v18 )
        return v18;
      v7 = v27[2] - v27[0];
      v8 = v27[1];
      v9 = v27[3] - v27[1];
    }
    if ( gdwInAtomicOperation )
    {
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v11, gdwInAtomicOperation, v12);
    v18 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)v13, v8, v7, v9);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v19 = SetRedirectedWindow(a1, 8);
      v20 = *((_QWORD *)a1 + 5);
      if ( v19 < 0 )
        return (*(unsigned __int8 *)(v20 + 26) >> 5) & 1;
      *(_DWORD *)(v20 + 232) |= 4u;
      v29 = 1;
    }
    v18 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v7, v9, DCEx, v6, v8, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v29 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1, 8);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    }
  }
  return v18;
}
