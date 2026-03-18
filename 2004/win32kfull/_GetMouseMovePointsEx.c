/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01DA43C
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C01FB6C0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C0118904 (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  unsigned int v24; // r12d
  unsigned int v25; // edi
  int v26; // ecx
  int v27; // edx
  INT v28; // r14d
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r14
  __m128i v32; // xmm6
  INT v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // [rsp+20h] [rbp-A8h] BYREF
  int v39; // [rsp+28h] [rbp-A0h]
  unsigned int i; // [rsp+2Ch] [rbp-9Ch]
  unsigned __int64 v41; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  __int128 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+58h] [rbp-70h] BYREF
  __m128i v46[3]; // [rsp+68h] [rbp-60h] BYREF

  i = 0;
  v39 = 0;
  v45 = 0LL;
  LODWORD(v43) = *a1;
  HIDWORD(v43) = a1[2];
  v38 = 0LL;
  v41 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  LogicalToPhysicalDPIPoint(&v45, &v43, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v7 = (gptInd - 1) & 0x3F;
  else
    v7 = 63;
  v8 = v7;
  v44 = *(_OWORD *)(*gpDispInfo + 24LL);
  while ( 1 )
  {
    v9 = 0;
    v10 = gaptMouse;
    v11 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v8) >> 16;
    if ( !(_WORD)v11
      || (v12 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v8 + 1) >> 16,
          v6 = (unsigned __int16)v12,
          !(_WORD)v12) )
    {
LABEL_22:
      v22 = v39;
      goto LABEL_23;
    }
    v13 = (unsigned __int16)v11 + 1;
    v14 = (unsigned __int16)v12 + 1;
    v15 = DWORD2(v44) - v44;
    v16 = *((__int16 *)&gaptMouse + 12 * v8);
    v42 = v16;
    if ( v13 != DWORD2(v44) - (_DWORD)v44 )
    {
      v6 = v16 * v15 % v13;
      v16 = v16 * v15 / v13;
      v42 = v16;
    }
    v17 = HIDWORD(v44) - DWORD1(v44);
    v18 = *((__int16 *)&gaptMouse + 12 * v8 + 2);
    if ( v14 != HIDWORD(v44) - DWORD1(v44) )
    {
      v6 = v18 * v17 % v14;
      v18 = v18 * v17 / v14;
    }
    if ( __PAIR64__(v18, v16) == v45 )
      goto LABEL_17;
    if ( (W32GetCurrentThreadDpiAwarenessContext(DWORD1(v44)) & 0xF) != 2 )
    {
      v41 = __PAIR64__(v18, v42);
      v20 = W32GetCurrentThreadDpiAwarenessContext(v19);
      PhysicalToLogicalDPIPoint(&v38, &v41, v20, 0LL);
      if ( v38 == v43 )
        v9 = 1;
    }
    if ( v9 )
    {
LABEL_17:
      v21 = *((_DWORD *)a1 + 2);
      if ( !v21 || v21 == *((_DWORD *)&gaptMouse + 6 * v8 + 2) )
        break;
    }
    if ( v8 )
      v8 = ((_BYTE)v8 - 1) & 0x3F;
    else
      v8 = 63;
    if ( v8 == v7 )
      goto LABEL_22;
  }
  v22 = 1;
LABEL_23:
  if ( !v22 )
  {
    UserSetLastError(1171LL, v6, v10);
    return 0xFFFFFFFFLL;
  }
  v24 = v8 - v7 + 64;
  if ( v8 > v7 )
    v24 = v8 - v7;
  if ( v24 >= a3 )
    v24 = a3;
  v25 = 0;
  for ( i = 0; v25 < v24; i = v25 )
  {
    v26 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v8));
    v27 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v8 + 1));
    v28 = v27 + 1;
    if ( !(_WORD)v26 || !(_WORD)v27 )
      break;
    LODWORD(v41) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v8), DWORD2(v44) - v44, v26 + 1);
    HIDWORD(v41) = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v8 + 2), HIDWORD(v44) - DWORD1(v44), v28);
    v30 = W32GetCurrentThreadDpiAwarenessContext(v29);
    PhysicalToLogicalDPIPoint(&v38, &v41, v30, 0LL);
    v31 = v25;
    if ( a4 == 2 )
    {
      v32 = *GetScreenRect(v46);
      *(__m128i *)((char *)&v46[1] + 8) = v32;
      *(_DWORD *)(a2 + 24LL * v25) = EngMulDiv(
                                       (unsigned __int16)v38,
                                       0x10000,
                                       _mm_cvtsi128_si32(_mm_srli_si128(v32, 8)) - _mm_cvtsi128_si32(v32) - 1);
      v33 = EngMulDiv(
              WORD2(v38),
              0x10000,
              _mm_cvtsi128_si32(_mm_srli_si128(v32, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v32, 4)) - 1);
      v34 = 3LL * v25;
LABEL_40:
      *(_DWORD *)(a2 + 8 * v34 + 4) = v33;
      goto LABEL_41;
    }
    *(_QWORD *)(a2 + 24LL * v25) = v38;
    v31 = v25;
    v34 = 3LL * v25;
    v35 = *(_DWORD *)(a2 + 24LL * v25);
    if ( v35 < 0 )
      *(_DWORD *)(a2 + 24LL * v25) = v35 + 0x10000;
    v36 = *(_DWORD *)(a2 + 24LL * v25 + 4);
    if ( v36 < 0 )
    {
      v33 = v36 + 0x10000;
      goto LABEL_40;
    }
LABEL_41:
    v37 = 3 * v31;
    *(_DWORD *)(a2 + 8 * v37 + 8) = *((_DWORD *)&gaptMouse + 6 * v8 + 2);
    *(_QWORD *)(a2 + 8 * v37 + 16) = *((_QWORD *)&gaptMouse + 3 * v8 + 2);
    if ( v8 )
      v8 = ((_BYTE)v8 - 1) & 0x3F;
    else
      v8 = 63;
    ++v25;
  }
  return v25;
}
